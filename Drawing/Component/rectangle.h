#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "Component/component.h"

#include <QObject>
#include <QWidget>
#include <QPushButton>

#include <QPoint>
#include <QDebug>

class Rectangle : public Component
{
    Q_OBJECT
public:
    explicit Rectangle(QWidget *parent = 0);
private:


signals:

protected:


public slots:
    void slot_clicked(bool f);
};

#endif // COMPENT_H
