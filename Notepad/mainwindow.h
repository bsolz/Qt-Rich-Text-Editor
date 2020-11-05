#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QToolBar>
#include "customtoolbutton.h"

//Defaults

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT //Base class for all QT objects

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();




private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionItalicize_triggered();

    void on_actionBold_triggered();

    void on_actionUnderline_triggered();

    void on_actionAllign_Left_triggered();

    void on_actionAllign_Center_triggered();

    void on_actionAllign_Right_triggered();

    void on_actionFont_Style_triggered();

    void on_action8_triggered();

    void on_action10_triggered();

    void on_action16_triggered();

    void on_action12_triggered();

    void on_action14_triggered();

    void on_action20_triggered();

    void on_action32_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile = ""; //QString is one of the objects within the Q_OBJECT class, and we just made a QString called currentFile
};
#endif // MAINWINDOW_H
