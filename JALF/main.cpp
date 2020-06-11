#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);      //startet das Interface mit dem MainWindow
    MainWindow w;
    w.show();
    return a.exec();
}
