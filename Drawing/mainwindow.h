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


private:
    Ui::MainWindow *ui;
    Component* DrawComponent;

private slots:
    void slot_newComponent(Component* cmp);
    void slot_addNewComponent();
    void slot_componentClick();
};

#endif // MAINWINDOW_H
