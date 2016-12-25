#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "DrawPanel/drawpanel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //componentList = new QList();
    /// 将队列的引用传给 "绘图板",之后这个引用会一级一级的传递下去，确保任何一级都可以向该队列中添加
    /// 新建的元件对象
    DrawComponent = new Component(ui->DrawingZone);
    DrawComponent->setBackground(Qt::white,611,589);
    connect(DrawComponent,&Component::createNewComponent,this,&MainWindow::slot_addNewComponent);



    ui->Property_Table->setColumnCount(2);    //设置列数
    ui->Property_Table->setRowCount(5);        //设置行数/
    /*设置列名*/
    QStringList headers;
    headers<<"名称"<<"参数";
    ui->Property_Table->setHorizontalHeaderLabels(headers);
    ui->Property_Table->setItem(0,0,new QTableWidgetItem("SIZE"));
    ui->Property_Table->setItem(1,0,new QTableWidgetItem("COORLDINATE"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::
eventFilter(QObject * obj, QEvent *e){

    return true;
}

void MainWindow::
slot_addNewComponent(){
    QStringList strList ;
    QTreeWidgetItem *item = NULL;
    QTreeWidgetItem *chileItem = NULL;

    Component* tempC = NULL;
    QList<Component*> list = DrawComponent->childComponentList;

    ui->Component_Tree->clear();

    for(int i=0;i<list.count();i++){
        tempC = list.at(i);
        strList<<"Component"+QString::number(i);
        item = new QTreeWidgetItem(ui->Component_Tree,strList);
        strList.clear();
        ui->Component_Tree->addTopLevelItem(item);
        if( tempC->childComponentList.count()>0){
            for(int j=0;j< tempC->childComponentList.count();j++){
                tempC = tempC->childComponentList.at(j);
                strList<<"Component"+QString::number(i)+QString::number(j);
                chileItem->addChild(new QTreeWidgetItem(item,strList));
                strList.clear();
            }
        }
    }

//    qDebug()<<"componentList.count:"<< DrawComponent->childComponentList.count();

//    QStringList strList ;
//    strList<<"Component"+QString::number(DrawComponent->childComponentList.count());
//    QTreeWidgetItem *item = new QTreeWidgetItem(ui->Component_Tree,strList);

//    ui->Component_Tree->addTopLevelItem(item);

//    Component *cmp = DrawComponent->childComponentList.last();
//    QSize size = cmp->size;
//    QPoint point = cmp->coordinate;

//    QString str = "("+ QString::number( size.width()) + "," + QString::number(size.height())+")";
//    ui->Property_Table->setItem(0,1,new QTableWidgetItem(str));

//    str = "("+ QString::number( point.x()) + "," + QString::number(point.y())+")";
//    ui->Property_Table->setItem(1,1,new QTableWidgetItem(str));
}

void MainWindow::
slot_newComponent(Component* cmp){
//    componentList.append(cmp);
//    connect(cmp,&Rectangle::clicked,this,&MainWindow::slot_componentClick);

//    QStringList strList ;
//    strList<<"Component"+QString::number(componentList.count()-1);
//    QTreeWidgetItem *item = new QTreeWidgetItem(ui->Component_Tree,strList);

//    ui->Component_Tree->addTopLevelItem(item);

//    QSize size = cmp->size;
//    QPoint point = cmp->coordinate;

//    QString str = "("+ QString::number( size.width()) + "," + QString::number(size.height())+")";
//    ui->Property_Table->setItem(0,1,new QTableWidgetItem(str));

//    str = "("+ QString::number( point.x()) + "," + QString::number(point.y())+")";
//    ui->Property_Table->setItem(1,1,new QTableWidgetItem(str));
}

void MainWindow::
slot_componentClick(){
//    Component* obj = (Component*)sender();

//    QSize size = obj->size;
//    QPoint point = obj->coordinate;

//    QString str = "("+ QString::number( size.width()) + "," + QString::number(size.height())+")";
//    ui->Property_Table->setItem(0,1,new QTableWidgetItem(str));

//    str = "("+ QString::number( point.x()) + "," + QString::number(point.y())+")";
//    ui->Property_Table->setItem(1,1,new QTableWidgetItem(str));
}
