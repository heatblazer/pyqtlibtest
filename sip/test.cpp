#include "test.h"
#include <qlibrary.h>
#include <iostream>


typedef void (*mlabproxy)(void);

Test::Test(QObject *parent)
    : QObject (parent)
{
    std::cout << "Test!\n";
}

QWidget *Test::getWidget()
{
    QWidget* w = new QWidget;
    return  w;
}

void Test::initMeshlab(const QString &path)
{
    QLibrary mlab (path);
    if (mlab.load()) {
        std::cout << "OK, loaded Meshlab...\n";

        mlabproxy fn = (mlabproxy) mlab.resolve("initMeshlabLib");
        if (fn) {
            std::cout << "Called meshlab init\n";
            fn();
        }
    } else {
        std::cout << "Failed to load library for Meshlab!\n";
    }

}

