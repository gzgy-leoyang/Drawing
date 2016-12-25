#ifndef COMPONENT_H
#define COMPONENT_H

#include <QWidget>
#include <QPushButton>

#include <QObject>
#include <QWidget>

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include <QPushButton>
#include <QLabel>
#include <QList>

#include <QPainter>

class Component : public QPushButton
{
    Q_OBJECT
public:
    explicit Component(QWidget *parent = 0);
    Component(Component *parent = 0);
    QPoint      coordinate;
    QSize       size;
    QList<Component*> childComponentList;
signals:
    void createNewComponent();


private:
    Component *parentComponent ;
    QPoint startP;
    QPoint endP;
    QPixmap* backgroundPix;
    bool mouseHasPress;
    bool mouseHasRelease;


    QRect* mCurRect;



protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent * event);
    void repaint();

};

#endif // COMPONENT_H
