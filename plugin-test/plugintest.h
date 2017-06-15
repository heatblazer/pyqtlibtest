#ifndef PLUGINTEST_H
#define PLUGINTEST_H

#include "plugin-test_global.h"

#include <QWidget>

class PLUGINTESTSHARED_EXPORT Plugintest
{

public:
    Plugintest();

    QWidget* getWidget();
};

#endif // PLUGINTEST_H
