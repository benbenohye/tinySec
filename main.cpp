#include "mainwindow.h"
#include <QApplication>
#include <sign_up.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Sign_up s;
    s.show();



    return a.exec();
}
