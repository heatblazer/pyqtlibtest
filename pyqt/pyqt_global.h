#ifndef PYQT_GLOBAL_H
#define PYQT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PYQT_LIBRARY)
#  define PYQTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PYQTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PYQT_GLOBAL_H
