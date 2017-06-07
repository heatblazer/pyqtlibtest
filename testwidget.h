#ifndef TESTWIDGET_H
#define TESTWIDGET_H
#include <QWidget>

struct MyWidget : public QWidget
{
    explicit MyWidget(QWidget* parent=nullptr);
    virtual ~MyWidget();

    void init();
};

#endif // TESTWIDGET_H
