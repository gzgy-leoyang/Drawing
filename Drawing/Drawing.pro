#-------------------------------------------------
#
# Project created by QtCreator 2016-11-13T11:21:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Drawing
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Component/rectangle.cpp \
    DrawPanel/drawpanel.cpp

HEADERS  += mainwindow.h \
    Component/rectangle.h \
    DrawPanel/drawpanel.h

FORMS    += mainwindow.ui
