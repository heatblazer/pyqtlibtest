#include <python3.4m/Python.h> // python stuff
#include <QtWidgets/QWidget> // widgets



static char module_doc_string[] =
        "This module returns a simple QWidget";

static QWidget* __getwidget()
{

    QWidget* w = new QWidget();
    return  w;
}


typedef QWidget* (*fn)(void);
static fn f = &__getwidget;


static PyObject* getWidget(PyObject* self, PyObject* args)
{
    (void) args;
    QWidget* w = new QWidget();
    w->setMinimumSize(200, 200);
    PyObject* ret = Py_BuildValue("o&", f); // returns the callable thing from C
    return ret;
}


static PyMethodDef module_methods[] =
    {
        {"getWidget", getWidget, METH_VARARGS, module_doc_string},
        {NULL, NULL, 0, NULL}
    };



PyMODINIT_FUNC init_simplemodule(void)
{
    PyObject *m = Py_InitModule3("_simplemodule", module_methods, module_doc_string);
    if (m == NULL)
        return;

}
