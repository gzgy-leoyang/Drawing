#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Component/component.h"

#include <QMainWindow>
#include <QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QList<Component*> componentList;

private:
    Ui::MainWindow *ui;
private slots:
    void slot_newComponent();
};

#endif // MAINWINDOW_H
