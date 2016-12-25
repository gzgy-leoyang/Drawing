#include "component.h"

//#define _MIN_W  (90)
//#define _MIN_H  (90)

#define _MIN_W  (610)
#define _MIN_H  (610)

Component::Component(QWidget *parent) : QPushButton(parent){

    setGeometry(0,0,_MIN_W,_MIN_H);
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::white);
    setPalette(palette);

    mouseHasPress = false;
    mouseHasRelease = false ;

    backgroundPix = new QPixmap(_MIN_W,_MIN_H);
    backgroundPix->fill(Qt::gray);

    startP.setX(0);
    startP.setY(0);

    endP.setX(0);
    endP.setY(0);
}

Component::Component(Component *parent) : QPushButton(parent){

    parentComponent = parent ;
    setGeometry(0,0,_MIN_W,_MIN_H);
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::white);
    setPalette(palette);

    mouseHasPress = false;
    mouseHasRelease = false ;

    backgroundPix = new QPixmap(500,500);
    backgroundPix->fill(Qt::green);

    startP.setX(0);
    startP.setY(0);

    endP.setX(0);
    endP.setY(0);
}


void Component::
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
//        paintform.drawPixmap(0,0,_MIN_W,_MIN_H,*backgroundPix);
        paintform.drawPixmap(0,0,500,500,*backgroundPix);
        // 在画布上绘制目标对象
        QRect * rect = new QRect(startP,endP);
        paintform.drawRect(*rect);
    } else if( !mouseHasPress && mouseHasRelease ){
        QPoint point = startP - endP;
        if (point.manhattanLength() < 10){
            paintform.drawPixmap(0,0,500,500,*backgroundPix);
            return;
        } else {
            // 释放，将原来绘制在 form 上的对象，重新绘制到 pix 上
            if( (startP.x() < endP.x()) &&( startP.y() < endP.y() ) ){
                // 定义从 “左上-->右下” 的拖曳操作方式
                mCurRect = new QRect(startP,endP);
                paintPix.drawRect(*mCurRect);
                // 再将 pix 绘制到 form 上
                paintform.drawPixmap(0,0,500,500,*backgroundPix);
                mouseHasRelease = false;
            }
        }
    } else {
        // 没有按下或释放
        paintform.drawPixmap(0,0,500,500,*backgroundPix);
    }
}


void Component::mouseMoveEvent(QMouseEvent *event){
    if( mouseHasPress){
        endP = event->pos();
        update();
    }
}


void Component::mousePressEvent(QMouseEvent *event){
    if( event->button()==Qt::LeftButton ){
        startP = event->pos();
        mouseHasPress = true;
        mouseHasRelease = false;
    }
}


void Component::
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
            /// 在元件内部再生成“子元件”
            Component* c = new Component(this);
            c->show();
            c->setGeometry(*mCurRect);
            c->coordinate = startP;
            c->size = mCurRect->size();
            /// 将新的元件添加到她自身的 childComponentList 中
            childComponentList.append(c);
            emit createNewComponent();
        }
    }
}


void Component::repaint()//重画时
{
    QPainter paintform(this);
    paintform.drawPixmap(0,0,_MIN_W,_MIN_H,*backgroundPix);
}

