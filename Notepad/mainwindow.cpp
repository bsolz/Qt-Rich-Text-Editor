#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot open file : " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_As_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot open file : " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();

}

void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer Name");
    QPrintDialog pDialog(&printer, this);
    if(pDialog.exec() == QDialog::Rejected){
        QMessageBox::warning(this, "Warning", "Cannot Access printer");
        return;
    }
    ui->textEdit->print(&printer);
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}


//Where Self editing starts

void MainWindow::on_actionBold_triggered()
{
    int TextWeight = ui->textEdit->fontWeight();

    if(TextWeight == 50){
        TextWeight = 75;
        ui->textEdit->setFontWeight(TextWeight);
    }
    else{
        TextWeight = 50;
        ui->textEdit->setFontWeight(TextWeight);
    }

}


void MainWindow::on_actionItalicize_triggered()
{
    bool Text = !(ui->textEdit->fontItalic());
    ui->textEdit->setFontItalic(Text);

}

void MainWindow::on_actionUnderline_triggered()
{
    bool Text = !(ui->textEdit->fontUnderline());
    ui->textEdit->setFontUnderline(Text);

}

void MainWindow::on_actionAllign_Left_triggered()
{
    Qt::Alignment Alignment = ui->textEdit->alignment();
    if(Alignment != Qt::AlignLeft){
        ui->textEdit->setAlignment(Qt::AlignLeft);
    }


}

void MainWindow::on_actionAllign_Center_triggered()
{
    Qt::Alignment Alignment = ui->textEdit->alignment();
    if(Alignment != Qt::AlignCenter){
        ui->textEdit->setAlignment(Qt::AlignCenter);
    }

}


void MainWindow::on_actionAllign_Right_triggered()
{
    Qt::Alignment Alignment = ui->textEdit->alignment();
    if(Alignment != Qt::AlignRight){
        ui->textEdit->setAlignment(Qt::AlignRight);
    }

}

void MainWindow::on_actionFont_Style_triggered()
{
return;
}

void MainWindow::on_action8_triggered()
{
    qreal FontSize = 8;
    ui->textEdit->setFontPointSize(FontSize);

}

void MainWindow::on_action10_triggered()
{
    qreal FontSize = 10;
    ui->textEdit->setFontPointSize(FontSize);

}

void MainWindow::on_action12_triggered()
{
    qreal FontSize = 12;
    ui->textEdit->setFontPointSize(FontSize);

}

void MainWindow::on_action14_triggered()
{
    qreal FontSize = 14;
    ui->textEdit->setFontPointSize(FontSize);

}

void MainWindow::on_action16_triggered()
{
    qreal FontSize = 16;
    ui->textEdit->setFontPointSize(FontSize);

}


void MainWindow::on_action20_triggered()
{
    qreal FontSize = 20;
    ui->textEdit->setFontPointSize(FontSize);

}

void MainWindow::on_action32_triggered()
{
    qreal FontSize = 32;
    ui->textEdit->setFontPointSize(FontSize);

}


