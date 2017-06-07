#include <QCoreApplication>
#include <QtCore>
#include <iostream>
typedef int (*fncall)(int, char**);

int main(int argc, char *argv[])
{
    QLibrary lib("/home/ilian/git-projects/build-testpyqtlib-Desktop_Qt_5_7_1_GCC_64bit-Debug/libtestpyqtlib.so");
    bool res = lib.load();
    if (res) {
        std::cout << "LOAD OK" << std::endl;
        fncall f = (fncall)lib.resolve("init");
        if (f) {
            std::cout << "Calling f\n";
            f(argc, argv);
        } else {

        }
    } else {
        std::cout << "LOAD FAILED" << std::endl;
        std::cout << lib.errorString().toStdString() << std::endl;
    }

}
