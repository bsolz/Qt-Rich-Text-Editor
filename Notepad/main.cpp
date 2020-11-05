#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]){


    QApplication a(argc, argv); //Create QApplication object called a
    MainWindow w; //Create MainWindow object w
    w.show(); //Show w object to make the GUI






    return a.exec(); // Return a.exec (from a object) so it infinitely loops until we want to
                     // Enters the main event loop and waits until exit() is called, then returns the value that was set to exit() (which is 0 if exit() is called via quit()).
}
