import  sys
import  ctypes
from PyQt5 import QtCore
from PyQt5 import  QtGui
from PyQt5 import QtWidgets
from PyQt5.QtCore import QLibrary

from sip import voidptr, cast



LIB = '/home/ilian/git-projects/pyqtlibtest/build-pyqt-Desktop_Qt_5_7_1_GCC_64bit-Debug/libpyqt.so'



class InterfaceImpl(QtCore.QObject):

    def __init__(self):
        QtCore.QObject.__init__(self)

    def getWidget(self):
        pass

def main(*args, **kwargs):
    app = QtWidgets.QApplication(sys.argv)
    if False:
        lib = QtCore.QLibrary(LIB)
        if lib.load():
            print("OK")
            fn = lib.resolve("get_widget")
            #qw = QtWidgets.QWidget(cast(fn, QtWidgets.QWidget))
            print(fn.ascapsule())
        else:
            print("FAIL")
    else:
        ploader = QtCore.QPluginLoader(LIB)
        plugin = ploader.instance()
        print(ploader)
        if plugin is not None:
            print("Plugin loaded OK")
            print(plugin)
            w = cast(plugin, QtWidgets.QWidget)
            w.show()

        else:
            print("Plugin failed")
    #return app.exec()


if __name__ == "__main__":
    main(sys.argv)