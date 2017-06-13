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
