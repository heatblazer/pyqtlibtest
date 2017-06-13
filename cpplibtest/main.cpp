#include <QApplication>
#include <QtCore>
#include <iostream>
#include <QtWidgets/QWidget>

typedef QWidget* (*fncall)(void);

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLibrary lib("/home/ilian/git-projects/build-testpyqtlib-Desktop_Qt_5_7_1_GCC_64bit-Debug/libtestpyqtlib.so");
    bool res = lib.load();
    if (res) {
        std::cout << "LOAD OK" << std::endl;
        fncall f = (fncall)lib.resolve("getWidget");
        if (f) {
            std::cout << "Calling f\n";
            QWidget* w = f();
            w->show();
        } else {
            //exit(1);
        }
    } else {
        std::cout << "LOAD FAILED" << std::endl;
        std::cout << lib.errorString().toStdString() << std::endl;
    }
    app.exec();
}
