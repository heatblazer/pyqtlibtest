#include "testwidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget (parent)
{
    setMinimumSize(200, 200);
    setMaximumSize(200, 200);
}

MyWidget::~MyWidget()
{

}

void MyWidget::init()
{
    show();
}
