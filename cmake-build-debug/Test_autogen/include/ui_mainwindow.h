/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCircle;
    QAction *actionRectangle;
    QAction *actionLine;
    QAction *actionPolyLine;
    QAction *actionEllipse;
    QAction *actionCircle_2;
    QAction *actionText;
    QAction *actionSave;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNew;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1017, 603);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionPolyLine = new QAction(MainWindow);
        actionPolyLine->setObjectName(QString::fromUtf8("actionPolyLine"));
        actionEllipse = new QAction(MainWindow);
        actionEllipse->setObjectName(QString::fromUtf8("actionEllipse"));
        actionCircle_2 = new QAction(MainWindow);
        actionCircle_2->setObjectName(QString::fromUtf8("actionCircle_2"));
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1017, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuNew->menuAction());
        menuFile->addAction(actionSave);
        menuNew->addAction(actionCircle);
        menuNew->addAction(actionRectangle);
        menuNew->addAction(actionLine);
        menuNew->addAction(actionPolyLine);
        menuNew->addAction(actionEllipse);
        menuNew->addAction(actionCircle_2);
        menuNew->addAction(actionText);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", nullptr));
        actionRectangle->setText(QApplication::translate("MainWindow", "Rectangle", nullptr));
        actionLine->setText(QApplication::translate("MainWindow", "Line", nullptr));
        actionPolyLine->setText(QApplication::translate("MainWindow", "PolyLine", nullptr));
        actionEllipse->setText(QApplication::translate("MainWindow", "Ellipse", nullptr));
        actionCircle_2->setText(QApplication::translate("MainWindow", "Square", nullptr));
        actionText->setText(QApplication::translate("MainWindow", "Text", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
