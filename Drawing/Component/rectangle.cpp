#include "Component/rectangle.h"
#include "DrawPanel/drawpanel.h"

Rectangle::
Rectangle(QWidget *parent) : Component(parent){
    connect(this,&Component::clicked,this,&Rectangle::slot_clicked);
}

Rectangle::
Rectangle(Rectangle* c,QWidget *parent) : Component(parent){
    pComponent = c;
    connect(this,&Component::clicked,this,&Rectangle::slot_clicked);
}

void Rectangle::
slot_clicked(bool f){
    DrawPanel * p = (DrawPanel*)this->parent();
    p->updateComponentInfo(this);
}

