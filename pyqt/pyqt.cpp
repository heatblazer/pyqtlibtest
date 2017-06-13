#include "pyqt.h"


Pyqt::Pyqt()
{
}

QWidget *Pyqt::getWidget()
{
    QWidget* w = new QWidget;
    w->setMinimumSize(200, 200);
    return  w;
}
