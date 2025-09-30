#include <Python.h>

PyMODINIT_FUNC
PyInit__utils(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("faster_hexbytes._utils__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_faster_hexbytes____utils");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "faster_hexbytes._utils__mypyc.init_faster_hexbytes____utils");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit__utils(); }
