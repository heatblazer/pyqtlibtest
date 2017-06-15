#include "plugintest.h"


Plugintest::Plugintest()
{
}

QWidget *Plugintest::getWidget()
{
    QWidget* w = new QWidget;
    w->setMinimumSize(200, 200);
    return w;
}

