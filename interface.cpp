#include "interface.h"
#include "testwidget.h"
#include <QApplication>

extern "C" MY_EXPORT int init(int argc, char **argv)
{
    QApplication a(argc, argv);
    MyWidget w;
    w.init();
    a.exec();
}
