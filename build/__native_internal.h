#ifndef MYPYC_LIBRT_INTERNAL_H
#define MYPYC_LIBRT_INTERNAL_H
#include <Python.h>
#include <CPy.h>
#include "__native.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[48];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_settings__internal;
extern CPyModule *CPyModule_settings;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_dataclasses;
extern int CPyExec_settings(PyObject *module);
extern PyTypeObject *CPyType_ConfigPath;
extern PyObject *CPyDef_ConfigPath(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
extern PyTypeObject *CPyType_AppConfig;
extern PyObject *CPyDef_AppConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
extern PyTypeObject *CPyType_DataSource;
extern PyObject *CPyDef_DataSource(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
extern PyTypeObject *CPyType_MetaConfig;
extern PyObject *CPyDef_MetaConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
extern PyTypeObject *CPyType_Secrets;
extern PyObject *CPyDef_Secrets(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
extern PyTypeObject *CPyType_LoggerConfig;
extern PyObject *CPyDef_LoggerConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
extern char CPyDef___top_level__(void);
#endif
