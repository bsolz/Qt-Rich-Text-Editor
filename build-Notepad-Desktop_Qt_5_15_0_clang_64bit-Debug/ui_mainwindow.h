/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionBold;
    QAction *actionItalicize;
    QAction *actionUnderline;
    QAction *actionAllign_Left;
    QAction *actionAllign_Center;
    QAction *actionAllign_Right;
    QAction *actionFont_Style;
    QAction *action8;
    QAction *action10;
    QAction *action12;
    QAction *action14;
    QAction *action16;
    QAction *action20;
    QAction *action32;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuFont_Size;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon2);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/Bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon3);
        actionItalicize = new QAction(MainWindow);
        actionItalicize->setObjectName(QString::fromUtf8("actionItalicize"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/Italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalicize->setIcon(icon4);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imgs/Underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon5);
        actionAllign_Left = new QAction(MainWindow);
        actionAllign_Left->setObjectName(QString::fromUtf8("actionAllign_Left"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imgs/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAllign_Left->setIcon(icon6);
        actionAllign_Center = new QAction(MainWindow);
        actionAllign_Center->setObjectName(QString::fromUtf8("actionAllign_Center"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imgs/center.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAllign_Center->setIcon(icon7);
        actionAllign_Right = new QAction(MainWindow);
        actionAllign_Right->setObjectName(QString::fromUtf8("actionAllign_Right"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imgs/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAllign_Right->setIcon(icon8);
        actionFont_Style = new QAction(MainWindow);
        actionFont_Style->setObjectName(QString::fromUtf8("actionFont_Style"));
        action8 = new QAction(MainWindow);
        action8->setObjectName(QString::fromUtf8("action8"));
        action10 = new QAction(MainWindow);
        action10->setObjectName(QString::fromUtf8("action10"));
        action12 = new QAction(MainWindow);
        action12->setObjectName(QString::fromUtf8("action12"));
        action14 = new QAction(MainWindow);
        action14->setObjectName(QString::fromUtf8("action14"));
        action16 = new QAction(MainWindow);
        action16->setObjectName(QString::fromUtf8("action16"));
        action20 = new QAction(MainWindow);
        action20->setObjectName(QString::fromUtf8("action20"));
        action32 = new QAction(MainWindow);
        action32->setObjectName(QString::fromUtf8("action32"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout_2->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        menuFont_Size = new QMenu(menuFormat);
        menuFont_Size->setObjectName(QString::fromUtf8("menuFont_Size"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalicize);
        menuFormat->addAction(actionUnderline);
        menuFormat->addAction(actionAllign_Left);
        menuFormat->addAction(actionAllign_Center);
        menuFormat->addAction(actionAllign_Right);
        menuFormat->addAction(menuFont_Size->menuAction());
        menuFormat->addAction(actionFont_Style);
        menuFont_Size->addAction(action8);
        menuFont_Size->addAction(action10);
        menuFont_Size->addAction(action12);
        menuFont_Size->addAction(action14);
        menuFont_Size->addAction(action16);
        menuFont_Size->addAction(action20);
        menuFont_Size->addAction(action32);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalicize);
        toolBar->addAction(actionUnderline);
        toolBar->addSeparator();
        toolBar->addAction(actionAllign_Left);
        toolBar->addAction(actionAllign_Center);
        toolBar->addAction(actionAllign_Right);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionItalicize->setText(QCoreApplication::translate("MainWindow", "Italicize", nullptr));
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "Underline", nullptr));
        actionAllign_Left->setText(QCoreApplication::translate("MainWindow", "Allign Left", nullptr));
        actionAllign_Center->setText(QCoreApplication::translate("MainWindow", "Allign Center", nullptr));
        actionAllign_Right->setText(QCoreApplication::translate("MainWindow", "Allign Right", nullptr));
        actionFont_Style->setText(QCoreApplication::translate("MainWindow", "Font Style", nullptr));
        action8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        action10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        action12->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        action14->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
        action16->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        action20->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        action32->setText(QCoreApplication::translate("MainWindow", "32", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
        menuFont_Size->setTitle(QCoreApplication::translate("MainWindow", "Font Size", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
