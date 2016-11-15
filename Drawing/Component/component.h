#ifndef COMPONENT_H
#define COMPONENT_H

#include <QWidget>
#include <QPushButton>

class Component : public QPushButton
{
    Q_OBJECT
public:
    explicit Component(QWidget *parent = 0);
    QPoint      coordinate;
    QSize       size;
};

#endif // COMPONENT_H
