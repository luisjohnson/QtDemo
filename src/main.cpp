#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication App(argc, argv);
    MainWindow window;
    window.show();
    return App.exec();
}