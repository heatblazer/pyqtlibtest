#ifndef TEST_H
#define TEST_H

#include <QWidget>
#include <QObject>

class Test : public QObject
{

public:
    Test(QObject* parent = 0);
    QWidget* getWidget();
    void initMeshlab(const QString& path);

};


#endif // TEST_H
