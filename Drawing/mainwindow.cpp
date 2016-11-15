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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::
slot_newComponent(){

}
