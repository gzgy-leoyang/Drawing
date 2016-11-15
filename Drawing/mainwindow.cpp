#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "DrawPanel/drawpanel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DrawPanel* dp = new DrawPanel(ui->DrawingZone);

}

MainWindow::~MainWindow()
{
    delete ui;
}
