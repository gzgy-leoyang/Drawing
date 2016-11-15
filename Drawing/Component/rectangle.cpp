#include "Component/rectangle.h"
#include "DrawPanel/drawpanel.h"

Rectangle::
Rectangle(QWidget *parent) : QPushButton(parent){
    connect(this,&QPushButton::clicked,this,&Rectangle::slot_clicked);
}

Rectangle::
Rectangle(Rectangle* c,QWidget *parent) : QPushButton(parent){
    pComponent = c;
    connect(this,&QPushButton::clicked,this,&Rectangle::slot_clicked);
}

void Rectangle::
slot_clicked(bool f){
    DrawPanel * p = (DrawPanel*)this->parent();
    p->updateComponentInfo(this);
}

