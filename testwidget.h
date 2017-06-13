#ifndef TESTWIDGET_H
#define TESTWIDGET_H
#include <QWidget>
#include <QObject>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget* parent=nullptr);
    virtual ~MyWidget();
    void init();

signals:
    void testSignal(const int& v);

public slots:
    void testSlot(int s);

private:
    int m_val;
};

#endif // TESTWIDGET_H
