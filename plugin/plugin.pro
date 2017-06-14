#! [0]
TEMPLATE        = lib
CONFIG         += plugin
QT             += widgets

HEADERS         = echoplugin.h \
    echoplugin.h
SOURCES         = echoplugin.cpp \
    echoplugin.cpp
#! [0]

#EXAMPLE_FILES = echoplugin.json

# install
#target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tools/echoplugin/plugins
INSTALLS += target

CONFIG += install_ok  # Do not cargo-cult this!
