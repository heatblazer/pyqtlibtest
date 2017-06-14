QT += core
QT += gui


TEMPLATE = lib
CONFIG += console
CONFIG -= app_bundle



SOURCES += \
    simplemodule.c

HEADERS +=


INCLUDEPATH += I/usr/include
LIBS += -L/usr/lib64/python3.4m -lpython3.4m

INCLUDEPATH += I/home/ilian/git-projects/Qt5.7.1/5.7/gcc_64/include/
LIBS += -L/home/ilian/git-projects/Qt5.7.1/5.7/gcc_64/lib/libQt5Core.so -lQt5Core
