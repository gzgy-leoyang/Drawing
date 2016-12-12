#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "DrawPanel/drawpanel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DrawPanel* dp = new DrawPanel(componentList,ui->DrawingZone);
    connect(dp,&DrawPanel::insertNewComponent,this,&MainWindow::slot_newComponent);

    ui->Property_Table->setColumnCount(2);    //设置列数
    ui->Property_Table->setRowCount(5);        //设置行数/
    /*设置列名*/
    QStringList headers;
    headers<<"名称"<<"参数";
    ui->Property_Table->setHorizontalHeaderLabels(headers);
    ui->Property_Table->setItem(0,0,new QTableWidgetItem("SIZE"));
    ui->Property_Table->setItem(1,0,new QTableWidgetItem("COORLDINATE"));

    /// ui->Component_Tree
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::
slot_newComponent(Component* cmp){
    componentList.append(cmp);
    connect(cmp,&Rectangle::clicked,this,&MainWindow::slot_componentClick);

    QStringList strList ;
    strList<<"Component"+QString::number(componentList.count()-1);
    QTreeWidgetItem *item = new QTreeWidgetItem(ui->Component_Tree,strList);

    ui->Component_Tree->addTopLevelItem(item);

    QSize size = cmp->size;
    QPoint point = cmp->coordinate;

    QString str = "("+ QString::number( size.width()) + "," + QString::number(size.height())+")";
    ui->Property_Table->setItem(0,1,new QTableWidgetItem(str));

    str = "("+ QString::number( point.x()) + "," + QString::number(point.y())+")";
    ui->Property_Table->setItem(1,1,new QTableWidgetItem(str));
}

void MainWindow::
slot_componentClick(){
    Component* obj = (Component*)sender();

    QSize size = obj->size;
    QPoint point = obj->coordinate;

    QString str = "("+ QString::number( size.width()) + "," + QString::number(size.height())+")";
    ui->Property_Table->setItem(0,1,new QTableWidgetItem(str));

    str = "("+ QString::number( point.x()) + "," + QString::number(point.y())+")";
    ui->Property_Table->setItem(1,1,new QTableWidgetItem(str));
}
