#include "interface.h"
#include "testwidget.h"
#include <iostream>
#include <QtWidgets/qwidget.h>


extern "C" INTERFACE char* get_widget()
{
    static char c[sizeof (QWidget)] = {0};
    QWidget* w = new QWidget();
    w->setMinimumSize(200, 200);
    memcpy(c, w, sizeof(QWidget));
    return  c;
}
