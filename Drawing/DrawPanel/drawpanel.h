#ifndef WIDGET_H
#define WIDGET_H

#include "Component/rectangle.h"

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

class DrawPanel : public QWidget
{
    Q_OBJECT

public:
    DrawPanel( QList<Component*>* list ,QWidget *parent = 0);
    ~DrawPanel();
    void updateComponentInfo(Rectangle* mCurComponent);
private:
    QLabel *infoLb;

    QPoint startP;
    QPoint endP;
    QPixmap* backgroundPix;
    bool mouseHasPress;
    bool mouseHasRelease;


    QRect* mCurRect;

    QList<Component*>* pTopList;

signals:
    void insertNewComponent(Component* cmp);
    void creatNewComponent();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent * event);
    void repaint();
};

#endif // WIDGET_H
