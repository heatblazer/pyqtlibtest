#include "interface.h"
#include "testwidget.h"

#include <QApplication>

int init(int argc, char **argv)
{
    QApplication a(argc, argv);
    MyWidget w;
    w.init();
    return  a.exec();
}
