import  os as UNIX
import  sys
from PyQt5 import QtCore

def main(*args, **kwargs):
    testlib = QtCore.QLibrary('/home/ilian/Qt/build-testpyqtlib-Desktop_Qt_5_8_0_GCC_64bit-Debug/libtestpyqtlib.so')

    res = testlib.load()
    if res:
        print("OK, loaded library!")
    else:
        print("Failed to load library!")

if __name__ == "__main__":
    main(sys.argv)