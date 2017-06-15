from PyQt4.QtGui import QApplication
from PyQt4.QtCore import QTimer, QObject
from PyQt5.Qt import *
import sys
import test


def main():
    app = QApplication(sys.argv)
    t = test.Test()
    t.initMeshlab()
    return  app.exec_()

if __name__ == "__main__":
    main()