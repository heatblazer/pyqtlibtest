#include "testwidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget (parent),
      m_val(0)
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

void MyWidget::testSlot(int s)
{
    m_val = s;
    emit testSignal(m_val);
}
