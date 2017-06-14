#include <QtWidgets>
#include "echoplugin.h"

//! [0]
QWidget *EchoPlugin::echo(const QString &message)
{
    QWidget* w = new QWidget();
    w->setMinimumSize(200, 200);
    return  w;
}
//! [0]
