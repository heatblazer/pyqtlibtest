#ifndef PYQT_H
#define PYQT_H

#include "pyqt_global.h"

#include <QWidget>

class PYQTSHARED_EXPORT Pyqt
{

public:
    Pyqt();
    QWidget* getWidget();
};

#endif // PYQT_H
