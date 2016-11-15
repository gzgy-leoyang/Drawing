#include "DrawPanel/drawpanel.h"

#include<QPalette>
#include<Qstring>

#define _W  (610)
#define _H  (610)

DrawPanel::DrawPanel(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(0,0,_W,_H);
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::white);
    setPalette(palette);

    infoLb = new QLabel("INFO",this);
    infoLb->setGeometry(10,10,500,30);

    /// 在当前控件中，建立一个“影子元件”，在建立真正元件（附属）的
    /// 过程中，将影子元件的指针传入，借此可以在真实元件被点击的
    /// 处理的同时，将真实元件的信息传递到当前控件
    mCurComponent = new Rectangle(this);
    mCurComponent->hide();


    mouseHasPress = false;
    mouseHasRelease = false ;

    backgroundPix = new QPixmap(_W,_H);
    backgroundPix->fill(Qt::white);

    startP.setX(0);
    startP.setY(0);

    endP.setX(0);
    endP.setY(0);
}

DrawPanel::~DrawPanel()
{

}

void DrawPanel::
updateComponentInfo(Rectangle* c){
    QString str =   "X:"+QString::number(c->coordinate.x())  + " " +
                    "Y:"+QString::number(c->coordinate.y())  + " " +
                    "W:"+QString::number(c->size.width())    + " " +
                    "H:"+QString::number(c->size.height());
    infoLb->setText(str );
}

void DrawPanel::
paintEvent(QPaintEvent * e){
    Q_UNUSED(e);

    QPainter paintPix(backgroundPix);
    QPainter paintform(this);

    QPen pen;
    pen.setColor(Qt::black);
    pen.setWidth(1);
    pen.setStyle(Qt::SolidLine);

    paintPix.setPen(pen);

    if(mouseHasPress && !mouseHasRelease ){
        // 按下，移动过程，绘制在 form 上
        // 先绘制画布
        paintform.drawPixmap(0,0,_W,_H,*backgroundPix);
        // 在画布上绘制目标对象
        QRect * rect = new QRect(startP,endP);
        paintform.drawRect(*rect);
    } else if( !mouseHasPress && mouseHasRelease ){
        QPoint point = startP - endP;
        if (point.manhattanLength() < 10){
            paintform.drawPixmap(0,0,_W,_H,*backgroundPix);
            return;
        } else {
            // 释放，将原来绘制在 form 上的对象，重新绘制到 pix 上
            if( (startP.x() < endP.x()) &&( startP.y() < endP.y() ) ){
                // 定义从 “左上-->右下” 的拖曳操作方式
                //mCurRect = new QRect(startP,endP);
                paintPix.drawRect(*mCurRect);
                // 再将 pix 绘制到 form 上
                paintform.drawPixmap(0,0,_W,_H,*backgroundPix);
                mouseHasRelease = false;
            }
        }
    } else {
        // 没有按下或释放
        paintform.drawPixmap(0,0,_W,_H,*backgroundPix);
    }
}

void DrawPanel::mouseMoveEvent(QMouseEvent *event){
    if( mouseHasPress){
        endP = event->pos();
        update();
    }
}

void DrawPanel::mousePressEvent(QMouseEvent *event){
    if( event->button()==Qt::LeftButton ){
        startP = event->pos();
        mouseHasPress = true;
        mouseHasRelease = false;
    }
}

void DrawPanel::
mouseReleaseEvent(QMouseEvent *event){
    if( event->button()==Qt::LeftButton ){
        endP = event->pos();
        mouseHasRelease = true;
        mouseHasPress = false;
        update();

        // 释放，将原来绘制在 form 上的对象，重新绘制到 pix 上
        if( (startP.x() < endP.x()) &&( startP.y() < endP.y() ) ){
            // 定义从 “左上-->右下” 的拖曳操作方式
            mCurRect = new QRect(startP,endP);
            Rectangle* c = new Rectangle(mCurComponent,this);
//            component* c = new component(this);
            c->show();
            c->setGeometry(*mCurRect);
            c->coordinate = startP;
            c->size = mCurRect->size();
            componentList.append(c);
        }
    }
}

void DrawPanel::repaint()//重画时
{
    QPainter paintform(this);
    paintform.drawPixmap(0,0,_W,_H,*backgroundPix);
}
