#include <python2.7/Python.h>
#include <stdio.h>
#include <stdint.h>

static const char module_docstring[] =
        "Init proxy";

static char initProxy_docstring[] =
        "returns a function pointer";


typedef int (*pInit)(int, char** argv);

static pInit fun;

static PyObject* initProxy(PyObject* self, PyObject* args)
{   (void) self; (void) args;
    return  Py_BuildValue("o&", fun);
}

/* describe a module containing the interfaces,
 * function pointer and a  doc string, some explaination
 * about the function (document)
 * */

static PyMethodDef module_methods[] =
{
    {"initProxy", initProxy, METH_VARARGS, initProxy_docstring}
};




PyMODINIT_FUNC initlibsimplemodule(void)
{
    Py_InitModule("libsimplemodule", module_methods);
}


int main(int argc, char** argv)
{
    (void) argc;
    Py_SetProgramName(argv[0]);
    Py_Initialize();
    initlibsimplemodule();
    return 0;
}
