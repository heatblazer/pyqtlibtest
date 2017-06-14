// Define the SIP wrapper to the word library.

%Module test

%Import QtCore/QtCoremod.sip
%Import QtGui/QtGuimod.sip

class Test : public QObject {

%TypeHeaderCode
#include <test.h>
%End

public:
    Test(QObject* parent /TransferThis/ = 0);
    QWidget* getWidget();
    void initMeshlab(const QString& path);
    
};


