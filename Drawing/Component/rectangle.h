#ifndef RECTANGLE_H
#define RECTANGLE_H



#include <QObject>
#include <QWidget>
#include <QPushButton>

#include <QPoint>
#include <QDebug>

class Rectangle : public QPushButton
{
    Q_OBJECT
public:
    explicit Rectangle(QWidget *parent = 0);
    Rectangle(Rectangle* c,QWidget *parent = 0);

    Rectangle*  pComponent;
    QPoint      coordinate;
    QSize       size;
private:


signals:

protected:


public slots:
    void slot_clicked(bool f);
};

#endif // COMPENT_H