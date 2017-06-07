import  sys
from PyQt5 import QtCore
import libsimplemodule
fnptr = libsimplemodule.initProxy()

def main(*args, **kwargs):
    testlib = QtCore.QLibrary('/home/ilian/git-projects/build-testpyqtlib-Desktop_Qt_5_7_1_GCC_64bit-Release/libtestpyqtlib.so')
    res = testlib.load()
    if res:
        print("OK, loaded library!")
        lh = testlib.loadHints()
        print(lh)
        initfn = testlib.resolve("init")
        if initfn is not None:
            print(initfn)
            fnptr = initfn
        else:
            print("Could not reslove 'init' fn!")
    else:
        s = testlib.errorString()
        print(s)

if __name__ == "__main__":
    main(sys.argv)