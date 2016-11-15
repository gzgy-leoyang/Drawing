/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *ModeZone;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *Complie_Button;
    QWidget *ComponentZone;
    QListView *Component_listView;
    QWidget *DrawingZone;
    QWidget *ProjectZone;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *Component_Tree;
    QTableWidget *Property_Table;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1179, 652);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1161, 591));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ModeZone = new QWidget(horizontalLayoutWidget);
        ModeZone->setObjectName(QStringLiteral("ModeZone"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ModeZone->sizePolicy().hasHeightForWidth());
        ModeZone->setSizePolicy(sizePolicy1);
        ModeZone->setMaximumSize(QSize(80, 16777215));
        verticalLayoutWidget_2 = new QWidget(ModeZone);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 81, 591));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        Complie_Button = new QPushButton(verticalLayoutWidget_2);
        Complie_Button->setObjectName(QStringLiteral("Complie_Button"));
        sizePolicy2.setHeightForWidth(Complie_Button->sizePolicy().hasHeightForWidth());
        Complie_Button->setSizePolicy(sizePolicy2);
        Complie_Button->setMaximumSize(QSize(80, 16777215));

        verticalLayout_2->addWidget(Complie_Button);


        horizontalLayout->addWidget(ModeZone);

        ComponentZone = new QWidget(horizontalLayoutWidget);
        ComponentZone->setObjectName(QStringLiteral("ComponentZone"));
        sizePolicy.setHeightForWidth(ComponentZone->sizePolicy().hasHeightForWidth());
        ComponentZone->setSizePolicy(sizePolicy);
        ComponentZone->setMaximumSize(QSize(150, 16777215));
        Component_listView = new QListView(ComponentZone);
        Component_listView->setObjectName(QStringLiteral("Component_listView"));
        Component_listView->setGeometry(QRect(0, 0, 151, 591));
        sizePolicy.setHeightForWidth(Component_listView->sizePolicy().hasHeightForWidth());
        Component_listView->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(ComponentZone);

        DrawingZone = new QWidget(horizontalLayoutWidget);
        DrawingZone->setObjectName(QStringLiteral("DrawingZone"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(DrawingZone->sizePolicy().hasHeightForWidth());
        DrawingZone->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(DrawingZone);

        ProjectZone = new QWidget(horizontalLayoutWidget);
        ProjectZone->setObjectName(QStringLiteral("ProjectZone"));
        sizePolicy.setHeightForWidth(ProjectZone->sizePolicy().hasHeightForWidth());
        ProjectZone->setSizePolicy(sizePolicy);
        ProjectZone->setMaximumSize(QSize(300, 16777215));
        verticalLayoutWidget = new QWidget(ProjectZone);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 301, 591));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Component_Tree = new QTreeWidget(verticalLayoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        Component_Tree->setHeaderItem(__qtreewidgetitem);
        Component_Tree->setObjectName(QStringLiteral("Component_Tree"));
        sizePolicy.setHeightForWidth(Component_Tree->sizePolicy().hasHeightForWidth());
        Component_Tree->setSizePolicy(sizePolicy);
        Component_Tree->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(Component_Tree);

        Property_Table = new QTableWidget(verticalLayoutWidget);
        Property_Table->setObjectName(QStringLiteral("Property_Table"));
        sizePolicy.setHeightForWidth(Property_Table->sizePolicy().hasHeightForWidth());
        Property_Table->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(Property_Table);


        horizontalLayout->addWidget(ProjectZone);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1179, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0));
        Complie_Button->setText(QApplication::translate("MainWindow", "COMPLIE", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
