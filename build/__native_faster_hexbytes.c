#ifndef DIFFCHECK_PLACEHOLDER
#define DIFFCHECK_PLACEHOLDER 0
#endif
#include <init.c>
#include <getargs.c>
#include <getargsfast.c>
#include <int_ops.c>
#include <float_ops.c>
#include <str_ops.c>
#include <bytes_ops.c>
#include <list_ops.c>
#include <dict_ops.c>
#include <set_ops.c>
#include <tuple_ops.c>
#include <exc_ops.c>
#include <misc_ops.c>
#include <generic_ops.c>
#include <pythonsupport.c>
#include <function_wrapper.c>
#include <strings/librt_strings_api.c>
#include "__native_faster_hexbytes.h"
#include "__native_internal_faster_hexbytes.h"
static PyMethodDef faster_hexbytesmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_hexbytes(PyObject *module)
{
    intern_strings();
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_hexbytes__internal, "__name__");
    CPyStatic_faster_hexbytes___globals = PyModule_GetDict(CPyModule_faster_hexbytes__internal);
    if (unlikely(CPyStatic_faster_hexbytes___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_hexbytes_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_hexbytes__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef faster_hexbytesmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_hexbytes",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_hexbytesmodule_methods,
    NULL,
};

PyObject *CPyInitOnly_faster_hexbytes(void)
{
    if (CPyModule_faster_hexbytes__internal) {
        Py_INCREF(CPyModule_faster_hexbytes__internal);
        return CPyModule_faster_hexbytes__internal;
    }
    CPyModule_faster_hexbytes__internal = PyModule_Create(&faster_hexbytesmodule);
    return CPyModule_faster_hexbytes__internal;
}

PyObject *CPyInit_faster_hexbytes(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_hexbytes__internal) {
        Py_INCREF(CPyModule_faster_hexbytes__internal);
        return CPyModule_faster_hexbytes__internal;
    }
    CPyModule_faster_hexbytes__internal = PyModule_Create(&faster_hexbytesmodule);
    if (unlikely(CPyModule_faster_hexbytes__internal == NULL))
        goto fail;
    modname = PyUnicode_FromString("faster_hexbytes");
    if (modname == NULL) CPyError_OutOfMemory();
    int rv = 0;
    PyObject *mod_dict = PyImport_GetModuleDict();
    PyObject *shared_lib = NULL;
    rv = PyDict_GetItemStringRef(mod_dict, "faster_hexbytes__mypyc", &shared_lib);
    if (rv < 0) goto fail;
    PyObject *shared_lib_file = PyObject_GetAttrString(shared_lib, "__file__");
    if (shared_lib_file == NULL) goto fail;
    PyObject *ext_suffix = PyUnicode_FromString(".cpython-314-x86_64-linux-gnu.so");
    if (ext_suffix == NULL) CPyError_OutOfMemory();
    Py_ssize_t is_pkg = 1;
    rv = CPyImport_SetDunderAttrs(CPyModule_faster_hexbytes__internal, modname, shared_lib_file, ext_suffix, is_pkg);
    Py_DECREF(ext_suffix);
    Py_DECREF(shared_lib_file);
    if (rv < 0) goto fail;
    if (PyObject_SetItem(PyImport_GetModuleDict(), modname, CPyModule_faster_hexbytes__internal) < 0)
        goto fail;
    Py_CLEAR(modname);
    if (CPyExec_faster_hexbytes(CPyModule_faster_hexbytes__internal) != 0)
        goto fail;
    return CPyModule_faster_hexbytes__internal;
    fail:
    {
            PyObject *exc_type, *exc_val, *exc_tb;
            PyErr_Fetch(&exc_type, &exc_val, &exc_tb);
            if (modname == NULL) {
                    modname = PyUnicode_FromString("faster_hexbytes");
                    if (modname == NULL) CPyError_OutOfMemory();
                }
                PyObject_DelItem(PyImport_GetModuleDict(), modname);
                PyErr_Clear();
                Py_DECREF(modname);
                Py_CLEAR(CPyModule_faster_hexbytes__internal);
                PyErr_Restore(exc_type, exc_val, exc_tb);
        }
        return NULL;
    }
    
char CPyDef_faster_hexbytes_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    void *cpy_r_r13;
    void *cpy_r_r14;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('version',) */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('__version',) */
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'importlib.metadata' */
    cpy_r_r8 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r9 = CPyImport_ImportFromMany(cpy_r_r7, cpy_r_r5, cpy_r_r6, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    CPyModule_importlib___metadata = cpy_r_r9;
    CPy_INCREF(CPyModule_importlib___metadata);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r10 = CPyModule_faster_hexbytes___main;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    if (cpy_r_r12) goto CPyL9;
    cpy_r_r13 = CPyInitOnly_faster_hexbytes___main;
    cpy_r_r14 = CPyExec_faster_hexbytes___main;
    cpy_r_r15 = (PyObject **)&CPyModule_faster_hexbytes___main__internal;
    cpy_r_r16 = PyImport_GetModuleDict();
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes__mypyc' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__file__' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    cpy_r_r21 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '.cpython-314-x86_64-linux-gnu.so' */
    cpy_r_r22 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r23 = CPyImport_ImportNative(cpy_r_r22, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r20, cpy_r_r21, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    CPyModule_faster_hexbytes___main = cpy_r_r23;
    CPy_INCREF(CPyModule_faster_hexbytes___main);
    CPy_DECREF(cpy_r_r23);
CPyL9: ;
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('HexBytes',) */
    cpy_r_r25 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r26 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r27 = CPyImport_GetNativeAttrs(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL10: ;
    cpy_r_r28 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r29 = PyList_New(1);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    cpy_r_r30 = (CPyPtr)((CPyPtr)cpy_r_r29 + offsetof(PyListObject, ob_item));
    cpy_r_r31 = *(CPyPtr *)cpy_r_r30;
    CPy_INCREF(cpy_r_r28);
    *(PyObject * *)cpy_r_r31 = cpy_r_r28;
    cpy_r_r32 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r33 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__all__' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r29);
    CPy_DECREF_NO_IMM(cpy_r_r29);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hexbytes' */
    cpy_r_r37 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r38 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__version' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r40[1] = {cpy_r_r36};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/__init__.py", "<module>", 11, CPyStatic_faster_hexbytes___globals, "str", cpy_r_r42);
        goto CPyL17;
    }
    cpy_r_r44 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r45 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__version__' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r44, cpy_r_r45, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL18: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL10;
}
    static PyMethodDef _utilsmodule_methods[] = {
        {"to_bytes", (PyCFunction)CPyPy__utils___to_bytes, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("to_bytes(val)\n--\n\n") /* docstring */},
        {"hexstr_to_bytes", (PyCFunction)CPyPy__utils___hexstr_to_bytes, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("hexstr_to_bytes(hexstr)\n--\n\n") /* docstring */},
        {NULL, NULL, 0, NULL}
    };
    
    int CPyExec_faster_hexbytes____utils(PyObject *module)
    {
        intern_strings();
        PyObject* modname = NULL;
        modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_hexbytes____utils__internal, "__name__");
        CPyStatic__utils___globals = PyModule_GetDict(CPyModule_faster_hexbytes____utils__internal);
        if (unlikely(CPyStatic__utils___globals == NULL))
            goto fail;
        if (CPyGlobalsInit() < 0)
            goto fail;
        char result = CPyDef__utils_____top_level__();
        if (result == 2)
            goto fail;
        Py_DECREF(modname);
        return 0;
        fail:
        Py_CLEAR(CPyModule_faster_hexbytes____utils__internal);
        Py_CLEAR(modname);
        CPy_XDECREF(CPyStatic__utils___unhexlify);
        CPyStatic__utils___unhexlify = NULL;
        return -1;
    }
    static struct PyModuleDef _utilsmodule = {
        PyModuleDef_HEAD_INIT,
        "faster_hexbytes._utils",
        NULL, /* docstring */
        0,       /* size of per-interpreter state of the module */
        _utilsmodule_methods,
        NULL,
    };
    
    PyObject *CPyInitOnly_faster_hexbytes____utils(void)
    {
        if (CPyModule_faster_hexbytes____utils__internal) {
            Py_INCREF(CPyModule_faster_hexbytes____utils__internal);
            return CPyModule_faster_hexbytes____utils__internal;
        }
        CPyModule_faster_hexbytes____utils__internal = PyModule_Create(&_utilsmodule);
        return CPyModule_faster_hexbytes____utils__internal;
    }
    
    PyObject *CPyInit_faster_hexbytes____utils(void)
    {
        PyObject* modname = NULL;
        if (CPyModule_faster_hexbytes____utils__internal) {
            Py_INCREF(CPyModule_faster_hexbytes____utils__internal);
            return CPyModule_faster_hexbytes____utils__internal;
        }
        CPyModule_faster_hexbytes____utils__internal = PyModule_Create(&_utilsmodule);
        if (unlikely(CPyModule_faster_hexbytes____utils__internal == NULL))
            goto fail;
        modname = PyUnicode_FromString("faster_hexbytes._utils");
        if (modname == NULL) CPyError_OutOfMemory();
        int rv = 0;
        PyObject *mod_dict = PyImport_GetModuleDict();
        PyObject *shared_lib = NULL;
        rv = PyDict_GetItemStringRef(mod_dict, "faster_hexbytes__mypyc", &shared_lib);
        if (rv < 0) goto fail;
        PyObject *shared_lib_file = PyObject_GetAttrString(shared_lib, "__file__");
        if (shared_lib_file == NULL) goto fail;
        PyObject *ext_suffix = PyUnicode_FromString(".cpython-314-x86_64-linux-gnu.so");
        if (ext_suffix == NULL) CPyError_OutOfMemory();
        Py_ssize_t is_pkg = 0;
        rv = CPyImport_SetDunderAttrs(CPyModule_faster_hexbytes____utils__internal, modname, shared_lib_file, ext_suffix, is_pkg);
        Py_DECREF(ext_suffix);
        Py_DECREF(shared_lib_file);
        if (rv < 0) goto fail;
        if (PyObject_SetItem(PyImport_GetModuleDict(), modname, CPyModule_faster_hexbytes____utils__internal) < 0)
            goto fail;
        Py_CLEAR(modname);
        if (CPyExec_faster_hexbytes____utils(CPyModule_faster_hexbytes____utils__internal) != 0)
            goto fail;
        return CPyModule_faster_hexbytes____utils__internal;
        fail:
        {
                PyObject *exc_type, *exc_val, *exc_tb;
                PyErr_Fetch(&exc_type, &exc_val, &exc_tb);
                if (modname == NULL) {
                        modname = PyUnicode_FromString("faster_hexbytes._utils");
                        if (modname == NULL) CPyError_OutOfMemory();
                    }
                    PyObject_DelItem(PyImport_GetModuleDict(), modname);
                    PyErr_Clear();
                    Py_DECREF(modname);
                    Py_CLEAR(CPyModule_faster_hexbytes____utils__internal);
                    PyErr_Restore(exc_type, exc_val, exc_tb);
            }
            return NULL;
        }
        
PyObject *CPyDef__utils___to_bytes(PyObject *cpy_r_val) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    int64_t cpy_r_r42;
    char cpy_r_r43;
    int64_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    int64_t cpy_r_r49;
    char cpy_r_r50;
    int64_t cpy_r_r51;
    int64_t cpy_r_r52;
    CPyPtr cpy_r_r53;
    void *cpy_r_r54;
    int64_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    CPyPtr cpy_r_r89;
    CPyPtr cpy_r_r90;
    CPyPtr cpy_r_r91;
    CPyPtr cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    cpy_r_r0 = PyBytes_Check(cpy_r_val);
    if (!cpy_r_r0) goto CPyL3;
    CPy_INCREF(cpy_r_val);
    if (likely(PyBytes_Check(cpy_r_val)))
        cpy_r_r1 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 19, CPyStatic__utils___globals, "bytes", cpy_r_val);
        goto CPyL63;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = PyUnicode_Check(cpy_r_val);
    if (!cpy_r_r2) goto CPyL7;
    CPy_INCREF(cpy_r_val);
    if (likely(PyUnicode_Check(cpy_r_val)))
        cpy_r_r3 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 21, CPyStatic__utils___globals, "str", cpy_r_val);
        goto CPyL63;
    }
    cpy_r_r4 = CPyDef__utils___hexstr_to_bytes(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    return cpy_r_r4;
CPyL7: ;
    cpy_r_r5 = PyByteArray_Check(cpy_r_val);
    if (!cpy_r_r5) goto CPyL12;
    CPy_INCREF(cpy_r_val);
    if (likely(PyByteArray_Check(cpy_r_val)))
        cpy_r_r6 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 23, CPyStatic__utils___globals, "bytearray", cpy_r_val);
        goto CPyL63;
    }
    cpy_r_r7 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r8[1] = {cpy_r_r6};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL64;
    }
    CPy_DECREF(cpy_r_r6);
    if (likely(PyBytes_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 23, CPyStatic__utils___globals, "bytes", cpy_r_r10);
        goto CPyL63;
    }
    return cpy_r_r11;
CPyL12: ;
    cpy_r_r12 = PyBool_Check(cpy_r_val);
    if (!cpy_r_r12) goto CPyL18;
    if (unlikely(!PyBool_Check(cpy_r_val))) {
        CPy_TypeError("bool", cpy_r_val); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_val == Py_True;
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    if (!cpy_r_r13) goto CPyL16;
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* b'\x01' */
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = cpy_r_r14;
    goto CPyL17;
CPyL16: ;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* b'\x00' */
    CPy_INCREF(cpy_r_r16);
    cpy_r_r15 = cpy_r_r16;
CPyL17: ;
    return cpy_r_r15;
CPyL18: ;
    cpy_r_r17 = PyLong_Check(cpy_r_val);
    if (!cpy_r_r17) goto CPyL49;
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r18 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r18 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    cpy_r_r19 = cpy_r_r18 & 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (cpy_r_r20) goto CPyL22;
    cpy_r_r21 = 0 & 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (!cpy_r_r22) goto CPyL23;
CPyL22: ;
    cpy_r_r23 = CPyTagged_IsLt_(cpy_r_r18, 0);
    cpy_r_r24 = cpy_r_r23;
    goto CPyL24;
CPyL23: ;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)0;
    cpy_r_r24 = cpy_r_r25;
CPyL24: ;
    CPyTagged_DECREF(cpy_r_r18);
    if (!cpy_r_r24) goto CPyL32;
    cpy_r_r26 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Cannot convert negative integer ' */
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r27 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r27 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    cpy_r_r28 = CPyTagged_Str(cpy_r_r27);
    CPyTagged_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    cpy_r_r29 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' to bytes' */
    cpy_r_r30 = CPyStr_Build(3, cpy_r_r26, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    cpy_r_r31 = CPyModule_builtins;
    cpy_r_r32 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ValueError' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r34[1] = {cpy_r_r30};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 1, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_r30);
    CPy_Raise(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL32: ;
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r37 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r38 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL66;
    }
    cpy_r_r39 = CPyTagged_BitLength(cpy_r_r38);
    CPyTagged_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL66;
    }
    cpy_r_r40 = CPyTagged_Add(cpy_r_r39, 14);
    CPyTagged_DECREF(cpy_r_r39);
    cpy_r_r41 = CPyTagged_Rshift(cpy_r_r40, 6);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL66;
    }
    cpy_r_r42 = cpy_r_r41 & 1;
    cpy_r_r43 = cpy_r_r42 != 0;
    if (cpy_r_r43) goto CPyL38;
    cpy_r_r44 = 2 & 1;
    cpy_r_r45 = cpy_r_r44 != 0;
    if (!cpy_r_r45) goto CPyL39;
CPyL38: ;
    cpy_r_r46 = CPyTagged_IsLt_(2, cpy_r_r41);
    if (cpy_r_r46) {
        goto CPyL40;
    } else
        goto CPyL67;
CPyL39: ;
    cpy_r_r47 = (Py_ssize_t)cpy_r_r41 > (Py_ssize_t)2;
    if (!cpy_r_r47) goto CPyL67;
CPyL40: ;
    cpy_r_r48 = cpy_r_r41;
    goto CPyL42;
CPyL41: ;
    cpy_r_r48 = 2;
CPyL42: ;
    cpy_r_r49 = cpy_r_r48 & 1;
    cpy_r_r50 = cpy_r_r49 == 0;
    if (!cpy_r_r50) goto CPyL44;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r48 >> 1;
    CPyTagged_DECREF(cpy_r_r48);
    cpy_r_r52 = cpy_r_r51;
    goto CPyL47;
CPyL44: ;
    cpy_r_r53 = cpy_r_r48 ^ 1;
    cpy_r_r54 = (void *)cpy_r_r53;
    cpy_r_r55 = CPyLong_AsInt64(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 == -113;
    if (unlikely(cpy_r_r56)) goto CPyL46;
CPyL45: ;
    cpy_r_r52 = cpy_r_r55;
    CPyTagged_DECREF(cpy_r_r48);
    goto CPyL47;
CPyL46: ;
    cpy_r_r57 = PyErr_Occurred();
    if (unlikely(cpy_r_r57 != NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL68;
    } else
        goto CPyL45;
CPyL47: ;
    cpy_r_r58 = CPyTagged_ToBigEndianBytes(cpy_r_r37, cpy_r_r52, 0);
    CPyTagged_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    return cpy_r_r58;
CPyL49: ;
    cpy_r_r59 = CPyModule_builtins;
    cpy_r_r60 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'memoryview' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    cpy_r_r62 = PyObject_IsInstance(cpy_r_val, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    cpy_r_r64 = cpy_r_r62;
    if (!cpy_r_r64) goto CPyL55;
    cpy_r_r65 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r66[1] = {cpy_r_val};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = PyObject_Vectorcall(cpy_r_r65, cpy_r_r67, 1, 0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    if (likely(PyBytes_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 34, CPyStatic__utils___globals, "bytes", cpy_r_r68);
        goto CPyL63;
    }
    return cpy_r_r69;
CPyL55: ;
    cpy_r_r70 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '' */
    cpy_r_r71 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Cannot convert ' */
    cpy_r_r72 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '{!r:{}}' */
    cpy_r_r73 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '' */
    cpy_r_r74 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'format' */
    PyObject *cpy_r_r75[3] = {cpy_r_r72, cpy_r_val, cpy_r_r73};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = PyObject_VectorcallMethod(cpy_r_r74, cpy_r_r76, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    cpy_r_r78 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' of type ' */
    cpy_r_r79 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '{:{}}' */
    cpy_r_r80 = CPy_TYPE(cpy_r_val);
    cpy_r_r81 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '' */
    cpy_r_r82 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'format' */
    PyObject *cpy_r_r83[3] = {cpy_r_r79, cpy_r_r80, cpy_r_r81};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = PyObject_VectorcallMethod(cpy_r_r82, cpy_r_r84, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r80);
    cpy_r_r86 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' to bytes' */
    cpy_r_r87 = PyList_New(5);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL70;
    }
    cpy_r_r88 = (CPyPtr)((CPyPtr)cpy_r_r87 + offsetof(PyListObject, ob_item));
    cpy_r_r89 = *(CPyPtr *)cpy_r_r88;
    CPy_INCREF(cpy_r_r71);
    *(PyObject * *)cpy_r_r89 = cpy_r_r71;
    cpy_r_r90 = cpy_r_r89 + 8;
    *(PyObject * *)cpy_r_r90 = cpy_r_r77;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r91 = cpy_r_r89 + 16;
    *(PyObject * *)cpy_r_r91 = cpy_r_r78;
    cpy_r_r92 = cpy_r_r89 + 24;
    *(PyObject * *)cpy_r_r92 = cpy_r_r85;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r93 = cpy_r_r89 + 32;
    *(PyObject * *)cpy_r_r93 = cpy_r_r86;
    cpy_r_r94 = PyUnicode_Join(cpy_r_r70, cpy_r_r87);
    CPy_DECREF_NO_IMM(cpy_r_r87);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    cpy_r_r95 = CPyModule_builtins;
    cpy_r_r96 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TypeError' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r98[1] = {cpy_r_r94};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = PyObject_Vectorcall(cpy_r_r97, cpy_r_r99, 1, 0);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r94);
    CPy_Raise(cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r101 = NULL;
    return cpy_r_r101;
CPyL64: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL63;
CPyL65: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL63;
CPyL66: ;
    CPyTagged_DecRef(cpy_r_r37);
    goto CPyL63;
CPyL67: ;
    CPyTagged_DECREF(cpy_r_r41);
    goto CPyL41;
CPyL68: ;
    CPyTagged_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_r48);
    goto CPyL63;
CPyL69: ;
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r80);
    goto CPyL63;
CPyL70: ;
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r85);
    goto CPyL63;
CPyL71: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL63;
}
        
        PyObject *CPyPy__utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
            static const char * const kwlist[] = {"val", 0};
            static CPyArg_Parser parser = {"O:to_bytes", kwlist, 0};
            PyObject *obj_val;
            if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_val)) {
                return NULL;
            }
            PyObject *arg_val;
            if (PyBytes_Check(obj_val))
                arg_val = obj_val;
            else {
                arg_val = NULL;
            }
            if (arg_val != NULL) goto __LL1;
            if (PyUnicode_Check(obj_val))
                arg_val = obj_val;
            else {
                arg_val = NULL;
            }
            if (arg_val != NULL) goto __LL1;
            if (PyByteArray_Check(obj_val))
                arg_val = obj_val;
            else {
                arg_val = NULL;
            }
            if (arg_val != NULL) goto __LL1;
            if (PyBool_Check(obj_val))
                arg_val = obj_val;
            else {
                arg_val = NULL;
            }
            if (arg_val != NULL) goto __LL1;
            if (PyLong_Check(obj_val))
                arg_val = obj_val;
            else {
                arg_val = NULL;
            }
            if (arg_val != NULL) goto __LL1;
            arg_val = obj_val;
            if (arg_val != NULL) goto __LL1;
            CPy_TypeError("union[bytes, str, bytearray, bool, int, object]", obj_val); 
            goto fail;
__LL1: ;
            PyObject *retval = CPyDef__utils___to_bytes(arg_val);
            return retval;
fail: ;
            CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
            return NULL;
        }
        
PyObject *CPyDef__utils___hexstr_to_bytes(PyObject *cpy_r_hexstr) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_non_prefixed_hex;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_padded_hex;
    PyObject *cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r1 = CPyStr_Startswith(cpy_r_hexstr, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1;
    if (cpy_r_r2) goto CPyL2;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0X' */
    cpy_r_r4 = CPyStr_Startswith(cpy_r_hexstr, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4;
    if (!cpy_r_r5) goto CPyL5;
CPyL2: ;
    cpy_r_r6 = CPyStr_GetSlice(cpy_r_hexstr, 4, 9223372036854775806LL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL32;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 41, CPyStatic__utils___globals, "str", cpy_r_r6);
        goto CPyL32;
    }
    cpy_r_non_prefixed_hex = cpy_r_r7;
    goto CPyL6;
CPyL5: ;
    CPy_INCREF(cpy_r_hexstr);
    cpy_r_non_prefixed_hex = cpy_r_hexstr;
CPyL6: ;
    cpy_r_r8 = CPyStr_IsTrue(cpy_r_non_prefixed_hex);
    if (cpy_r_r8) {
        goto CPyL8;
    } else
        goto CPyL33;
CPyL7: ;
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* b'' */
    CPy_INCREF(cpy_r_r9);
    return cpy_r_r9;
CPyL8: ;
    cpy_r_r10 = CPyStr_Size_size_t(cpy_r_non_prefixed_hex);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL34;
    }
    cpy_r_r12 = cpy_r_r10 << 1;
    cpy_r_r13 = CPyTagged_And(cpy_r_r12, 2);
    cpy_r_r14 = cpy_r_r13 != 0;
    CPyTagged_DECREF(cpy_r_r13);
    if (!cpy_r_r14) goto CPyL12;
    cpy_r_r15 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0' */
    cpy_r_r16 = PyUnicode_Concat(cpy_r_r15, cpy_r_non_prefixed_hex);
    CPy_DECREF(cpy_r_non_prefixed_hex);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL32;
    }
    cpy_r_padded_hex = cpy_r_r16;
    goto CPyL13;
CPyL12: ;
    cpy_r_padded_hex = cpy_r_non_prefixed_hex;
CPyL13: ;
    cpy_r_r17 = PyUnicode_AsASCIIString(cpy_r_padded_hex);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL15;
    } else
        goto CPyL35;
CPyL14: ;
    goto CPyL26;
CPyL15: ;
    cpy_r_r18 = CPy_CatchError();
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'UnicodeDecodeError' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL36;
    }
    cpy_r_r22 = CPy_ExceptionMatches(cpy_r_r21);
    CPy_DecRef(cpy_r_r21);
    if (!cpy_r_r22) goto CPyL37;
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex string ' */
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' may only contain [0-9a-fA-F] characters' */
    cpy_r_r25 = CPyStr_Build(3, cpy_r_r23, cpy_r_padded_hex, cpy_r_r24);
    CPy_DecRef(cpy_r_padded_hex);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL24;
    }
    cpy_r_r26 = CPyModule_builtins;
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ValueError' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DecRef(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL38;
    }
    CPy_DecRef(cpy_r_r25);
    CPy_Raise(cpy_r_r31);
    CPy_DecRef(cpy_r_r31);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL24;
    } else
        goto CPyL39;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL24;
    } else
        goto CPyL40;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r18);
    CPy_DecRef(cpy_r_r18.f0);
    CPy_DecRef(cpy_r_r18.f1);
    CPy_DecRef(cpy_r_r18.f2);
    cpy_r_r32 = CPy_KeepPropagating();
    if (!cpy_r_r32) goto CPyL32;
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r33 = CPyStatic__utils___unhexlify;
    if (unlikely(cpy_r_r33 == NULL)) {
        goto CPyL41;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"unhexlify\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL29: ;
    PyObject *cpy_r_r35[1] = {cpy_r_r17};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = PyObject_Vectorcall(cpy_r_r33, cpy_r_r36, 1, 0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyBytes_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 61, CPyStatic__utils___globals, "bytes", cpy_r_r37);
        goto CPyL32;
    }
    return cpy_r_r38;
CPyL32: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL33: ;
    CPy_DECREF(cpy_r_non_prefixed_hex);
    goto CPyL7;
CPyL34: ;
    CPy_DecRef(cpy_r_non_prefixed_hex);
    goto CPyL32;
CPyL35: ;
    CPy_DECREF(cpy_r_padded_hex);
    goto CPyL14;
CPyL36: ;
    CPy_DecRef(cpy_r_padded_hex);
    goto CPyL24;
CPyL37: ;
    CPy_DecRef(cpy_r_padded_hex);
    goto CPyL22;
CPyL38: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL24;
CPyL39: ;
    CPy_DecRef(cpy_r_r18.f0);
    CPy_DecRef(cpy_r_r18.f1);
    CPy_DecRef(cpy_r_r18.f2);
    goto CPyL21;
CPyL40: ;
    CPy_DecRef(cpy_r_r18.f0);
    CPy_DecRef(cpy_r_r18.f1);
    CPy_DecRef(cpy_r_r18.f2);
    goto CPyL23;
CPyL41: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL27;
CPyL42: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL32;
}
        
        PyObject *CPyPy__utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
            static const char * const kwlist[] = {"hexstr", 0};
            static CPyArg_Parser parser = {"O:hexstr_to_bytes", kwlist, 0};
            PyObject *obj_hexstr;
            if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_hexstr)) {
                return NULL;
            }
            PyObject *arg_hexstr;
            if (likely(PyUnicode_Check(obj_hexstr)))
                arg_hexstr = obj_hexstr;
            else {
                CPy_TypeError("str", obj_hexstr); 
                goto fail;
            }
            PyObject *retval = CPyDef__utils___hexstr_to_bytes(arg_hexstr);
            return retval;
fail: ;
            CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
            return NULL;
        }
        
char CPyDef__utils_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_binascii;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('binascii', 'binascii', 'binascii'),) */
    cpy_r_r11 = CPyStatic__utils___globals;
    cpy_r_r12 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes/_utils.py' */
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL8;
    cpy_r_r15 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Final', 'Union') */
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r17 = CPyStatic__utils___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL8;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyModule_binascii;
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'unhexlify' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL8;
    }
    CPyStatic__utils___unhexlify = cpy_r_r21;
    CPy_INCREF(CPyStatic__utils___unhexlify);
    cpy_r_r22 = CPyStatic__utils___globals;
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'unhexlify' */
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r22, cpy_r_r23, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
}
        
        static PyObject *CPyDunder___get__main_____new___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
            instance = instance ? instance : Py_None;
            return CPyDef_main_____new___3_HexBytes_obj_____get__(self, instance, owner);
        }
        static int
        main_____new___3_HexBytes_obj_traverse(faster_hexbytes___main_____new___3_HexBytes_objObject *self, visitproc visit, void *arg)
        {
            int rv = 0;
            return rv;
        }
        
        static int
        main_____new___3_HexBytes_obj_clear(faster_hexbytes___main_____new___3_HexBytes_objObject *self)
        {
            return 0;
        }
        
        static void
        main_____new___3_HexBytes_obj_dealloc(faster_hexbytes___main_____new___3_HexBytes_objObject *self)
        {
            PyObject_GC_UnTrack(self);
            if (main_____new___3_HexBytes_obj_free_instance == NULL) {
                main_____new___3_HexBytes_obj_free_instance = self;
                return;
            }
            CPy_TRASHCAN_BEGIN(self, main_____new___3_HexBytes_obj_dealloc)
            main_____new___3_HexBytes_obj_clear(self);
            Py_TYPE(self)->tp_free((PyObject *)self);
            CPy_TRASHCAN_END(self)
            done: ;
        }
        
        PyObject *CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup(PyObject *cpy_r_type);
        PyObject *CPyDef_main_____new___3_HexBytes_obj(void);
        
        static PyObject *
        main_____new___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
        {
            if (type != CPyType_main_____new___3_HexBytes_obj) {
                PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
                return NULL;
            }
            PyObject *self = CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup((PyObject*)type);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        static CPyVTableItem main_____new___3_HexBytes_obj_vtable[2];
        static bool
        CPyDef_main_____new___3_HexBytes_obj_trait_vtable_setup(void)
        {
            CPyVTableItem main_____new___3_HexBytes_obj_vtable_scratch[] = {
                (CPyVTableItem)CPyDef_main_____new___3_HexBytes_obj_____call__,
                (CPyVTableItem)CPyDef_main_____new___3_HexBytes_obj_____get__,
            };
            memcpy(main_____new___3_HexBytes_obj_vtable, main_____new___3_HexBytes_obj_vtable_scratch, sizeof(main_____new___3_HexBytes_obj_vtable));
            return 1;
        }
        
        static bool
        CPyDef_main_____new___3_HexBytes_obj_coroutine_setup(PyObject *type)
        {
            return 1;
        }
        
        static PyMethodDef main_____new___3_HexBytes_obj_methods[] = {
            {"__internal_mypyc_setup", (PyCFunction)CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup, METH_O, NULL},
            {"__call__",
             (PyCFunction)CPyPy_main_____new___3_HexBytes_obj_____call__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($cls, val)\n--\n\n")},
            {"__get__",
             (PyCFunction)CPyPy_main_____new___3_HexBytes_obj_____get__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
            {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
            {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
            {NULL}  /* Sentinel */
        };
        
        static PyTypeObject CPyType_main_____new___3_HexBytes_obj_template_ = {
            PyVarObject_HEAD_INIT(NULL, 0)
            .tp_name = "__new___HexBytes_obj",
            .tp_new = main_____new___3_HexBytes_obj_new,
            .tp_dealloc = (destructor)main_____new___3_HexBytes_obj_dealloc,
            .tp_traverse = (traverseproc)main_____new___3_HexBytes_obj_traverse,
            .tp_clear = (inquiry)main_____new___3_HexBytes_obj_clear,
            .tp_methods = main_____new___3_HexBytes_obj_methods,
            .tp_call = PyVectorcall_Call,
            .tp_descr_get = CPyDunder___get__main_____new___3_HexBytes_obj,
            .tp_basicsize = sizeof(faster_hexbytes___main_____new___3_HexBytes_objObject),
            .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____new___3_HexBytes_objObject, vectorcall),
            .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
            .tp_doc = PyDoc_STR("__new___HexBytes_obj()\n--\n\n"),
        };
        static PyTypeObject *CPyType_main_____new___3_HexBytes_obj_template = &CPyType_main_____new___3_HexBytes_obj_template_;
        
        PyObject *CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup(PyObject *cpy_r_type)
        {
            PyTypeObject *type = (PyTypeObject*)cpy_r_type;
            faster_hexbytes___main_____new___3_HexBytes_objObject *self;
            if (main_____new___3_HexBytes_obj_free_instance != NULL) {
                self = main_____new___3_HexBytes_obj_free_instance;
                main_____new___3_HexBytes_obj_free_instance = NULL;
                Py_SET_REFCNT(self, 1);
                PyObject_GC_Track(self);
                return (PyObject *)self;
            }
            self = (faster_hexbytes___main_____new___3_HexBytes_objObject *)type->tp_alloc(type, 0);
            if (self == NULL)
                return NULL;
            self->vtable = main_____new___3_HexBytes_obj_vtable;
            self->vectorcall = CPyPy_main_____new___3_HexBytes_obj_____call__;
            return (PyObject *)self;
        }
        
        PyObject *CPyDef_main_____new___3_HexBytes_obj(void)
        {
            PyObject *self = CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup((PyObject *)CPyType_main_____new___3_HexBytes_obj);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        
        static PyObject *CPyDunder___get__main_____getitem___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
            instance = instance ? instance : Py_None;
            return CPyDef_main_____getitem___3_HexBytes_obj_____get__(self, instance, owner);
        }
        static int
        main_____getitem___3_HexBytes_obj_traverse(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self, visitproc visit, void *arg)
        {
            int rv = 0;
            return rv;
        }
        
        static int
        main_____getitem___3_HexBytes_obj_clear(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self)
        {
            return 0;
        }
        
        static void
        main_____getitem___3_HexBytes_obj_dealloc(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self)
        {
            PyObject_GC_UnTrack(self);
            if (main_____getitem___3_HexBytes_obj_free_instance == NULL) {
                main_____getitem___3_HexBytes_obj_free_instance = self;
                return;
            }
            CPy_TRASHCAN_BEGIN(self, main_____getitem___3_HexBytes_obj_dealloc)
            main_____getitem___3_HexBytes_obj_clear(self);
            Py_TYPE(self)->tp_free((PyObject *)self);
            CPy_TRASHCAN_END(self)
            done: ;
        }
        
        PyObject *CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup(PyObject *cpy_r_type);
        PyObject *CPyDef_main_____getitem___3_HexBytes_obj(void);
        
        static PyObject *
        main_____getitem___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
        {
            if (type != CPyType_main_____getitem___3_HexBytes_obj) {
                PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
                return NULL;
            }
            PyObject *self = CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup((PyObject*)type);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        static CPyVTableItem main_____getitem___3_HexBytes_obj_vtable[2];
        static bool
        CPyDef_main_____getitem___3_HexBytes_obj_trait_vtable_setup(void)
        {
            CPyVTableItem main_____getitem___3_HexBytes_obj_vtable_scratch[] = {
                (CPyVTableItem)CPyDef_main_____getitem___3_HexBytes_obj_____call__,
                (CPyVTableItem)CPyDef_main_____getitem___3_HexBytes_obj_____get__,
            };
            memcpy(main_____getitem___3_HexBytes_obj_vtable, main_____getitem___3_HexBytes_obj_vtable_scratch, sizeof(main_____getitem___3_HexBytes_obj_vtable));
            return 1;
        }
        
        static bool
        CPyDef_main_____getitem___3_HexBytes_obj_coroutine_setup(PyObject *type)
        {
            return 1;
        }
        
        static PyMethodDef main_____getitem___3_HexBytes_obj_methods[] = {
            {"__internal_mypyc_setup", (PyCFunction)CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup, METH_O, NULL},
            {"__call__",
             (PyCFunction)CPyPy_main_____getitem___3_HexBytes_obj_____call__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, key, /)\n--\n\n")},
            {"__get__",
             (PyCFunction)CPyPy_main_____getitem___3_HexBytes_obj_____get__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
            {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
            {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
            {NULL}  /* Sentinel */
        };
        
        static PyTypeObject CPyType_main_____getitem___3_HexBytes_obj_template_ = {
            PyVarObject_HEAD_INIT(NULL, 0)
            .tp_name = "__getitem___HexBytes_obj",
            .tp_new = main_____getitem___3_HexBytes_obj_new,
            .tp_dealloc = (destructor)main_____getitem___3_HexBytes_obj_dealloc,
            .tp_traverse = (traverseproc)main_____getitem___3_HexBytes_obj_traverse,
            .tp_clear = (inquiry)main_____getitem___3_HexBytes_obj_clear,
            .tp_methods = main_____getitem___3_HexBytes_obj_methods,
            .tp_call = PyVectorcall_Call,
            .tp_descr_get = CPyDunder___get__main_____getitem___3_HexBytes_obj,
            .tp_basicsize = sizeof(faster_hexbytes___main_____getitem___3_HexBytes_objObject),
            .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____getitem___3_HexBytes_objObject, vectorcall),
            .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
            .tp_doc = PyDoc_STR("__getitem___HexBytes_obj()\n--\n\n"),
        };
        static PyTypeObject *CPyType_main_____getitem___3_HexBytes_obj_template = &CPyType_main_____getitem___3_HexBytes_obj_template_;
        
        PyObject *CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup(PyObject *cpy_r_type)
        {
            PyTypeObject *type = (PyTypeObject*)cpy_r_type;
            faster_hexbytes___main_____getitem___3_HexBytes_objObject *self;
            if (main_____getitem___3_HexBytes_obj_free_instance != NULL) {
                self = main_____getitem___3_HexBytes_obj_free_instance;
                main_____getitem___3_HexBytes_obj_free_instance = NULL;
                Py_SET_REFCNT(self, 1);
                PyObject_GC_Track(self);
                return (PyObject *)self;
            }
            self = (faster_hexbytes___main_____getitem___3_HexBytes_objObject *)type->tp_alloc(type, 0);
            if (self == NULL)
                return NULL;
            self->vtable = main_____getitem___3_HexBytes_obj_vtable;
            self->vectorcall = CPyPy_main_____getitem___3_HexBytes_obj_____call__;
            return (PyObject *)self;
        }
        
        PyObject *CPyDef_main_____getitem___3_HexBytes_obj(void)
        {
            PyObject *self = CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup((PyObject *)CPyType_main_____getitem___3_HexBytes_obj);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        
        static PyObject *CPyDunder___get__main_____repr___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
            instance = instance ? instance : Py_None;
            return CPyDef_main_____repr___3_HexBytes_obj_____get__(self, instance, owner);
        }
        static int
        main_____repr___3_HexBytes_obj_traverse(faster_hexbytes___main_____repr___3_HexBytes_objObject *self, visitproc visit, void *arg)
        {
            int rv = 0;
            return rv;
        }
        
        static int
        main_____repr___3_HexBytes_obj_clear(faster_hexbytes___main_____repr___3_HexBytes_objObject *self)
        {
            return 0;
        }
        
        static void
        main_____repr___3_HexBytes_obj_dealloc(faster_hexbytes___main_____repr___3_HexBytes_objObject *self)
        {
            PyObject_GC_UnTrack(self);
            if (main_____repr___3_HexBytes_obj_free_instance == NULL) {
                main_____repr___3_HexBytes_obj_free_instance = self;
                return;
            }
            CPy_TRASHCAN_BEGIN(self, main_____repr___3_HexBytes_obj_dealloc)
            main_____repr___3_HexBytes_obj_clear(self);
            Py_TYPE(self)->tp_free((PyObject *)self);
            CPy_TRASHCAN_END(self)
            done: ;
        }
        
        PyObject *CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup(PyObject *cpy_r_type);
        PyObject *CPyDef_main_____repr___3_HexBytes_obj(void);
        
        static PyObject *
        main_____repr___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
        {
            if (type != CPyType_main_____repr___3_HexBytes_obj) {
                PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
                return NULL;
            }
            PyObject *self = CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup((PyObject*)type);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        static CPyVTableItem main_____repr___3_HexBytes_obj_vtable[2];
        static bool
        CPyDef_main_____repr___3_HexBytes_obj_trait_vtable_setup(void)
        {
            CPyVTableItem main_____repr___3_HexBytes_obj_vtable_scratch[] = {
                (CPyVTableItem)CPyDef_main_____repr___3_HexBytes_obj_____call__,
                (CPyVTableItem)CPyDef_main_____repr___3_HexBytes_obj_____get__,
            };
            memcpy(main_____repr___3_HexBytes_obj_vtable, main_____repr___3_HexBytes_obj_vtable_scratch, sizeof(main_____repr___3_HexBytes_obj_vtable));
            return 1;
        }
        
        static bool
        CPyDef_main_____repr___3_HexBytes_obj_coroutine_setup(PyObject *type)
        {
            return 1;
        }
        
        static PyMethodDef main_____repr___3_HexBytes_obj_methods[] = {
            {"__internal_mypyc_setup", (PyCFunction)CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup, METH_O, NULL},
            {"__call__",
             (PyCFunction)CPyPy_main_____repr___3_HexBytes_obj_____call__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, /)\n--\n\n")},
            {"__get__",
             (PyCFunction)CPyPy_main_____repr___3_HexBytes_obj_____get__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
            {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
            {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
            {NULL}  /* Sentinel */
        };
        
        static PyTypeObject CPyType_main_____repr___3_HexBytes_obj_template_ = {
            PyVarObject_HEAD_INIT(NULL, 0)
            .tp_name = "__repr___HexBytes_obj",
            .tp_new = main_____repr___3_HexBytes_obj_new,
            .tp_dealloc = (destructor)main_____repr___3_HexBytes_obj_dealloc,
            .tp_traverse = (traverseproc)main_____repr___3_HexBytes_obj_traverse,
            .tp_clear = (inquiry)main_____repr___3_HexBytes_obj_clear,
            .tp_methods = main_____repr___3_HexBytes_obj_methods,
            .tp_call = PyVectorcall_Call,
            .tp_descr_get = CPyDunder___get__main_____repr___3_HexBytes_obj,
            .tp_basicsize = sizeof(faster_hexbytes___main_____repr___3_HexBytes_objObject),
            .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____repr___3_HexBytes_objObject, vectorcall),
            .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
            .tp_doc = PyDoc_STR("__repr___HexBytes_obj()\n--\n\n"),
        };
        static PyTypeObject *CPyType_main_____repr___3_HexBytes_obj_template = &CPyType_main_____repr___3_HexBytes_obj_template_;
        
        PyObject *CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup(PyObject *cpy_r_type)
        {
            PyTypeObject *type = (PyTypeObject*)cpy_r_type;
            faster_hexbytes___main_____repr___3_HexBytes_objObject *self;
            if (main_____repr___3_HexBytes_obj_free_instance != NULL) {
                self = main_____repr___3_HexBytes_obj_free_instance;
                main_____repr___3_HexBytes_obj_free_instance = NULL;
                Py_SET_REFCNT(self, 1);
                PyObject_GC_Track(self);
                return (PyObject *)self;
            }
            self = (faster_hexbytes___main_____repr___3_HexBytes_objObject *)type->tp_alloc(type, 0);
            if (self == NULL)
                return NULL;
            self->vtable = main_____repr___3_HexBytes_obj_vtable;
            self->vectorcall = CPyPy_main_____repr___3_HexBytes_obj_____call__;
            return (PyObject *)self;
        }
        
        PyObject *CPyDef_main_____repr___3_HexBytes_obj(void)
        {
            PyObject *self = CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup((PyObject *)CPyType_main_____repr___3_HexBytes_obj);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        
        static PyObject *CPyDunder___get__main___to_0x_hex_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
            instance = instance ? instance : Py_None;
            return CPyDef_main___to_0x_hex_HexBytes_obj_____get__(self, instance, owner);
        }
        static int
        main___to_0x_hex_HexBytes_obj_traverse(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self, visitproc visit, void *arg)
        {
            int rv = 0;
            return rv;
        }
        
        static int
        main___to_0x_hex_HexBytes_obj_clear(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self)
        {
            return 0;
        }
        
        static void
        main___to_0x_hex_HexBytes_obj_dealloc(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self)
        {
            PyObject_GC_UnTrack(self);
            if (main___to_0x_hex_HexBytes_obj_free_instance == NULL) {
                main___to_0x_hex_HexBytes_obj_free_instance = self;
                return;
            }
            CPy_TRASHCAN_BEGIN(self, main___to_0x_hex_HexBytes_obj_dealloc)
            main___to_0x_hex_HexBytes_obj_clear(self);
            Py_TYPE(self)->tp_free((PyObject *)self);
            CPy_TRASHCAN_END(self)
            done: ;
        }
        
        PyObject *CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup(PyObject *cpy_r_type);
        PyObject *CPyDef_main___to_0x_hex_HexBytes_obj(void);
        
        static PyObject *
        main___to_0x_hex_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
        {
            if (type != CPyType_main___to_0x_hex_HexBytes_obj) {
                PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
                return NULL;
            }
            PyObject *self = CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup((PyObject*)type);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        static CPyVTableItem main___to_0x_hex_HexBytes_obj_vtable[2];
        static bool
        CPyDef_main___to_0x_hex_HexBytes_obj_trait_vtable_setup(void)
        {
            CPyVTableItem main___to_0x_hex_HexBytes_obj_vtable_scratch[] = {
                (CPyVTableItem)CPyDef_main___to_0x_hex_HexBytes_obj_____call__,
                (CPyVTableItem)CPyDef_main___to_0x_hex_HexBytes_obj_____get__,
            };
            memcpy(main___to_0x_hex_HexBytes_obj_vtable, main___to_0x_hex_HexBytes_obj_vtable_scratch, sizeof(main___to_0x_hex_HexBytes_obj_vtable));
            return 1;
        }
        
        static bool
        CPyDef_main___to_0x_hex_HexBytes_obj_coroutine_setup(PyObject *type)
        {
            return 1;
        }
        
        static PyMethodDef main___to_0x_hex_HexBytes_obj_methods[] = {
            {"__internal_mypyc_setup", (PyCFunction)CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup, METH_O, NULL},
            {"__call__",
             (PyCFunction)CPyPy_main___to_0x_hex_HexBytes_obj_____call__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self)\n--\n\n")},
            {"__get__",
             (PyCFunction)CPyPy_main___to_0x_hex_HexBytes_obj_____get__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
            {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
            {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
            {NULL}  /* Sentinel */
        };
        
        static PyTypeObject CPyType_main___to_0x_hex_HexBytes_obj_template_ = {
            PyVarObject_HEAD_INIT(NULL, 0)
            .tp_name = "to_0x_hex_HexBytes_obj",
            .tp_new = main___to_0x_hex_HexBytes_obj_new,
            .tp_dealloc = (destructor)main___to_0x_hex_HexBytes_obj_dealloc,
            .tp_traverse = (traverseproc)main___to_0x_hex_HexBytes_obj_traverse,
            .tp_clear = (inquiry)main___to_0x_hex_HexBytes_obj_clear,
            .tp_methods = main___to_0x_hex_HexBytes_obj_methods,
            .tp_call = PyVectorcall_Call,
            .tp_descr_get = CPyDunder___get__main___to_0x_hex_HexBytes_obj,
            .tp_basicsize = sizeof(faster_hexbytes___main___to_0x_hex_HexBytes_objObject),
            .tp_vectorcall_offset = offsetof(faster_hexbytes___main___to_0x_hex_HexBytes_objObject, vectorcall),
            .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
            .tp_doc = PyDoc_STR("to_0x_hex_HexBytes_obj()\n--\n\n"),
        };
        static PyTypeObject *CPyType_main___to_0x_hex_HexBytes_obj_template = &CPyType_main___to_0x_hex_HexBytes_obj_template_;
        
        PyObject *CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup(PyObject *cpy_r_type)
        {
            PyTypeObject *type = (PyTypeObject*)cpy_r_type;
            faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self;
            if (main___to_0x_hex_HexBytes_obj_free_instance != NULL) {
                self = main___to_0x_hex_HexBytes_obj_free_instance;
                main___to_0x_hex_HexBytes_obj_free_instance = NULL;
                Py_SET_REFCNT(self, 1);
                PyObject_GC_Track(self);
                return (PyObject *)self;
            }
            self = (faster_hexbytes___main___to_0x_hex_HexBytes_objObject *)type->tp_alloc(type, 0);
            if (self == NULL)
                return NULL;
            self->vtable = main___to_0x_hex_HexBytes_obj_vtable;
            self->vectorcall = CPyPy_main___to_0x_hex_HexBytes_obj_____call__;
            return (PyObject *)self;
        }
        
        PyObject *CPyDef_main___to_0x_hex_HexBytes_obj(void)
        {
            PyObject *self = CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup((PyObject *)CPyType_main___to_0x_hex_HexBytes_obj);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        
        static PyObject *CPyDunder___get__main_____reduce___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
            instance = instance ? instance : Py_None;
            return CPyDef_main_____reduce___3_HexBytes_obj_____get__(self, instance, owner);
        }
        static int
        main_____reduce___3_HexBytes_obj_traverse(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self, visitproc visit, void *arg)
        {
            int rv = 0;
            return rv;
        }
        
        static int
        main_____reduce___3_HexBytes_obj_clear(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self)
        {
            return 0;
        }
        
        static void
        main_____reduce___3_HexBytes_obj_dealloc(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self)
        {
            PyObject_GC_UnTrack(self);
            if (main_____reduce___3_HexBytes_obj_free_instance == NULL) {
                main_____reduce___3_HexBytes_obj_free_instance = self;
                return;
            }
            CPy_TRASHCAN_BEGIN(self, main_____reduce___3_HexBytes_obj_dealloc)
            main_____reduce___3_HexBytes_obj_clear(self);
            Py_TYPE(self)->tp_free((PyObject *)self);
            CPy_TRASHCAN_END(self)
            done: ;
        }
        
        PyObject *CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup(PyObject *cpy_r_type);
        PyObject *CPyDef_main_____reduce___3_HexBytes_obj(void);
        
        static PyObject *
        main_____reduce___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
        {
            if (type != CPyType_main_____reduce___3_HexBytes_obj) {
                PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
                return NULL;
            }
            PyObject *self = CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup((PyObject*)type);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        static CPyVTableItem main_____reduce___3_HexBytes_obj_vtable[2];
        static bool
        CPyDef_main_____reduce___3_HexBytes_obj_trait_vtable_setup(void)
        {
            CPyVTableItem main_____reduce___3_HexBytes_obj_vtable_scratch[] = {
                (CPyVTableItem)CPyDef_main_____reduce___3_HexBytes_obj_____call__,
                (CPyVTableItem)CPyDef_main_____reduce___3_HexBytes_obj_____get__,
            };
            memcpy(main_____reduce___3_HexBytes_obj_vtable, main_____reduce___3_HexBytes_obj_vtable_scratch, sizeof(main_____reduce___3_HexBytes_obj_vtable));
            return 1;
        }
        
        static bool
        CPyDef_main_____reduce___3_HexBytes_obj_coroutine_setup(PyObject *type)
        {
            return 1;
        }
        
        static PyMethodDef main_____reduce___3_HexBytes_obj_methods[] = {
            {"__internal_mypyc_setup", (PyCFunction)CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup, METH_O, NULL},
            {"__call__",
             (PyCFunction)CPyPy_main_____reduce___3_HexBytes_obj_____call__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self)\n--\n\n")},
            {"__get__",
             (PyCFunction)CPyPy_main_____reduce___3_HexBytes_obj_____get__,
             METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
            {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
            {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
            {NULL}  /* Sentinel */
        };
        
        static PyTypeObject CPyType_main_____reduce___3_HexBytes_obj_template_ = {
            PyVarObject_HEAD_INIT(NULL, 0)
            .tp_name = "__reduce___HexBytes_obj",
            .tp_new = main_____reduce___3_HexBytes_obj_new,
            .tp_dealloc = (destructor)main_____reduce___3_HexBytes_obj_dealloc,
            .tp_traverse = (traverseproc)main_____reduce___3_HexBytes_obj_traverse,
            .tp_clear = (inquiry)main_____reduce___3_HexBytes_obj_clear,
            .tp_methods = main_____reduce___3_HexBytes_obj_methods,
            .tp_call = PyVectorcall_Call,
            .tp_descr_get = CPyDunder___get__main_____reduce___3_HexBytes_obj,
            .tp_basicsize = sizeof(faster_hexbytes___main_____reduce___3_HexBytes_objObject),
            .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____reduce___3_HexBytes_objObject, vectorcall),
            .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
            .tp_doc = PyDoc_STR("__reduce___HexBytes_obj()\n--\n\n"),
        };
        static PyTypeObject *CPyType_main_____reduce___3_HexBytes_obj_template = &CPyType_main_____reduce___3_HexBytes_obj_template_;
        
        PyObject *CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup(PyObject *cpy_r_type)
        {
            PyTypeObject *type = (PyTypeObject*)cpy_r_type;
            faster_hexbytes___main_____reduce___3_HexBytes_objObject *self;
            if (main_____reduce___3_HexBytes_obj_free_instance != NULL) {
                self = main_____reduce___3_HexBytes_obj_free_instance;
                main_____reduce___3_HexBytes_obj_free_instance = NULL;
                Py_SET_REFCNT(self, 1);
                PyObject_GC_Track(self);
                return (PyObject *)self;
            }
            self = (faster_hexbytes___main_____reduce___3_HexBytes_objObject *)type->tp_alloc(type, 0);
            if (self == NULL)
                return NULL;
            self->vtable = main_____reduce___3_HexBytes_obj_vtable;
            self->vectorcall = CPyPy_main_____reduce___3_HexBytes_obj_____call__;
            return (PyObject *)self;
        }
        
        PyObject *CPyDef_main_____reduce___3_HexBytes_obj(void)
        {
            PyObject *self = CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup((PyObject *)CPyType_main_____reduce___3_HexBytes_obj);
            if (self == NULL)
                return NULL;
            return self;
        }
        
        static PyMethodDef mainmodule_methods[] = {
            {NULL, NULL, 0, NULL}
        };
        
        int CPyExec_faster_hexbytes___main(PyObject *module)
        {
            intern_strings();
            if (import_librt_strings() < 0) {
                return -1;
            }
            PyObject* modname = NULL;
            modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_hexbytes___main__internal, "__name__");
            CPyStatic_main___globals = PyModule_GetDict(CPyModule_faster_hexbytes___main__internal);
            if (unlikely(CPyStatic_main___globals == NULL))
                goto fail;
            CPyType_main_____new___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main_____new___3_HexBytes_obj_template, NULL, modname);
            if (unlikely(!CPyType_main_____new___3_HexBytes_obj))
                goto fail;
            CPyDef_main_____new___3_HexBytes_obj_trait_vtable_setup();
            CPyType_main_____getitem___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main_____getitem___3_HexBytes_obj_template, NULL, modname);
            if (unlikely(!CPyType_main_____getitem___3_HexBytes_obj))
                goto fail;
            CPyDef_main_____getitem___3_HexBytes_obj_trait_vtable_setup();
            CPyType_main_____repr___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main_____repr___3_HexBytes_obj_template, NULL, modname);
            if (unlikely(!CPyType_main_____repr___3_HexBytes_obj))
                goto fail;
            CPyDef_main_____repr___3_HexBytes_obj_trait_vtable_setup();
            CPyType_main___to_0x_hex_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main___to_0x_hex_HexBytes_obj_template, NULL, modname);
            if (unlikely(!CPyType_main___to_0x_hex_HexBytes_obj))
                goto fail;
            CPyDef_main___to_0x_hex_HexBytes_obj_trait_vtable_setup();
            CPyType_main_____reduce___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main_____reduce___3_HexBytes_obj_template, NULL, modname);
            if (unlikely(!CPyType_main_____reduce___3_HexBytes_obj))
                goto fail;
            CPyDef_main_____reduce___3_HexBytes_obj_trait_vtable_setup();
            if (CPyGlobalsInit() < 0)
                goto fail;
            char result = CPyDef_main_____top_level__();
            if (result == 2)
                goto fail;
            Py_DECREF(modname);
            return 0;
            fail:
            Py_CLEAR(CPyModule_faster_hexbytes___main__internal);
            Py_CLEAR(modname);
            CPy_XDECREF(CPyStatic_main____bytes_new);
            CPyStatic_main____bytes_new = NULL;
            Py_CLEAR(CPyType_main___HexBytes);
            Py_CLEAR(CPyType_main____HexBytesSubclass1);
            Py_CLEAR(CPyType_main____HexBytesSubclass2);
            Py_CLEAR(CPyType_main____HexBytesSubclass3);
            Py_CLEAR(CPyType_main_____new___3_HexBytes_obj);
            Py_CLEAR(CPyType_main_____getitem___3_HexBytes_obj);
            Py_CLEAR(CPyType_main_____repr___3_HexBytes_obj);
            Py_CLEAR(CPyType_main___to_0x_hex_HexBytes_obj);
            Py_CLEAR(CPyType_main_____reduce___3_HexBytes_obj);
            return -1;
        }
        static struct PyModuleDef mainmodule = {
            PyModuleDef_HEAD_INIT,
            "faster_hexbytes.main",
            NULL, /* docstring */
            0,       /* size of per-interpreter state of the module */
            mainmodule_methods,
            NULL,
        };
        
        PyObject *CPyInitOnly_faster_hexbytes___main(void)
        {
            if (CPyModule_faster_hexbytes___main__internal) {
                Py_INCREF(CPyModule_faster_hexbytes___main__internal);
                return CPyModule_faster_hexbytes___main__internal;
            }
            CPyModule_faster_hexbytes___main__internal = PyModule_Create(&mainmodule);
            return CPyModule_faster_hexbytes___main__internal;
        }
        
        PyObject *CPyInit_faster_hexbytes___main(void)
        {
            PyObject* modname = NULL;
            if (CPyModule_faster_hexbytes___main__internal) {
                Py_INCREF(CPyModule_faster_hexbytes___main__internal);
                return CPyModule_faster_hexbytes___main__internal;
            }
            CPyModule_faster_hexbytes___main__internal = PyModule_Create(&mainmodule);
            if (unlikely(CPyModule_faster_hexbytes___main__internal == NULL))
                goto fail;
            modname = PyUnicode_FromString("faster_hexbytes.main");
            if (modname == NULL) CPyError_OutOfMemory();
            int rv = 0;
            PyObject *mod_dict = PyImport_GetModuleDict();
            PyObject *shared_lib = NULL;
            rv = PyDict_GetItemStringRef(mod_dict, "faster_hexbytes__mypyc", &shared_lib);
            if (rv < 0) goto fail;
            PyObject *shared_lib_file = PyObject_GetAttrString(shared_lib, "__file__");
            if (shared_lib_file == NULL) goto fail;
            PyObject *ext_suffix = PyUnicode_FromString(".cpython-314-x86_64-linux-gnu.so");
            if (ext_suffix == NULL) CPyError_OutOfMemory();
            Py_ssize_t is_pkg = 0;
            rv = CPyImport_SetDunderAttrs(CPyModule_faster_hexbytes___main__internal, modname, shared_lib_file, ext_suffix, is_pkg);
            Py_DECREF(ext_suffix);
            Py_DECREF(shared_lib_file);
            if (rv < 0) goto fail;
            if (PyObject_SetItem(PyImport_GetModuleDict(), modname, CPyModule_faster_hexbytes___main__internal) < 0)
                goto fail;
            Py_CLEAR(modname);
            if (CPyExec_faster_hexbytes___main(CPyModule_faster_hexbytes___main__internal) != 0)
                goto fail;
            return CPyModule_faster_hexbytes___main__internal;
            fail:
            {
                    PyObject *exc_type, *exc_val, *exc_tb;
                    PyErr_Fetch(&exc_type, &exc_val, &exc_tb);
                    if (modname == NULL) {
                            modname = PyUnicode_FromString("faster_hexbytes.main");
                            if (modname == NULL) CPyError_OutOfMemory();
                        }
                        PyObject_DelItem(PyImport_GetModuleDict(), modname);
                        PyErr_Clear();
                        Py_DECREF(modname);
                        Py_CLEAR(CPyModule_faster_hexbytes___main__internal);
                        PyErr_Restore(exc_type, exc_val, exc_tb);
                }
                return NULL;
            }
            
PyObject *CPyDef_main_____new___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}
            
            PyObject *CPyPy_main_____new___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"instance", "owner", 0};
                static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
                PyObject *obj_instance;
                PyObject *obj_owner;
                if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_instance = obj_instance;
                PyObject *arg_owner = obj_owner;
                PyObject *retval = CPyDef_main_____new___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
                return NULL;
            }
            
PyObject *CPyDef_main_____new___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_val) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPy_TYPE(cpy_r_val);
    cpy_r_r1 = cpy_r_r0 == cpy_r_cls;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL3;
    CPy_INCREF(cpy_r_val);
    if (likely(PyObject_TypeCheck(cpy_r_val, CPyType_main___HexBytes)))
        cpy_r_r2 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__new__", 54, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_val);
        goto CPyL18;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = PyBytes_Check(cpy_r_val);
    if (!cpy_r_r3) goto CPyL11;
    CPy_INCREF(cpy_r_val);
    if (likely(PyBytes_Check(cpy_r_val)))
        cpy_r_r4 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__new__", 57, CPyStatic_main___globals, "bytes", cpy_r_val);
        goto CPyL18;
    }
    cpy_r_r5 = CPyStatic_main____bytes_new;
    if (unlikely(cpy_r_r5 == NULL)) {
        goto CPyL19;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_bytes_new\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL8: ;
    PyObject *cpy_r_r7[2] = {cpy_r_cls, cpy_r_r4};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r5, cpy_r_r8, 2, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL20;
    }
    CPy_DECREF(cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_main___HexBytes)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__new__", 57, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r9);
        goto CPyL18;
    }
    return cpy_r_r10;
CPyL11: ;
    cpy_r_r11 = CPyDef__utils___to_bytes(cpy_r_val);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL18;
    }
    cpy_r_r12 = CPyStatic_main____bytes_new;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL21;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_bytes_new\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL15: ;
    PyObject *cpy_r_r14[2] = {cpy_r_cls, cpy_r_r11};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_Vectorcall(cpy_r_r12, cpy_r_r15, 2, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL22;
    }
    CPy_DECREF(cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_main___HexBytes)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__new__", 59, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r16);
        goto CPyL18;
    }
    return cpy_r_r17;
CPyL18: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL19: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL6;
CPyL20: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL13;
CPyL22: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL18;
}
            
            PyObject *CPyPy_main_____new___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"cls", "val", 0};
                static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
                PyObject *obj_cls;
                PyObject *obj_val;
                if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_cls, &obj_val)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_cls = obj_cls;
                PyObject *arg_val;
                if (PyBytes_Check(obj_val))
                    arg_val = obj_val;
                else {
                    arg_val = NULL;
                }
                if (arg_val != NULL) goto __LL2;
                if (PyUnicode_Check(obj_val))
                    arg_val = obj_val;
                else {
                    arg_val = NULL;
                }
                if (arg_val != NULL) goto __LL2;
                if (PyBool_Check(obj_val))
                    arg_val = obj_val;
                else {
                    arg_val = NULL;
                }
                if (arg_val != NULL) goto __LL2;
                if (PyByteArray_Check(obj_val))
                    arg_val = obj_val;
                else {
                    arg_val = NULL;
                }
                if (arg_val != NULL) goto __LL2;
                if (PyLong_Check(obj_val))
                    arg_val = obj_val;
                else {
                    arg_val = NULL;
                }
                if (arg_val != NULL) goto __LL2;
                arg_val = obj_val;
                if (arg_val != NULL) goto __LL2;
                CPy_TypeError("union[bytes, str, bool, bytearray, int, object]", obj_val); 
                goto fail;
__LL2: ;
                PyObject *retval = CPyDef_main_____new___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_cls, arg_val);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
                return NULL;
            }
            
PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}
            
            PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"instance", "owner", 0};
                static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
                PyObject *obj_instance;
                PyObject *obj_owner;
                if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_instance = obj_instance;
                PyObject *arg_owner = obj_owner;
                PyObject *retval = CPyDef_main_____getitem___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
                return NULL;
            }
            
PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = (PyObject *)&PyBytes_Type;
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__getitem__' */
    PyObject *cpy_r_r2[3] = {cpy_r_r0, cpy_r_self, cpy_r_key};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL24;
    }
    if (PyLong_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL3;
    if (PyBytes_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL3;
    CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 72, CPyStatic_main___globals, "union[int, bytes]", cpy_r_r4);
    goto CPyL24;
__LL3: ;
    cpy_r_r6 = PyLong_Check(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL5;
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL24;
    }
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPy_TYPE(cpy_r_self);
    cpy_r_r10 = (PyObject *)CPyType_main___HexBytes;
    cpy_r_r11 = cpy_r_r9 == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL25;
    } else
        goto CPyL20;
CPyL6: ;
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'slice' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL26;
    }
    cpy_r_r15 = PyObject_IsInstance(cpy_r_key, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL26;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL16;
    cpy_r_r18 = (PyObject *)CPyType_main___HexBytes;
    if (likely(PyBytes_Check(cpy_r_r5)))
        cpy_r_r19 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 80, CPyStatic_main___globals, "bytes", cpy_r_r5);
        goto CPyL24;
    }
    cpy_r_r20 = CPyStatic_main____bytes_new;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL27;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_bytes_new\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL13: ;
    PyObject *cpy_r_r22[2] = {cpy_r_r18, cpy_r_r19};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_Vectorcall(cpy_r_r20, cpy_r_r23, 2, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL28;
    }
    CPy_DECREF(cpy_r_r19);
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_main___HexBytes)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 80, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r24);
        goto CPyL24;
    }
    return cpy_r_r25;
CPyL16: ;
    if (likely(PyBytes_Check(cpy_r_r5)))
        cpy_r_r26 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 82, CPyStatic_main___globals, "bytes", cpy_r_r5);
        goto CPyL24;
    }
    cpy_r_r27 = (PyObject *)CPyType_main___HexBytes;
    PyObject *cpy_r_r28[1] = {cpy_r_r26};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r26);
    if (likely(PyObject_TypeCheck(cpy_r_r30, CPyType_main___HexBytes)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 82, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r30);
        goto CPyL24;
    }
    return cpy_r_r31;
CPyL20: ;
    if (likely(PyBytes_Check(cpy_r_r5)))
        cpy_r_r32 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 83, CPyStatic_main___globals, "bytes", cpy_r_r5);
        goto CPyL30;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r32};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r32);
    if (likely(PyObject_TypeCheck(cpy_r_r35, CPyType_main___HexBytes)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 83, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r35);
        goto CPyL24;
    }
    return cpy_r_r36;
CPyL24: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL25: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL6;
CPyL26: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL11;
CPyL28: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL24;
CPyL30: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL24;
}
            
            PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"self", "key", 0};
                static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
                PyObject *obj_self;
                PyObject *obj_key;
                if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_key)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_self;
                if (likely(PyObject_TypeCheck(obj_self, CPyType_main___HexBytes)))
                    arg_self = obj_self;
                else {
                    CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
                    goto fail;
                }
                PyObject *arg_key = obj_key;
                PyObject *retval = CPyDef_main_____getitem___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self, arg_key);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
                return NULL;
            }
            
PyObject *CPyDef_main_____repr___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}
            
            PyObject *CPyPy_main_____repr___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"instance", "owner", 0};
                static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
                PyObject *obj_instance;
                PyObject *obj_owner;
                if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_instance = obj_instance;
                PyObject *arg_owner = obj_owner;
                PyObject *retval = CPyDef_main_____repr___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
                return NULL;
            }
            
PyObject *CPyDef_main_____repr___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = LibRTStrings_StringWriter_internal();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "HexBytes('0x" */
    cpy_r_r2 = LibRTStrings_StringWriter_write_internal(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL9;
    }
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    PyObject *cpy_r_r4[1] = {cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__repr__", 88, CPyStatic_main___globals, "str", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_r8 = LibRTStrings_StringWriter_write_internal(cpy_r_r0, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL9;
    }
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "')" */
    cpy_r_r10 = LibRTStrings_StringWriter_write_internal(cpy_r_r0, cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL9;
    }
    cpy_r_r11 = LibRTStrings_StringWriter_getvalue_internal(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL8;
    }
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
}
            
            PyObject *CPyPy_main_____repr___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"self", 0};
                static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
                PyObject *obj_self;
                if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_self;
                if (likely(PyObject_TypeCheck(obj_self, CPyType_main___HexBytes)))
                    arg_self = obj_self;
                else {
                    CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
                    goto fail;
                }
                PyObject *retval = CPyDef_main_____repr___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
                return NULL;
            }
            
PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}
            
            PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"instance", "owner", 0};
                static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
                PyObject *obj_instance;
                PyObject *obj_owner;
                if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_instance = obj_instance;
                PyObject *arg_owner = obj_owner;
                PyObject *retval = CPyDef_main___to_0x_hex_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
                return NULL;
            }
            
PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = LibRTStrings_StringWriter_internal();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL7;
    }
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r2 = LibRTStrings_StringWriter_write_internal(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    PyObject *cpy_r_r4[1] = {cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "to_0x_hex", 98, CPyStatic_main___globals, "str", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_r8 = LibRTStrings_StringWriter_write_internal(cpy_r_r0, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r9 = LibRTStrings_StringWriter_getvalue_internal(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}
            
            PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"self", 0};
                static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
                PyObject *obj_self;
                if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_self;
                if (likely(PyObject_TypeCheck(obj_self, CPyType_main___HexBytes)))
                    arg_self = obj_self;
                else {
                    CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
                    goto fail;
                }
                PyObject *retval = CPyDef_main___to_0x_hex_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
                return NULL;
            }
            
PyObject *CPyDef_main_____reduce___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}
            
            PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"instance", "owner", 0};
                static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
                PyObject *obj_instance;
                PyObject *obj_owner;
                if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_instance = obj_instance;
                PyObject *arg_owner = obj_owner;
                PyObject *retval = CPyDef_main_____reduce___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
                return retval;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
                return NULL;
            }
            
tuple_T2OT2OO CPyDef_main_____reduce___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    tuple_T2OT2OO cpy_r_r9;
    tuple_T2OT2OO cpy_r_r10;
    cpy_r_r0 = CPyStatic_main____bytes_new;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_bytes_new\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPy_TYPE(cpy_r_self);
    cpy_r_r3 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r4[1] = {cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL7;
    }
    if (likely(PyBytes_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__reduce__", 109, CPyStatic_main___globals, "bytes", cpy_r_r6);
        goto CPyL7;
    }
    cpy_r_r8.f0 = cpy_r_r2;
    cpy_r_r8.f1 = cpy_r_r7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r9.f0 = cpy_r_r0;
    cpy_r_r9.f1 = cpy_r_r8;
    return cpy_r_r9;
CPyL6: ;
    tuple_T2OT2OO __tmp4 = { NULL, (tuple_T2OO) { NULL, NULL } };
    cpy_r_r10 = __tmp4;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}
            
            PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
                PyObject *obj___mypyc_self__ = self;
                static const char * const kwlist[] = {"self", 0};
                static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
                PyObject *obj_self;
                if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
                    return NULL;
                }
                PyObject *arg___mypyc_self__ = obj___mypyc_self__;
                PyObject *arg_self;
                if (likely(PyObject_TypeCheck(obj_self, CPyType_main___HexBytes)))
                    arg_self = obj_self;
                else {
                    CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
                    goto fail;
                }
                tuple_T2OT2OO retval = CPyDef_main_____reduce___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
                if (retval.f0 == NULL) {
                    return NULL;
                }
                PyObject *retbox = PyTuple_New(2);
                if (unlikely(retbox == NULL))
                    CPyError_OutOfMemory();
                PyObject *__tmp5 = retval.f0;
                PyTuple_SET_ITEM(retbox, 0, __tmp5);
                PyObject *__tmp6 = PyTuple_New(2);
                if (unlikely(__tmp6 == NULL))
                    CPyError_OutOfMemory();
                PyObject *__tmp7 = retval.f1.f0;
                PyTuple_SET_ITEM(__tmp6, 0, __tmp7);
                PyObject *__tmp8 = retval.f1.f1;
                PyTuple_SET_ITEM(__tmp6, 1, __tmp8);
                PyTuple_SET_ITEM(retbox, 1, __tmp6);
                return retbox;
fail: ;
                CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
                return NULL;
            }
            
char CPyDef_main_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    void *cpy_r_r34;
    void *cpy_r_r35;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    tuple_T6OOOOOO cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject **cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject **cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject **cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject **cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject **cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject **cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject **cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject **cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    int32_t cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    int32_t cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    int32_t cpy_r_r228;
    char cpy_r_r229;
    PyObject **cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject **cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject **cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    int32_t cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject **cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    int32_t cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    int32_t cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    int32_t cpy_r_r277;
    char cpy_r_r278;
    PyObject **cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject **cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject **cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    int32_t cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    char cpy_r_r298;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('TYPE_CHECKING', 'Callable', 'Final', 'Union', 'cast',
                                  'overload') */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r7 = CPyStatic_main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_hexbytes___main;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {13};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('hexbytes.main', 'hexbytes.main', 'hexbytes'),) */
    cpy_r_r15 = CPyStatic_main___globals;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes/main.py' */
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL110;
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('StringWriter',) */
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'librt.strings' */
    cpy_r_r21 = CPyStatic_main___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    CPyModule_librt___strings = cpy_r_r22;
    CPy_INCREF(CPyModule_librt___strings);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('mypyc_attr',) */
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypy_extensions' */
    cpy_r_r25 = CPyStatic_main___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    CPyModule_mypy_extensions = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Self',) */
    cpy_r_r28 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing_extensions' */
    cpy_r_r29 = CPyStatic_main___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    CPyModule_typing_extensions = cpy_r_r30;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyModule_faster_hexbytes____utils;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_r31 != cpy_r_r32;
    if (cpy_r_r33) goto CPyL13;
    cpy_r_r34 = CPyInitOnly_faster_hexbytes____utils;
    cpy_r_r35 = CPyExec_faster_hexbytes____utils;
    cpy_r_r36 = (PyObject **)&CPyModule_faster_hexbytes____utils__internal;
    cpy_r_r37 = PyImport_GetModuleDict();
    cpy_r_r38 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes__mypyc' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r40 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__file__' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r42 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '.cpython-314-x86_64-linux-gnu.so' */
    cpy_r_r43 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes._utils' */
    cpy_r_r44 = CPyImport_ImportNative(cpy_r_r43, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r41, cpy_r_r42, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    CPyModule_faster_hexbytes____utils = cpy_r_r44;
    CPy_INCREF(CPyModule_faster_hexbytes____utils);
    CPy_DECREF(cpy_r_r44);
CPyL13: ;
    cpy_r_r45 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('to_bytes',) */
    cpy_r_r46 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes._utils' */
    cpy_r_r47 = CPyStatic_main___globals;
    cpy_r_r48 = CPyImport_GetNativeAttrs(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    } else
        goto CPyL111;
CPyL14: ;
    cpy_r_r49 = CPyStatic_main___globals;
    cpy_r_r50 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Union' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r52 = (PyObject *)&PyBytes_Type;
    cpy_r_r53 = (PyObject *)&PyUnicode_Type;
    cpy_r_r54 = (PyObject *)&PyBool_Type;
    cpy_r_r55 = (PyObject *)&PyByteArray_Type;
    cpy_r_r56 = (PyObject *)&PyLong_Type;
    cpy_r_r57 = CPyModule_builtins;
    cpy_r_r58 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'memoryview' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL112;
    }
    CPy_INCREF(cpy_r_r52);
    CPy_INCREF(cpy_r_r53);
    CPy_INCREF(cpy_r_r54);
    CPy_INCREF(cpy_r_r55);
    CPy_INCREF(cpy_r_r56);
    cpy_r_r60.f0 = cpy_r_r52;
    cpy_r_r60.f1 = cpy_r_r53;
    cpy_r_r60.f2 = cpy_r_r54;
    cpy_r_r60.f3 = cpy_r_r55;
    cpy_r_r60.f4 = cpy_r_r56;
    cpy_r_r60.f5 = cpy_r_r59;
    cpy_r_r61 = PyTuple_New(6);
    if (unlikely(cpy_r_r61 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = cpy_r_r60.f0;
    PyTuple_SET_ITEM(cpy_r_r61, 0, __tmp9);
    PyObject *__tmp10 = cpy_r_r60.f1;
    PyTuple_SET_ITEM(cpy_r_r61, 1, __tmp10);
    PyObject *__tmp11 = cpy_r_r60.f2;
    PyTuple_SET_ITEM(cpy_r_r61, 2, __tmp11);
    PyObject *__tmp12 = cpy_r_r60.f3;
    PyTuple_SET_ITEM(cpy_r_r61, 3, __tmp12);
    PyObject *__tmp13 = cpy_r_r60.f4;
    PyTuple_SET_ITEM(cpy_r_r61, 4, __tmp13);
    PyObject *__tmp14 = cpy_r_r60.f5;
    PyTuple_SET_ITEM(cpy_r_r61, 5, __tmp14);
    cpy_r_r62 = PyObject_GetItem(cpy_r_r51, cpy_r_r61);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r63 = CPyStatic_main___globals;
    cpy_r_r64 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'BytesLike' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r63, cpy_r_r64, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r67 = (PyObject *)&PyBytes_Type;
    cpy_r_r68 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__new__' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    CPyStatic_main____bytes_new = cpy_r_r69;
    CPy_INCREF(CPyStatic_main____bytes_new);
    cpy_r_r70 = CPyStatic_main___globals;
    cpy_r_r71 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_bytes_new' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r74 = CPyModule_hexbytes___main;
    cpy_r_r75 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r77 = PyTuple_Pack(1, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r78 = (PyObject *)&PyType_Type;
    cpy_r_r79 = CPy_CalculateMetaclass(cpy_r_r78, cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL113;
    }
    cpy_r_r80 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r81 = PyObject_HasAttr(cpy_r_r79, cpy_r_r80);
    if (!cpy_r_r81) goto CPyL29;
    cpy_r_r82 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r83 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL113;
    }
    PyObject *cpy_r_r85[2] = {cpy_r_r82, cpy_r_r77};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = PyObject_Vectorcall(cpy_r_r84, cpy_r_r86, 2, 0);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL113;
    }
    if (likely(PyDict_Check(cpy_r_r87)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 40, CPyStatic_main___globals, "dict", cpy_r_r87);
        goto CPyL113;
    }
    cpy_r_r89 = cpy_r_r88;
    goto CPyL31;
CPyL29: ;
    cpy_r_r90 = PyDict_New();
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL113;
    }
    cpy_r_r89 = cpy_r_r90;
CPyL31: ;
    cpy_r_r91 = PyDict_New();
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    cpy_r_r92 = CPyDef_main_____new___3_HexBytes_obj();
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r93 = CPyModule_builtins;
    cpy_r_r94 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'staticmethod' */
    cpy_r_r95 = CPyObject_GetAttr(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL116;
    }
    PyObject *cpy_r_r96[1] = {cpy_r_r92};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = PyObject_Vectorcall(cpy_r_r95, cpy_r_r97, 1, 0);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL116;
    }
    CPy_DECREF_NO_IMM(cpy_r_r92);
    cpy_r_r99 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__new__' */
    cpy_r_r100 = CPyDict_SetItem(cpy_r_r89, cpy_r_r99, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r102 = CPyDef_main_____getitem___3_HexBytes_obj();
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r103 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__getitem__' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r89, cpy_r_r103, cpy_r_r102);
    CPy_DECREF_NO_IMM(cpy_r_r102);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r106 = CPyDef_main_____repr___3_HexBytes_obj();
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r107 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__repr__' */
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r89, cpy_r_r107, cpy_r_r106);
    CPy_DECREF_NO_IMM(cpy_r_r106);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r110 = CPyDef_main___to_0x_hex_HexBytes_obj();
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r111 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'to_0x_hex' */
    cpy_r_r112 = CPyDict_SetItem(cpy_r_r89, cpy_r_r111, cpy_r_r110);
    CPy_DECREF_NO_IMM(cpy_r_r110);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r114 = CPyDef_main_____reduce___3_HexBytes_obj();
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r115 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__reduce__' */
    cpy_r_r116 = CPyDict_SetItem(cpy_r_r89, cpy_r_r115, cpy_r_r114);
    CPy_DECREF_NO_IMM(cpy_r_r114);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r118 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r119 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r89, cpy_r_r119, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    cpy_r_r122 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r123 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r89, cpy_r_r123, cpy_r_r122);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    cpy_r_r126 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r127 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r89, cpy_r_r127, cpy_r_r126);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    PyObject *cpy_r_r130[3] = {cpy_r_r118, cpy_r_r77, cpy_r_r89};
    cpy_r_r131 = (PyObject **)&cpy_r_r130;
    cpy_r_r132 = PyObject_Vectorcall(cpy_r_r79, cpy_r_r131, 3, 0);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r133 = CPyStatic_main___globals;
    cpy_r_r134 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc_attr' */
    cpy_r_r135 = CPyDict_GetItem(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL117;
    }
    cpy_r_r136 = 0 ? Py_True : Py_False;
    cpy_r_r137 = 1 ? Py_True : Py_False;
    cpy_r_r138 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r139[3] = {cpy_r_r136, cpy_r_r137, cpy_r_r138};
    cpy_r_r140 = (PyObject **)&cpy_r_r139;
    cpy_r_r141 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('native_class', 'acyclic',
                                    'allow_interpreted_subclasses') */
    cpy_r_r142 = PyObject_Vectorcall(cpy_r_r135, cpy_r_r140, 0, cpy_r_r141);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL117;
    }
    PyObject *cpy_r_r143[1] = {cpy_r_r132};
    cpy_r_r144 = (PyObject **)&cpy_r_r143;
    cpy_r_r145 = PyObject_Vectorcall(cpy_r_r142, cpy_r_r144, 1, 0);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL117;
    }
    CPy_DECREF(cpy_r_r132);
    CPyType_main___HexBytes = (PyTypeObject *)cpy_r_r145;
    CPy_INCREF(CPyType_main___HexBytes);
    cpy_r_r146 = CPyStatic_main___globals;
    cpy_r_r147 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r148 = PyDict_SetItem(cpy_r_r146, cpy_r_r147, cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r150 = (PyObject *)CPyType_main___HexBytes;
    cpy_r_r151 = CPyStatic_main___globals;
    cpy_r_r152 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r153 = CPyDict_GetItem(cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r154 = PyTuple_Pack(1, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r155 = (PyObject *)&PyType_Type;
    cpy_r_r156 = CPy_CalculateMetaclass(cpy_r_r155, cpy_r_r154);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL118;
    }
    cpy_r_r157 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r158 = PyObject_HasAttr(cpy_r_r156, cpy_r_r157);
    if (!cpy_r_r158) goto CPyL60;
    cpy_r_r159 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass1' */
    cpy_r_r160 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r161 = CPyObject_GetAttr(cpy_r_r156, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL118;
    }
    PyObject *cpy_r_r162[2] = {cpy_r_r159, cpy_r_r154};
    cpy_r_r163 = (PyObject **)&cpy_r_r162;
    cpy_r_r164 = PyObject_Vectorcall(cpy_r_r161, cpy_r_r163, 2, 0);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL118;
    }
    if (likely(PyDict_Check(cpy_r_r164)))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 117, CPyStatic_main___globals, "dict", cpy_r_r164);
        goto CPyL118;
    }
    cpy_r_r166 = cpy_r_r165;
    goto CPyL62;
CPyL60: ;
    cpy_r_r167 = PyDict_New();
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL118;
    }
    cpy_r_r166 = cpy_r_r167;
CPyL62: ;
    cpy_r_r168 = PyDict_New();
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    cpy_r_r169 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass1' */
    cpy_r_r170 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r171 = CPyDict_SetItem(cpy_r_r166, cpy_r_r170, cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    cpy_r_r173 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r174 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r175 = CPyDict_SetItem(cpy_r_r166, cpy_r_r174, cpy_r_r173);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    cpy_r_r177 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r178 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r179 = CPyDict_SetItem(cpy_r_r166, cpy_r_r178, cpy_r_r177);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    PyObject *cpy_r_r181[3] = {cpy_r_r169, cpy_r_r154, cpy_r_r166};
    cpy_r_r182 = (PyObject **)&cpy_r_r181;
    cpy_r_r183 = PyObject_Vectorcall(cpy_r_r156, cpy_r_r182, 3, 0);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    CPy_DECREF(cpy_r_r166);
    CPy_DECREF(cpy_r_r154);
    cpy_r_r184 = CPyStatic_main___globals;
    cpy_r_r185 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc_attr' */
    cpy_r_r186 = CPyDict_GetItem(cpy_r_r184, cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL120;
    }
    cpy_r_r187 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r188[1] = {cpy_r_r187};
    cpy_r_r189 = (PyObject **)&cpy_r_r188;
    cpy_r_r190 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('native_class',) */
    cpy_r_r191 = PyObject_Vectorcall(cpy_r_r186, cpy_r_r189, 0, cpy_r_r190);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL120;
    }
    PyObject *cpy_r_r192[1] = {cpy_r_r183};
    cpy_r_r193 = (PyObject **)&cpy_r_r192;
    cpy_r_r194 = PyObject_Vectorcall(cpy_r_r191, cpy_r_r193, 1, 0);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL120;
    }
    CPy_DECREF(cpy_r_r183);
    CPyType_main____HexBytesSubclass1 = (PyTypeObject *)cpy_r_r194;
    CPy_INCREF(CPyType_main____HexBytesSubclass1);
    cpy_r_r195 = CPyStatic_main___globals;
    cpy_r_r196 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass1' */
    cpy_r_r197 = PyDict_SetItem(cpy_r_r195, cpy_r_r196, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r199 = (PyObject *)CPyType_main____HexBytesSubclass1;
    cpy_r_r200 = CPyStatic_main___globals;
    cpy_r_r201 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r202 = CPyDict_GetItem(cpy_r_r200, cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r203 = PyTuple_Pack(1, cpy_r_r202);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r204 = (PyObject *)&PyType_Type;
    cpy_r_r205 = CPy_CalculateMetaclass(cpy_r_r204, cpy_r_r203);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL121;
    }
    cpy_r_r206 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r207 = PyObject_HasAttr(cpy_r_r205, cpy_r_r206);
    if (!cpy_r_r207) goto CPyL79;
    cpy_r_r208 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass2' */
    cpy_r_r209 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r210 = CPyObject_GetAttr(cpy_r_r205, cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL121;
    }
    PyObject *cpy_r_r211[2] = {cpy_r_r208, cpy_r_r203};
    cpy_r_r212 = (PyObject **)&cpy_r_r211;
    cpy_r_r213 = PyObject_Vectorcall(cpy_r_r210, cpy_r_r212, 2, 0);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL121;
    }
    if (likely(PyDict_Check(cpy_r_r213)))
        cpy_r_r214 = cpy_r_r213;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 119, CPyStatic_main___globals, "dict", cpy_r_r213);
        goto CPyL121;
    }
    cpy_r_r215 = cpy_r_r214;
    goto CPyL81;
CPyL79: ;
    cpy_r_r216 = PyDict_New();
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL121;
    }
    cpy_r_r215 = cpy_r_r216;
CPyL81: ;
    cpy_r_r217 = PyDict_New();
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL122;
    }
    cpy_r_r218 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass2' */
    cpy_r_r219 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r220 = CPyDict_SetItem(cpy_r_r215, cpy_r_r219, cpy_r_r217);
    CPy_DECREF(cpy_r_r217);
    cpy_r_r221 = cpy_r_r220 >= 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL122;
    }
    cpy_r_r222 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r223 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r224 = CPyDict_SetItem(cpy_r_r215, cpy_r_r223, cpy_r_r222);
    cpy_r_r225 = cpy_r_r224 >= 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL122;
    }
    cpy_r_r226 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r227 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r228 = CPyDict_SetItem(cpy_r_r215, cpy_r_r227, cpy_r_r226);
    cpy_r_r229 = cpy_r_r228 >= 0;
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL122;
    }
    PyObject *cpy_r_r230[3] = {cpy_r_r218, cpy_r_r203, cpy_r_r215};
    cpy_r_r231 = (PyObject **)&cpy_r_r230;
    cpy_r_r232 = PyObject_Vectorcall(cpy_r_r205, cpy_r_r231, 3, 0);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL122;
    }
    CPy_DECREF(cpy_r_r215);
    CPy_DECREF(cpy_r_r203);
    cpy_r_r233 = CPyStatic_main___globals;
    cpy_r_r234 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc_attr' */
    cpy_r_r235 = CPyDict_GetItem(cpy_r_r233, cpy_r_r234);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL123;
    }
    cpy_r_r236 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r237[1] = {cpy_r_r236};
    cpy_r_r238 = (PyObject **)&cpy_r_r237;
    cpy_r_r239 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('native_class',) */
    cpy_r_r240 = PyObject_Vectorcall(cpy_r_r235, cpy_r_r238, 0, cpy_r_r239);
    CPy_DECREF(cpy_r_r235);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL123;
    }
    PyObject *cpy_r_r241[1] = {cpy_r_r232};
    cpy_r_r242 = (PyObject **)&cpy_r_r241;
    cpy_r_r243 = PyObject_Vectorcall(cpy_r_r240, cpy_r_r242, 1, 0);
    CPy_DECREF(cpy_r_r240);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL123;
    }
    CPy_DECREF(cpy_r_r232);
    CPyType_main____HexBytesSubclass2 = (PyTypeObject *)cpy_r_r243;
    CPy_INCREF(CPyType_main____HexBytesSubclass2);
    cpy_r_r244 = CPyStatic_main___globals;
    cpy_r_r245 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass2' */
    cpy_r_r246 = PyDict_SetItem(cpy_r_r244, cpy_r_r245, cpy_r_r243);
    CPy_DECREF(cpy_r_r243);
    cpy_r_r247 = cpy_r_r246 >= 0;
    if (unlikely(!cpy_r_r247)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r248 = (PyObject *)CPyType_main____HexBytesSubclass2;
    cpy_r_r249 = CPyStatic_main___globals;
    cpy_r_r250 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r251 = CPyDict_GetItem(cpy_r_r249, cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r252 = PyTuple_Pack(1, cpy_r_r251);
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r253 = (PyObject *)&PyType_Type;
    cpy_r_r254 = CPy_CalculateMetaclass(cpy_r_r253, cpy_r_r252);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL124;
    }
    cpy_r_r255 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r256 = PyObject_HasAttr(cpy_r_r254, cpy_r_r255);
    if (!cpy_r_r256) goto CPyL98;
    cpy_r_r257 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass3' */
    cpy_r_r258 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r259 = CPyObject_GetAttr(cpy_r_r254, cpy_r_r258);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL124;
    }
    PyObject *cpy_r_r260[2] = {cpy_r_r257, cpy_r_r252};
    cpy_r_r261 = (PyObject **)&cpy_r_r260;
    cpy_r_r262 = PyObject_Vectorcall(cpy_r_r259, cpy_r_r261, 2, 0);
    CPy_DECREF(cpy_r_r259);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL124;
    }
    if (likely(PyDict_Check(cpy_r_r262)))
        cpy_r_r263 = cpy_r_r262;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 121, CPyStatic_main___globals, "dict", cpy_r_r262);
        goto CPyL124;
    }
    cpy_r_r264 = cpy_r_r263;
    goto CPyL100;
CPyL98: ;
    cpy_r_r265 = PyDict_New();
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL124;
    }
    cpy_r_r264 = cpy_r_r265;
CPyL100: ;
    cpy_r_r266 = PyDict_New();
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL125;
    }
    cpy_r_r267 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass3' */
    cpy_r_r268 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r269 = CPyDict_SetItem(cpy_r_r264, cpy_r_r268, cpy_r_r266);
    CPy_DECREF(cpy_r_r266);
    cpy_r_r270 = cpy_r_r269 >= 0;
    if (unlikely(!cpy_r_r270)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL125;
    }
    cpy_r_r271 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r272 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r273 = CPyDict_SetItem(cpy_r_r264, cpy_r_r272, cpy_r_r271);
    cpy_r_r274 = cpy_r_r273 >= 0;
    if (unlikely(!cpy_r_r274)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL125;
    }
    cpy_r_r275 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r276 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r277 = CPyDict_SetItem(cpy_r_r264, cpy_r_r276, cpy_r_r275);
    cpy_r_r278 = cpy_r_r277 >= 0;
    if (unlikely(!cpy_r_r278)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL125;
    }
    PyObject *cpy_r_r279[3] = {cpy_r_r267, cpy_r_r252, cpy_r_r264};
    cpy_r_r280 = (PyObject **)&cpy_r_r279;
    cpy_r_r281 = PyObject_Vectorcall(cpy_r_r254, cpy_r_r280, 3, 0);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL125;
    }
    CPy_DECREF(cpy_r_r264);
    CPy_DECREF(cpy_r_r252);
    cpy_r_r282 = CPyStatic_main___globals;
    cpy_r_r283 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc_attr' */
    cpy_r_r284 = CPyDict_GetItem(cpy_r_r282, cpy_r_r283);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL126;
    }
    cpy_r_r285 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r286[1] = {cpy_r_r285};
    cpy_r_r287 = (PyObject **)&cpy_r_r286;
    cpy_r_r288 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('native_class',) */
    cpy_r_r289 = PyObject_Vectorcall(cpy_r_r284, cpy_r_r287, 0, cpy_r_r288);
    CPy_DECREF(cpy_r_r284);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL126;
    }
    PyObject *cpy_r_r290[1] = {cpy_r_r281};
    cpy_r_r291 = (PyObject **)&cpy_r_r290;
    cpy_r_r292 = PyObject_Vectorcall(cpy_r_r289, cpy_r_r291, 1, 0);
    CPy_DECREF(cpy_r_r289);
    if (unlikely(cpy_r_r292 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL126;
    }
    CPy_DECREF(cpy_r_r281);
    CPyType_main____HexBytesSubclass3 = (PyTypeObject *)cpy_r_r292;
    CPy_INCREF(CPyType_main____HexBytesSubclass3);
    cpy_r_r293 = CPyStatic_main___globals;
    cpy_r_r294 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass3' */
    cpy_r_r295 = PyDict_SetItem(cpy_r_r293, cpy_r_r294, cpy_r_r292);
    CPy_DECREF(cpy_r_r292);
    cpy_r_r296 = cpy_r_r295 >= 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r297 = (PyObject *)CPyType_main____HexBytesSubclass3;
    return 1;
CPyL110: ;
    cpy_r_r298 = 2;
    return cpy_r_r298;
CPyL111: ;
    CPy_DECREF(cpy_r_r48);
    goto CPyL14;
CPyL112: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL110;
CPyL113: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL110;
CPyL114: ;
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r89);
    goto CPyL110;
CPyL115: ;
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r91);
    goto CPyL110;
CPyL116: ;
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r92);
    goto CPyL110;
CPyL117: ;
    CPy_DecRef(cpy_r_r132);
    goto CPyL110;
CPyL118: ;
    CPy_DecRef(cpy_r_r154);
    goto CPyL110;
CPyL119: ;
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r166);
    goto CPyL110;
CPyL120: ;
    CPy_DecRef(cpy_r_r183);
    goto CPyL110;
CPyL121: ;
    CPy_DecRef(cpy_r_r203);
    goto CPyL110;
CPyL122: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r215);
    goto CPyL110;
CPyL123: ;
    CPy_DecRef(cpy_r_r232);
    goto CPyL110;
CPyL124: ;
    CPy_DecRef(cpy_r_r252);
    goto CPyL110;
CPyL125: ;
    CPy_DecRef(cpy_r_r252);
    CPy_DecRef(cpy_r_r264);
    goto CPyL110;
CPyL126: ;
    CPy_DecRef(cpy_r_r281);
    goto CPyL110;
}
            
            int CPyGlobalsInit(void)
            {
                static int is_initialized = 0;
                if (is_initialized) return 0;
                
                CPy_Init();
                CPyModule_faster_hexbytes = Py_None;
                CPyModule_builtins = Py_None;
                CPyModule_importlib___metadata = Py_None;
                CPyModule_faster_hexbytes___main = Py_None;
                CPyModule_faster_hexbytes____utils = Py_None;
                CPyModule_builtins = Py_None;
                CPyModule_binascii = Py_None;
                CPyModule_typing = Py_None;
                CPyModule_faster_hexbytes___main = Py_None;
                CPyModule_builtins = Py_None;
                CPyModule_typing = Py_None;
                CPyModule_hexbytes___main = Py_None;
                CPyModule_librt___strings = Py_None;
                CPyModule_mypy_extensions = Py_None;
                CPyModule_typing_extensions = Py_None;
                CPyModule_faster_hexbytes____utils = Py_None;
                if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
                    return -1;
                }
                is_initialized = 1;
                return 0;
            }
            
            PyObject *CPyStatics[DIFFCHECK_PLACEHOLDER];
            const char * const CPyLit_Str[] = {
    "\005\bbuiltins\aversion\t__version\022importlib.metadata\026faster_hexbytes__mypyc",
    "\003\b__file__ .cpython-314-x86_64-linux-gnu.so\024faster_hexbytes.main",
    "\004\bHexBytes\a__all__\bhexbytes\v__version__",
    "\005 Cannot convert negative integer \t to bytes\nValueError\nmemoryview\000",
    "\t\017Cannot convert \a{!r:{}}\006format\t of type \005{:{}}\tTypeError\0020x\0020X\0010",
    "\002\022UnicodeDecodeError\vhex string ",
    "\002( may only contain [0-9a-fA-F] characters\bbinascii",
    "\006\031faster_hexbytes/_utils.py\b<module>\005Final\005Union\006typing\tunhexlify",
    "\b\v__getitem__\005slice\fHexBytes(\'0x\003hex\002\')\rTYPE_CHECKING\bCallable\004cast",
    "\004\boverload\rhexbytes.main\027faster_hexbytes/main.py\fStringWriter",
    "\005\rlibrt.strings\nmypyc_attr\017mypy_extensions\004Self\021typing_extensions",
    "\005\026faster_hexbytes._utils\bto_bytes\tBytesLike\a__new__\n_bytes_new",
    "\005\v__prepare__\fstaticmethod\b__repr__\tto_0x_hex\n__reduce__",
    "\004\017__annotations__\026mypyc filler docstring\a__doc__\n__module__",
    "\004\fnative_class\aacyclic\034allow_interpreted_subclasses\022_HexBytesSubclass1",
    "\002\022_HexBytesSubclass2\022_HexBytesSubclass3",
    "",
};
            const char * const CPyLit_Bytes[] = {
    "\003\001\001\001\000\000",
    "",
};
            const char * const CPyLit_Int[] = {
    "",
};
            const double CPyLit_Float[] = {0};
            const double CPyLit_Complex[] = {0};
            const int CPyLit_Tuple[] = {
    15, 1, 4, 1, 5, 1, 11, 3, 32, 32, 32, 1, 82, 2, 35, 36, 6, 44, 45,
    35, 36, 46, 47, 3, 48, 48, 13, 1, 86, 1, 50, 1, 52, 1, 54, 1, 57, 3,
    70, 71, 72, 1, 70
};
            const int CPyLit_FrozenSet[] = {0};
            CPyModule *CPyModule_faster_hexbytes__internal = NULL;
            CPyModule *CPyModule_faster_hexbytes;
            PyObject *CPyStatic_faster_hexbytes___globals;
            CPyModule *CPyModule_builtins;
            CPyModule *CPyModule_importlib___metadata;
            CPyModule *CPyModule_faster_hexbytes___main__internal = NULL;
            CPyModule *CPyModule_faster_hexbytes___main;
            int CPyExec_faster_hexbytes(PyObject *module);
            PyObject *CPyInit_faster_hexbytes(void);
            PyObject *CPyInitOnly_faster_hexbytes(void);
            CPyModule *CPyModule_faster_hexbytes____utils__internal = NULL;
            CPyModule *CPyModule_faster_hexbytes____utils;
            PyObject *CPyStatic__utils___globals;
            CPyModule *CPyModule_binascii;
            CPyModule *CPyModule_typing;
            int CPyExec_faster_hexbytes____utils(PyObject *module);
            PyObject *CPyInit_faster_hexbytes____utils(void);
            PyObject *CPyInitOnly_faster_hexbytes____utils(void);
            PyObject *CPyStatic_main___globals;
            CPyModule *CPyModule_hexbytes___main;
            CPyModule *CPyModule_librt___strings;
            CPyModule *CPyModule_mypy_extensions;
            CPyModule *CPyModule_typing_extensions;
            int CPyExec_faster_hexbytes___main(PyObject *module);
            PyObject *CPyInit_faster_hexbytes___main(void);
            PyObject *CPyInitOnly_faster_hexbytes___main(void);
            char CPyDef_faster_hexbytes_____top_level__(void);
            PyObject *CPyStatic__utils___unhexlify = NULL;
            PyObject *CPyDef__utils___to_bytes(PyObject *cpy_r_val);
            PyObject *CPyPy__utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef__utils___hexstr_to_bytes(PyObject *cpy_r_hexstr);
            PyObject *CPyPy__utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            char CPyDef__utils_____top_level__(void);
            PyObject *CPyStatic_main____bytes_new = NULL;
            PyTypeObject *CPyType_main___HexBytes;
            PyTypeObject *CPyType_main____HexBytesSubclass1;
            PyTypeObject *CPyType_main____HexBytesSubclass2;
            PyTypeObject *CPyType_main____HexBytesSubclass3;
            PyTypeObject *CPyType_main_____new___3_HexBytes_obj;
            PyObject *CPyDef_main_____new___3_HexBytes_obj(void);
            CPyThreadLocal faster_hexbytes___main_____new___3_HexBytes_objObject *main_____new___3_HexBytes_obj_free_instance;
            PyTypeObject *CPyType_main_____getitem___3_HexBytes_obj;
            PyObject *CPyDef_main_____getitem___3_HexBytes_obj(void);
            CPyThreadLocal faster_hexbytes___main_____getitem___3_HexBytes_objObject *main_____getitem___3_HexBytes_obj_free_instance;
            PyTypeObject *CPyType_main_____repr___3_HexBytes_obj;
            PyObject *CPyDef_main_____repr___3_HexBytes_obj(void);
            CPyThreadLocal faster_hexbytes___main_____repr___3_HexBytes_objObject *main_____repr___3_HexBytes_obj_free_instance;
            PyTypeObject *CPyType_main___to_0x_hex_HexBytes_obj;
            PyObject *CPyDef_main___to_0x_hex_HexBytes_obj(void);
            CPyThreadLocal faster_hexbytes___main___to_0x_hex_HexBytes_objObject *main___to_0x_hex_HexBytes_obj_free_instance;
            PyTypeObject *CPyType_main_____reduce___3_HexBytes_obj;
            PyObject *CPyDef_main_____reduce___3_HexBytes_obj(void);
            CPyThreadLocal faster_hexbytes___main_____reduce___3_HexBytes_objObject *main_____reduce___3_HexBytes_obj_free_instance;
            PyObject *CPyDef_main_____new___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
            PyObject *CPyPy_main_____new___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef_main_____new___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_val);
            PyObject *CPyPy_main_____new___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
            PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key);
            PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef_main_____repr___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
            PyObject *CPyPy_main_____repr___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef_main_____repr___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
            PyObject *CPyPy_main_____repr___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
            PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
            PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            PyObject *CPyDef_main_____reduce___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
            PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            tuple_T2OT2OO CPyDef_main_____reduce___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
            PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
            char CPyDef_main_____top_level__(void);
            
            static int exec_faster_hexbytes__mypyc(PyObject *module)
            {
                int res;
                PyObject *capsule;
                PyObject *tmp;
                
                extern PyObject *CPyInit_faster_hexbytes(void);
                capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes, "faster_hexbytes__mypyc.init_faster_hexbytes", NULL);
                if (!capsule) {
                    goto fail;
                }
                res = PyObject_SetAttrString(module, "init_faster_hexbytes", capsule);
                Py_DECREF(capsule);
                if (res < 0) {
                    goto fail;
                }
                
                extern PyObject *CPyInit_faster_hexbytes____utils(void);
                capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes____utils, "faster_hexbytes__mypyc.init_faster_hexbytes____utils", NULL);
                if (!capsule) {
                    goto fail;
                }
                res = PyObject_SetAttrString(module, "init_faster_hexbytes____utils", capsule);
                Py_DECREF(capsule);
                if (res < 0) {
                    goto fail;
                }
                
                extern PyObject *CPyInit_faster_hexbytes___main(void);
                capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes___main, "faster_hexbytes__mypyc.init_faster_hexbytes___main", NULL);
                if (!capsule) {
                    goto fail;
                }
                res = PyObject_SetAttrString(module, "init_faster_hexbytes___main", capsule);
                Py_DECREF(capsule);
                if (res < 0) {
                    goto fail;
                }
                
                return 0;
                fail:
                return -1;
            }
            static PyModuleDef module_def_faster_hexbytes__mypyc = {
                PyModuleDef_HEAD_INIT,
                .m_name = "faster_hexbytes__mypyc",
                .m_doc = NULL,
                .m_size = -1,
                .m_methods = NULL,
            };
            PyMODINIT_FUNC PyInit_faster_hexbytes__mypyc(void) {
                static PyObject *module = NULL;
                if (module) {
                    Py_INCREF(module);
                    return module;
                }
                module = PyModule_Create(&module_def_faster_hexbytes__mypyc);
                if (!module) {
                    return NULL;
                }
                if (exec_faster_hexbytes__mypyc(module) < 0) {
                    Py_DECREF(module);
                    module = NULL;
                    return NULL;
                }
                return module;
            }
