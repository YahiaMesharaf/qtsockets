#include "mainwindow.h"
#include "myserver.h"
#include "myclient.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //MyServer mServer;

    return a.exec();
}
