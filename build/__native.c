#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "function_wrapper.c"
#include "__native.h"
#include "__native_internal.h"

PyObject *CPyDef___mypyc__ConfigPath_setup(PyObject *cpy_r_type);
PyObject *CPyDef_ConfigPath(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
ConfigPath_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_ConfigPath) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__ConfigPath_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
ConfigPath_traverse(settings___ConfigPathObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_config_path);
    return 0;
}

static int
ConfigPath_clear(settings___ConfigPathObject *self)
{
    Py_CLEAR(self->_config_path);
    return 0;
}

static void
ConfigPath_dealloc(settings___ConfigPathObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, ConfigPath_dealloc)
    ConfigPath_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
    done: ;
}

static CPyVTableItem ConfigPath_vtable[1];
static bool
CPyDef_ConfigPath_trait_vtable_setup(void)
{
    CPyVTableItem ConfigPath_vtable_scratch[] = {
        NULL
    };
    memcpy(ConfigPath_vtable, ConfigPath_vtable_scratch, sizeof(ConfigPath_vtable));
    return 1;
}

static bool
CPyDef_ConfigPath_coroutine_setup(PyObject *type)
{
    return 1;
}

static PyObject *
ConfigPath_get_config_path(settings___ConfigPathObject *self, void *closure);
static int
ConfigPath_set_config_path(settings___ConfigPathObject *self, PyObject *value, void *closure);

static PyGetSetDef ConfigPath_getseters[] = {
    {"config_path",
     (getter)ConfigPath_get_config_path, (setter)ConfigPath_set_config_path,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef ConfigPath_methods[] = {
    {"__internal_mypyc_setup", (PyCFunction)CPyDef___mypyc__ConfigPath_setup, METH_O, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ConfigPath_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ConfigPath",
    .tp_new = ConfigPath_new,
    .tp_dealloc = (destructor)ConfigPath_dealloc,
    .tp_traverse = (traverseproc)ConfigPath_traverse,
    .tp_clear = (inquiry)ConfigPath_clear,
    .tp_getset = ConfigPath_getseters,
    .tp_methods = ConfigPath_methods,
    .tp_basicsize = sizeof(settings___ConfigPathObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("ConfigPath()\n--\n\n"),
};
static PyTypeObject *CPyType_ConfigPath_template = &CPyType_ConfigPath_template_;

PyObject *CPyDef___mypyc__ConfigPath_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    settings___ConfigPathObject *self;
    self = (settings___ConfigPathObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = ConfigPath_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_ConfigPath(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = CPyDef___mypyc__ConfigPath_setup((PyObject *)CPyType_ConfigPath);
    if (self == NULL)
        return NULL;
    int res = CPyType_ConfigPath->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
ConfigPath_get_config_path(settings___ConfigPathObject *self, void *closure)
{
    if (unlikely(self->_config_path == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'config_path' of 'ConfigPath' undefined");
        return NULL;
    }
    CPy_INCREF(self->_config_path);
    PyObject *retval = self->_config_path;
    return retval;
}

static int
ConfigPath_set_config_path(settings___ConfigPathObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConfigPath' object attribute 'config_path' cannot be deleted");
        return -1;
    }
    if (self->_config_path != NULL) {
        CPy_DECREF(self->_config_path);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_config_path = tmp;
    return 0;
}

PyObject *CPyDef___mypyc__AppConfig_setup(PyObject *cpy_r_type);
PyObject *CPyDef_AppConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
AppConfig_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_AppConfig) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__AppConfig_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
AppConfig_traverse(settings___AppConfigObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_app_name);
    Py_VISIT(self->_environement);
    Py_VISIT(self->_host);
    if (CPyTagged_CheckLong(self->_port)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_port));
    }
    return 0;
}

static int
AppConfig_clear(settings___AppConfigObject *self)
{
    Py_CLEAR(self->_app_name);
    Py_CLEAR(self->_environement);
    Py_CLEAR(self->_host);
    if (CPyTagged_CheckLong(self->_port)) {
        CPyTagged __tmp = self->_port;
        self->_port = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
AppConfig_dealloc(settings___AppConfigObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, AppConfig_dealloc)
    AppConfig_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
    done: ;
}

static CPyVTableItem AppConfig_vtable[1];
static bool
CPyDef_AppConfig_trait_vtable_setup(void)
{
    CPyVTableItem AppConfig_vtable_scratch[] = {
        NULL
    };
    memcpy(AppConfig_vtable, AppConfig_vtable_scratch, sizeof(AppConfig_vtable));
    return 1;
}

static bool
CPyDef_AppConfig_coroutine_setup(PyObject *type)
{
    return 1;
}

static PyObject *
AppConfig_get_app_name(settings___AppConfigObject *self, void *closure);
static int
AppConfig_set_app_name(settings___AppConfigObject *self, PyObject *value, void *closure);
static PyObject *
AppConfig_get_environement(settings___AppConfigObject *self, void *closure);
static int
AppConfig_set_environement(settings___AppConfigObject *self, PyObject *value, void *closure);
static PyObject *
AppConfig_get_host(settings___AppConfigObject *self, void *closure);
static int
AppConfig_set_host(settings___AppConfigObject *self, PyObject *value, void *closure);
static PyObject *
AppConfig_get_port(settings___AppConfigObject *self, void *closure);
static int
AppConfig_set_port(settings___AppConfigObject *self, PyObject *value, void *closure);

static PyGetSetDef AppConfig_getseters[] = {
    {"app_name",
     (getter)AppConfig_get_app_name, (setter)AppConfig_set_app_name,
     NULL, NULL},
    {"environement",
     (getter)AppConfig_get_environement, (setter)AppConfig_set_environement,
     NULL, NULL},
    {"host",
     (getter)AppConfig_get_host, (setter)AppConfig_set_host,
     NULL, NULL},
    {"port",
     (getter)AppConfig_get_port, (setter)AppConfig_set_port,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef AppConfig_methods[] = {
    {"__internal_mypyc_setup", (PyCFunction)CPyDef___mypyc__AppConfig_setup, METH_O, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_AppConfig_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AppConfig",
    .tp_new = AppConfig_new,
    .tp_dealloc = (destructor)AppConfig_dealloc,
    .tp_traverse = (traverseproc)AppConfig_traverse,
    .tp_clear = (inquiry)AppConfig_clear,
    .tp_getset = AppConfig_getseters,
    .tp_methods = AppConfig_methods,
    .tp_basicsize = sizeof(settings___AppConfigObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("AppConfig()\n--\n\n"),
};
static PyTypeObject *CPyType_AppConfig_template = &CPyType_AppConfig_template_;

PyObject *CPyDef___mypyc__AppConfig_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    settings___AppConfigObject *self;
    self = (settings___AppConfigObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = AppConfig_vtable;
    self->_port = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_AppConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = CPyDef___mypyc__AppConfig_setup((PyObject *)CPyType_AppConfig);
    if (self == NULL)
        return NULL;
    int res = CPyType_AppConfig->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
AppConfig_get_app_name(settings___AppConfigObject *self, void *closure)
{
    if (unlikely(self->_app_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'app_name' of 'AppConfig' undefined");
        return NULL;
    }
    CPy_INCREF(self->_app_name);
    PyObject *retval = self->_app_name;
    return retval;
}

static int
AppConfig_set_app_name(settings___AppConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AppConfig' object attribute 'app_name' cannot be deleted");
        return -1;
    }
    if (self->_app_name != NULL) {
        CPy_DECREF(self->_app_name);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_app_name = tmp;
    return 0;
}

static PyObject *
AppConfig_get_environement(settings___AppConfigObject *self, void *closure)
{
    if (unlikely(self->_environement == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'environement' of 'AppConfig' undefined");
        return NULL;
    }
    CPy_INCREF(self->_environement);
    PyObject *retval = self->_environement;
    return retval;
}

static int
AppConfig_set_environement(settings___AppConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AppConfig' object attribute 'environement' cannot be deleted");
        return -1;
    }
    if (self->_environement != NULL) {
        CPy_DECREF(self->_environement);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_environement = tmp;
    return 0;
}

static PyObject *
AppConfig_get_host(settings___AppConfigObject *self, void *closure)
{
    if (unlikely(self->_host == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'host' of 'AppConfig' undefined");
        return NULL;
    }
    CPy_INCREF(self->_host);
    PyObject *retval = self->_host;
    return retval;
}

static int
AppConfig_set_host(settings___AppConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AppConfig' object attribute 'host' cannot be deleted");
        return -1;
    }
    if (self->_host != NULL) {
        CPy_DECREF(self->_host);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_host = tmp;
    return 0;
}

static PyObject *
AppConfig_get_port(settings___AppConfigObject *self, void *closure)
{
    if (unlikely(self->_port == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'port' of 'AppConfig' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_port);
    PyObject *retval = CPyTagged_StealAsObject(self->_port);
    return retval;
}

static int
AppConfig_set_port(settings___AppConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AppConfig' object attribute 'port' cannot be deleted");
        return -1;
    }
    if (self->_port != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_port);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_port = tmp;
    return 0;
}

PyObject *CPyDef___mypyc__DataSource_setup(PyObject *cpy_r_type);
PyObject *CPyDef_DataSource(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
DataSource_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_DataSource) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__DataSource_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
DataSource_traverse(settings___DataSourceObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_static_source_url);
    Py_VISIT(self->_realtime_trip_updates_url);
    return 0;
}

static int
DataSource_clear(settings___DataSourceObject *self)
{
    Py_CLEAR(self->_static_source_url);
    Py_CLEAR(self->_realtime_trip_updates_url);
    return 0;
}

static void
DataSource_dealloc(settings___DataSourceObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, DataSource_dealloc)
    DataSource_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
    done: ;
}

static CPyVTableItem DataSource_vtable[1];
static bool
CPyDef_DataSource_trait_vtable_setup(void)
{
    CPyVTableItem DataSource_vtable_scratch[] = {
        NULL
    };
    memcpy(DataSource_vtable, DataSource_vtable_scratch, sizeof(DataSource_vtable));
    return 1;
}

static bool
CPyDef_DataSource_coroutine_setup(PyObject *type)
{
    return 1;
}

static PyObject *
DataSource_get_static_source_url(settings___DataSourceObject *self, void *closure);
static int
DataSource_set_static_source_url(settings___DataSourceObject *self, PyObject *value, void *closure);
static PyObject *
DataSource_get_realtime_trip_updates_url(settings___DataSourceObject *self, void *closure);
static int
DataSource_set_realtime_trip_updates_url(settings___DataSourceObject *self, PyObject *value, void *closure);

static PyGetSetDef DataSource_getseters[] = {
    {"static_source_url",
     (getter)DataSource_get_static_source_url, (setter)DataSource_set_static_source_url,
     NULL, NULL},
    {"realtime_trip_updates_url",
     (getter)DataSource_get_realtime_trip_updates_url, (setter)DataSource_set_realtime_trip_updates_url,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef DataSource_methods[] = {
    {"__internal_mypyc_setup", (PyCFunction)CPyDef___mypyc__DataSource_setup, METH_O, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_DataSource_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DataSource",
    .tp_new = DataSource_new,
    .tp_dealloc = (destructor)DataSource_dealloc,
    .tp_traverse = (traverseproc)DataSource_traverse,
    .tp_clear = (inquiry)DataSource_clear,
    .tp_getset = DataSource_getseters,
    .tp_methods = DataSource_methods,
    .tp_basicsize = sizeof(settings___DataSourceObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("DataSource()\n--\n\n"),
};
static PyTypeObject *CPyType_DataSource_template = &CPyType_DataSource_template_;

PyObject *CPyDef___mypyc__DataSource_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    settings___DataSourceObject *self;
    self = (settings___DataSourceObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = DataSource_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_DataSource(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = CPyDef___mypyc__DataSource_setup((PyObject *)CPyType_DataSource);
    if (self == NULL)
        return NULL;
    int res = CPyType_DataSource->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
DataSource_get_static_source_url(settings___DataSourceObject *self, void *closure)
{
    if (unlikely(self->_static_source_url == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'static_source_url' of 'DataSource' undefined");
        return NULL;
    }
    CPy_INCREF(self->_static_source_url);
    PyObject *retval = self->_static_source_url;
    return retval;
}

static int
DataSource_set_static_source_url(settings___DataSourceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataSource' object attribute 'static_source_url' cannot be deleted");
        return -1;
    }
    if (self->_static_source_url != NULL) {
        CPy_DECREF(self->_static_source_url);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_static_source_url = tmp;
    return 0;
}

static PyObject *
DataSource_get_realtime_trip_updates_url(settings___DataSourceObject *self, void *closure)
{
    if (unlikely(self->_realtime_trip_updates_url == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'realtime_trip_updates_url' of 'DataSource' undefined");
        return NULL;
    }
    CPy_INCREF(self->_realtime_trip_updates_url);
    PyObject *retval = self->_realtime_trip_updates_url;
    return retval;
}

static int
DataSource_set_realtime_trip_updates_url(settings___DataSourceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataSource' object attribute 'realtime_trip_updates_url' cannot be deleted");
        return -1;
    }
    if (self->_realtime_trip_updates_url != NULL) {
        CPy_DECREF(self->_realtime_trip_updates_url);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_realtime_trip_updates_url = tmp;
    return 0;
}

PyObject *CPyDef___mypyc__MetaConfig_setup(PyObject *cpy_r_type);
PyObject *CPyDef_MetaConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
MetaConfig_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_MetaConfig) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__MetaConfig_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
MetaConfig_traverse(settings___MetaConfigObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_static_refresh_interval_hrs)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_static_refresh_interval_hrs));
    }
    if (CPyTagged_CheckLong(self->_static_request_timeout_secs)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_static_request_timeout_secs));
    }
    if (CPyTagged_CheckLong(self->_static_sync_check_interval_secs)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_static_sync_check_interval_secs));
    }
    if (CPyTagged_CheckLong(self->_realtime_poll_interval_secs)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_realtime_poll_interval_secs));
    }
    if (CPyTagged_CheckLong(self->_realtime_request_timeout_secs)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_realtime_request_timeout_secs));
    }
    if (CPyTagged_CheckLong(self->_sync_batch_size)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_sync_batch_size));
    }
    return 0;
}

static int
MetaConfig_clear(settings___MetaConfigObject *self)
{
    if (CPyTagged_CheckLong(self->_static_refresh_interval_hrs)) {
        CPyTagged __tmp = self->_static_refresh_interval_hrs;
        self->_static_refresh_interval_hrs = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_static_request_timeout_secs)) {
        CPyTagged __tmp = self->_static_request_timeout_secs;
        self->_static_request_timeout_secs = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_static_sync_check_interval_secs)) {
        CPyTagged __tmp = self->_static_sync_check_interval_secs;
        self->_static_sync_check_interval_secs = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_realtime_poll_interval_secs)) {
        CPyTagged __tmp = self->_realtime_poll_interval_secs;
        self->_realtime_poll_interval_secs = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_realtime_request_timeout_secs)) {
        CPyTagged __tmp = self->_realtime_request_timeout_secs;
        self->_realtime_request_timeout_secs = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_sync_batch_size)) {
        CPyTagged __tmp = self->_sync_batch_size;
        self->_sync_batch_size = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
MetaConfig_dealloc(settings___MetaConfigObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, MetaConfig_dealloc)
    MetaConfig_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
    done: ;
}

static CPyVTableItem MetaConfig_vtable[1];
static bool
CPyDef_MetaConfig_trait_vtable_setup(void)
{
    CPyVTableItem MetaConfig_vtable_scratch[] = {
        NULL
    };
    memcpy(MetaConfig_vtable, MetaConfig_vtable_scratch, sizeof(MetaConfig_vtable));
    return 1;
}

static bool
CPyDef_MetaConfig_coroutine_setup(PyObject *type)
{
    return 1;
}

static PyObject *
MetaConfig_get_static_refresh_interval_hrs(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_static_refresh_interval_hrs(settings___MetaConfigObject *self, PyObject *value, void *closure);
static PyObject *
MetaConfig_get_static_request_timeout_secs(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_static_request_timeout_secs(settings___MetaConfigObject *self, PyObject *value, void *closure);
static PyObject *
MetaConfig_get_static_sync_check_interval_secs(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_static_sync_check_interval_secs(settings___MetaConfigObject *self, PyObject *value, void *closure);
static PyObject *
MetaConfig_get_auto_download_static(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_auto_download_static(settings___MetaConfigObject *self, PyObject *value, void *closure);
static PyObject *
MetaConfig_get_realtime_poll_interval_secs(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_realtime_poll_interval_secs(settings___MetaConfigObject *self, PyObject *value, void *closure);
static PyObject *
MetaConfig_get_realtime_request_timeout_secs(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_realtime_request_timeout_secs(settings___MetaConfigObject *self, PyObject *value, void *closure);
static PyObject *
MetaConfig_get_bootstrap_schema(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_bootstrap_schema(settings___MetaConfigObject *self, PyObject *value, void *closure);
static PyObject *
MetaConfig_get_sync_batch_size(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_sync_batch_size(settings___MetaConfigObject *self, PyObject *value, void *closure);
static PyObject *
MetaConfig_get_auto_sync_start(settings___MetaConfigObject *self, void *closure);
static int
MetaConfig_set_auto_sync_start(settings___MetaConfigObject *self, PyObject *value, void *closure);

static PyGetSetDef MetaConfig_getseters[] = {
    {"static_refresh_interval_hrs",
     (getter)MetaConfig_get_static_refresh_interval_hrs, (setter)MetaConfig_set_static_refresh_interval_hrs,
     NULL, NULL},
    {"static_request_timeout_secs",
     (getter)MetaConfig_get_static_request_timeout_secs, (setter)MetaConfig_set_static_request_timeout_secs,
     NULL, NULL},
    {"static_sync_check_interval_secs",
     (getter)MetaConfig_get_static_sync_check_interval_secs, (setter)MetaConfig_set_static_sync_check_interval_secs,
     NULL, NULL},
    {"auto_download_static",
     (getter)MetaConfig_get_auto_download_static, (setter)MetaConfig_set_auto_download_static,
     NULL, NULL},
    {"realtime_poll_interval_secs",
     (getter)MetaConfig_get_realtime_poll_interval_secs, (setter)MetaConfig_set_realtime_poll_interval_secs,
     NULL, NULL},
    {"realtime_request_timeout_secs",
     (getter)MetaConfig_get_realtime_request_timeout_secs, (setter)MetaConfig_set_realtime_request_timeout_secs,
     NULL, NULL},
    {"bootstrap_schema",
     (getter)MetaConfig_get_bootstrap_schema, (setter)MetaConfig_set_bootstrap_schema,
     NULL, NULL},
    {"sync_batch_size",
     (getter)MetaConfig_get_sync_batch_size, (setter)MetaConfig_set_sync_batch_size,
     NULL, NULL},
    {"auto_sync_start",
     (getter)MetaConfig_get_auto_sync_start, (setter)MetaConfig_set_auto_sync_start,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef MetaConfig_methods[] = {
    {"__internal_mypyc_setup", (PyCFunction)CPyDef___mypyc__MetaConfig_setup, METH_O, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_MetaConfig_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MetaConfig",
    .tp_new = MetaConfig_new,
    .tp_dealloc = (destructor)MetaConfig_dealloc,
    .tp_traverse = (traverseproc)MetaConfig_traverse,
    .tp_clear = (inquiry)MetaConfig_clear,
    .tp_getset = MetaConfig_getseters,
    .tp_methods = MetaConfig_methods,
    .tp_basicsize = sizeof(settings___MetaConfigObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("MetaConfig()\n--\n\n"),
};
static PyTypeObject *CPyType_MetaConfig_template = &CPyType_MetaConfig_template_;

PyObject *CPyDef___mypyc__MetaConfig_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    settings___MetaConfigObject *self;
    self = (settings___MetaConfigObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = MetaConfig_vtable;
    self->_static_refresh_interval_hrs = CPY_INT_TAG;
    self->_static_request_timeout_secs = CPY_INT_TAG;
    self->_static_sync_check_interval_secs = CPY_INT_TAG;
    self->_auto_download_static = 2;
    self->_realtime_poll_interval_secs = CPY_INT_TAG;
    self->_realtime_request_timeout_secs = CPY_INT_TAG;
    self->_bootstrap_schema = 2;
    self->_sync_batch_size = CPY_INT_TAG;
    self->_auto_sync_start = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_MetaConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = CPyDef___mypyc__MetaConfig_setup((PyObject *)CPyType_MetaConfig);
    if (self == NULL)
        return NULL;
    int res = CPyType_MetaConfig->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
MetaConfig_get_static_refresh_interval_hrs(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_static_refresh_interval_hrs == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'static_refresh_interval_hrs' of 'MetaConfig' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_static_refresh_interval_hrs);
    PyObject *retval = CPyTagged_StealAsObject(self->_static_refresh_interval_hrs);
    return retval;
}

static int
MetaConfig_set_static_refresh_interval_hrs(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'static_refresh_interval_hrs' cannot be deleted");
        return -1;
    }
    if (self->_static_refresh_interval_hrs != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_static_refresh_interval_hrs);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_static_refresh_interval_hrs = tmp;
    return 0;
}

static PyObject *
MetaConfig_get_static_request_timeout_secs(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_static_request_timeout_secs == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'static_request_timeout_secs' of 'MetaConfig' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_static_request_timeout_secs);
    PyObject *retval = CPyTagged_StealAsObject(self->_static_request_timeout_secs);
    return retval;
}

static int
MetaConfig_set_static_request_timeout_secs(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'static_request_timeout_secs' cannot be deleted");
        return -1;
    }
    if (self->_static_request_timeout_secs != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_static_request_timeout_secs);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_static_request_timeout_secs = tmp;
    return 0;
}

static PyObject *
MetaConfig_get_static_sync_check_interval_secs(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_static_sync_check_interval_secs == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'static_sync_check_interval_secs' of 'MetaConfig' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_static_sync_check_interval_secs);
    PyObject *retval = CPyTagged_StealAsObject(self->_static_sync_check_interval_secs);
    return retval;
}

static int
MetaConfig_set_static_sync_check_interval_secs(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'static_sync_check_interval_secs' cannot be deleted");
        return -1;
    }
    if (self->_static_sync_check_interval_secs != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_static_sync_check_interval_secs);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_static_sync_check_interval_secs = tmp;
    return 0;
}

static PyObject *
MetaConfig_get_auto_download_static(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_auto_download_static == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'auto_download_static' of 'MetaConfig' undefined");
        return NULL;
    }
    PyObject *retval = self->_auto_download_static ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
MetaConfig_set_auto_download_static(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'auto_download_static' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_auto_download_static = tmp;
    return 0;
}

static PyObject *
MetaConfig_get_realtime_poll_interval_secs(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_realtime_poll_interval_secs == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'realtime_poll_interval_secs' of 'MetaConfig' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_realtime_poll_interval_secs);
    PyObject *retval = CPyTagged_StealAsObject(self->_realtime_poll_interval_secs);
    return retval;
}

static int
MetaConfig_set_realtime_poll_interval_secs(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'realtime_poll_interval_secs' cannot be deleted");
        return -1;
    }
    if (self->_realtime_poll_interval_secs != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_realtime_poll_interval_secs);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_realtime_poll_interval_secs = tmp;
    return 0;
}

static PyObject *
MetaConfig_get_realtime_request_timeout_secs(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_realtime_request_timeout_secs == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'realtime_request_timeout_secs' of 'MetaConfig' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_realtime_request_timeout_secs);
    PyObject *retval = CPyTagged_StealAsObject(self->_realtime_request_timeout_secs);
    return retval;
}

static int
MetaConfig_set_realtime_request_timeout_secs(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'realtime_request_timeout_secs' cannot be deleted");
        return -1;
    }
    if (self->_realtime_request_timeout_secs != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_realtime_request_timeout_secs);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_realtime_request_timeout_secs = tmp;
    return 0;
}

static PyObject *
MetaConfig_get_bootstrap_schema(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_bootstrap_schema == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'bootstrap_schema' of 'MetaConfig' undefined");
        return NULL;
    }
    PyObject *retval = self->_bootstrap_schema ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
MetaConfig_set_bootstrap_schema(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'bootstrap_schema' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_bootstrap_schema = tmp;
    return 0;
}

static PyObject *
MetaConfig_get_sync_batch_size(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_sync_batch_size == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'sync_batch_size' of 'MetaConfig' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_sync_batch_size);
    PyObject *retval = CPyTagged_StealAsObject(self->_sync_batch_size);
    return retval;
}

static int
MetaConfig_set_sync_batch_size(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'sync_batch_size' cannot be deleted");
        return -1;
    }
    if (self->_sync_batch_size != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_sync_batch_size);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_sync_batch_size = tmp;
    return 0;
}

static PyObject *
MetaConfig_get_auto_sync_start(settings___MetaConfigObject *self, void *closure)
{
    if (unlikely(self->_auto_sync_start == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'auto_sync_start' of 'MetaConfig' undefined");
        return NULL;
    }
    PyObject *retval = self->_auto_sync_start ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
MetaConfig_set_auto_sync_start(settings___MetaConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MetaConfig' object attribute 'auto_sync_start' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_auto_sync_start = tmp;
    return 0;
}

PyObject *CPyDef___mypyc__Secrets_setup(PyObject *cpy_r_type);
PyObject *CPyDef_Secrets(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
Secrets_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_Secrets) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__Secrets_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
Secrets_traverse(settings___SecretsObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_NTA_KEY_PRIMARY);
    Py_VISIT(self->_NTA_KEY_SECONDARY);
    return 0;
}

static int
Secrets_clear(settings___SecretsObject *self)
{
    Py_CLEAR(self->_NTA_KEY_PRIMARY);
    Py_CLEAR(self->_NTA_KEY_SECONDARY);
    return 0;
}

static void
Secrets_dealloc(settings___SecretsObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, Secrets_dealloc)
    Secrets_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
    done: ;
}

static CPyVTableItem Secrets_vtable[1];
static bool
CPyDef_Secrets_trait_vtable_setup(void)
{
    CPyVTableItem Secrets_vtable_scratch[] = {
        NULL
    };
    memcpy(Secrets_vtable, Secrets_vtable_scratch, sizeof(Secrets_vtable));
    return 1;
}

static bool
CPyDef_Secrets_coroutine_setup(PyObject *type)
{
    return 1;
}

static PyObject *
Secrets_get_NTA_KEY_PRIMARY(settings___SecretsObject *self, void *closure);
static int
Secrets_set_NTA_KEY_PRIMARY(settings___SecretsObject *self, PyObject *value, void *closure);
static PyObject *
Secrets_get_NTA_KEY_SECONDARY(settings___SecretsObject *self, void *closure);
static int
Secrets_set_NTA_KEY_SECONDARY(settings___SecretsObject *self, PyObject *value, void *closure);

static PyGetSetDef Secrets_getseters[] = {
    {"NTA_KEY_PRIMARY",
     (getter)Secrets_get_NTA_KEY_PRIMARY, (setter)Secrets_set_NTA_KEY_PRIMARY,
     NULL, NULL},
    {"NTA_KEY_SECONDARY",
     (getter)Secrets_get_NTA_KEY_SECONDARY, (setter)Secrets_set_NTA_KEY_SECONDARY,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef Secrets_methods[] = {
    {"__internal_mypyc_setup", (PyCFunction)CPyDef___mypyc__Secrets_setup, METH_O, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_Secrets_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Secrets",
    .tp_new = Secrets_new,
    .tp_dealloc = (destructor)Secrets_dealloc,
    .tp_traverse = (traverseproc)Secrets_traverse,
    .tp_clear = (inquiry)Secrets_clear,
    .tp_getset = Secrets_getseters,
    .tp_methods = Secrets_methods,
    .tp_basicsize = sizeof(settings___SecretsObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("Secrets()\n--\n\n"),
};
static PyTypeObject *CPyType_Secrets_template = &CPyType_Secrets_template_;

PyObject *CPyDef___mypyc__Secrets_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    settings___SecretsObject *self;
    self = (settings___SecretsObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = Secrets_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_Secrets(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = CPyDef___mypyc__Secrets_setup((PyObject *)CPyType_Secrets);
    if (self == NULL)
        return NULL;
    int res = CPyType_Secrets->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
Secrets_get_NTA_KEY_PRIMARY(settings___SecretsObject *self, void *closure)
{
    if (unlikely(self->_NTA_KEY_PRIMARY == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'NTA_KEY_PRIMARY' of 'Secrets' undefined");
        return NULL;
    }
    CPy_INCREF(self->_NTA_KEY_PRIMARY);
    PyObject *retval = self->_NTA_KEY_PRIMARY;
    return retval;
}

static int
Secrets_set_NTA_KEY_PRIMARY(settings___SecretsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Secrets' object attribute 'NTA_KEY_PRIMARY' cannot be deleted");
        return -1;
    }
    if (self->_NTA_KEY_PRIMARY != NULL) {
        CPy_DECREF(self->_NTA_KEY_PRIMARY);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_NTA_KEY_PRIMARY = tmp;
    return 0;
}

static PyObject *
Secrets_get_NTA_KEY_SECONDARY(settings___SecretsObject *self, void *closure)
{
    if (unlikely(self->_NTA_KEY_SECONDARY == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'NTA_KEY_SECONDARY' of 'Secrets' undefined");
        return NULL;
    }
    CPy_INCREF(self->_NTA_KEY_SECONDARY);
    PyObject *retval = self->_NTA_KEY_SECONDARY;
    return retval;
}

static int
Secrets_set_NTA_KEY_SECONDARY(settings___SecretsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Secrets' object attribute 'NTA_KEY_SECONDARY' cannot be deleted");
        return -1;
    }
    if (self->_NTA_KEY_SECONDARY != NULL) {
        CPy_DECREF(self->_NTA_KEY_SECONDARY);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_NTA_KEY_SECONDARY = tmp;
    return 0;
}

PyObject *CPyDef___mypyc__LoggerConfig_setup(PyObject *cpy_r_type);
PyObject *CPyDef_LoggerConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
LoggerConfig_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_LoggerConfig) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__LoggerConfig_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
LoggerConfig_traverse(settings___LoggerConfigObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_log_dir);
    Py_VISIT(self->_debug_filepath);
    Py_VISIT(self->_error_filepath);
    Py_VISIT(self->_warning_filepath);
    Py_VISIT(self->_info_filepath);
    return 0;
}

static int
LoggerConfig_clear(settings___LoggerConfigObject *self)
{
    Py_CLEAR(self->_log_dir);
    Py_CLEAR(self->_debug_filepath);
    Py_CLEAR(self->_error_filepath);
    Py_CLEAR(self->_warning_filepath);
    Py_CLEAR(self->_info_filepath);
    return 0;
}

static void
LoggerConfig_dealloc(settings___LoggerConfigObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, LoggerConfig_dealloc)
    LoggerConfig_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
    done: ;
}

static CPyVTableItem LoggerConfig_vtable[1];
static bool
CPyDef_LoggerConfig_trait_vtable_setup(void)
{
    CPyVTableItem LoggerConfig_vtable_scratch[] = {
        NULL
    };
    memcpy(LoggerConfig_vtable, LoggerConfig_vtable_scratch, sizeof(LoggerConfig_vtable));
    return 1;
}

static bool
CPyDef_LoggerConfig_coroutine_setup(PyObject *type)
{
    return 1;
}

static PyObject *
LoggerConfig_get_log_dir(settings___LoggerConfigObject *self, void *closure);
static int
LoggerConfig_set_log_dir(settings___LoggerConfigObject *self, PyObject *value, void *closure);
static PyObject *
LoggerConfig_get_debug_filepath(settings___LoggerConfigObject *self, void *closure);
static int
LoggerConfig_set_debug_filepath(settings___LoggerConfigObject *self, PyObject *value, void *closure);
static PyObject *
LoggerConfig_get_error_filepath(settings___LoggerConfigObject *self, void *closure);
static int
LoggerConfig_set_error_filepath(settings___LoggerConfigObject *self, PyObject *value, void *closure);
static PyObject *
LoggerConfig_get_warning_filepath(settings___LoggerConfigObject *self, void *closure);
static int
LoggerConfig_set_warning_filepath(settings___LoggerConfigObject *self, PyObject *value, void *closure);
static PyObject *
LoggerConfig_get_info_filepath(settings___LoggerConfigObject *self, void *closure);
static int
LoggerConfig_set_info_filepath(settings___LoggerConfigObject *self, PyObject *value, void *closure);

static PyGetSetDef LoggerConfig_getseters[] = {
    {"log_dir",
     (getter)LoggerConfig_get_log_dir, (setter)LoggerConfig_set_log_dir,
     NULL, NULL},
    {"debug_filepath",
     (getter)LoggerConfig_get_debug_filepath, (setter)LoggerConfig_set_debug_filepath,
     NULL, NULL},
    {"error_filepath",
     (getter)LoggerConfig_get_error_filepath, (setter)LoggerConfig_set_error_filepath,
     NULL, NULL},
    {"warning_filepath",
     (getter)LoggerConfig_get_warning_filepath, (setter)LoggerConfig_set_warning_filepath,
     NULL, NULL},
    {"info_filepath",
     (getter)LoggerConfig_get_info_filepath, (setter)LoggerConfig_set_info_filepath,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef LoggerConfig_methods[] = {
    {"__internal_mypyc_setup", (PyCFunction)CPyDef___mypyc__LoggerConfig_setup, METH_O, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_LoggerConfig_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "LoggerConfig",
    .tp_new = LoggerConfig_new,
    .tp_dealloc = (destructor)LoggerConfig_dealloc,
    .tp_traverse = (traverseproc)LoggerConfig_traverse,
    .tp_clear = (inquiry)LoggerConfig_clear,
    .tp_getset = LoggerConfig_getseters,
    .tp_methods = LoggerConfig_methods,
    .tp_basicsize = sizeof(settings___LoggerConfigObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("LoggerConfig()\n--\n\n"),
};
static PyTypeObject *CPyType_LoggerConfig_template = &CPyType_LoggerConfig_template_;

PyObject *CPyDef___mypyc__LoggerConfig_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    settings___LoggerConfigObject *self;
    self = (settings___LoggerConfigObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = LoggerConfig_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_LoggerConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = CPyDef___mypyc__LoggerConfig_setup((PyObject *)CPyType_LoggerConfig);
    if (self == NULL)
        return NULL;
    int res = CPyType_LoggerConfig->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
LoggerConfig_get_log_dir(settings___LoggerConfigObject *self, void *closure)
{
    if (unlikely(self->_log_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'log_dir' of 'LoggerConfig' undefined");
        return NULL;
    }
    CPy_INCREF(self->_log_dir);
    PyObject *retval = self->_log_dir;
    return retval;
}

static int
LoggerConfig_set_log_dir(settings___LoggerConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LoggerConfig' object attribute 'log_dir' cannot be deleted");
        return -1;
    }
    if (self->_log_dir != NULL) {
        CPy_DECREF(self->_log_dir);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_log_dir = tmp;
    return 0;
}

static PyObject *
LoggerConfig_get_debug_filepath(settings___LoggerConfigObject *self, void *closure)
{
    if (unlikely(self->_debug_filepath == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'debug_filepath' of 'LoggerConfig' undefined");
        return NULL;
    }
    CPy_INCREF(self->_debug_filepath);
    PyObject *retval = self->_debug_filepath;
    return retval;
}

static int
LoggerConfig_set_debug_filepath(settings___LoggerConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LoggerConfig' object attribute 'debug_filepath' cannot be deleted");
        return -1;
    }
    if (self->_debug_filepath != NULL) {
        CPy_DECREF(self->_debug_filepath);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_debug_filepath = tmp;
    return 0;
}

static PyObject *
LoggerConfig_get_error_filepath(settings___LoggerConfigObject *self, void *closure)
{
    if (unlikely(self->_error_filepath == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'error_filepath' of 'LoggerConfig' undefined");
        return NULL;
    }
    CPy_INCREF(self->_error_filepath);
    PyObject *retval = self->_error_filepath;
    return retval;
}

static int
LoggerConfig_set_error_filepath(settings___LoggerConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LoggerConfig' object attribute 'error_filepath' cannot be deleted");
        return -1;
    }
    if (self->_error_filepath != NULL) {
        CPy_DECREF(self->_error_filepath);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_error_filepath = tmp;
    return 0;
}

static PyObject *
LoggerConfig_get_warning_filepath(settings___LoggerConfigObject *self, void *closure)
{
    if (unlikely(self->_warning_filepath == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'warning_filepath' of 'LoggerConfig' undefined");
        return NULL;
    }
    CPy_INCREF(self->_warning_filepath);
    PyObject *retval = self->_warning_filepath;
    return retval;
}

static int
LoggerConfig_set_warning_filepath(settings___LoggerConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LoggerConfig' object attribute 'warning_filepath' cannot be deleted");
        return -1;
    }
    if (self->_warning_filepath != NULL) {
        CPy_DECREF(self->_warning_filepath);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_warning_filepath = tmp;
    return 0;
}

static PyObject *
LoggerConfig_get_info_filepath(settings___LoggerConfigObject *self, void *closure)
{
    if (unlikely(self->_info_filepath == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'info_filepath' of 'LoggerConfig' undefined");
        return NULL;
    }
    CPy_INCREF(self->_info_filepath);
    PyObject *retval = self->_info_filepath;
    return retval;
}

static int
LoggerConfig_set_info_filepath(settings___LoggerConfigObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LoggerConfig' object attribute 'info_filepath' cannot be deleted");
        return -1;
    }
    if (self->_info_filepath != NULL) {
        CPy_DECREF(self->_info_filepath);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_info_filepath = tmp;
    return 0;
}
static PyMethodDef module_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_settings(PyObject *module)
{
    intern_strings();
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_settings__internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_settings__internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_settings__internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_ConfigPath);
    Py_CLEAR(CPyType_AppConfig);
    Py_CLEAR(CPyType_DataSource);
    Py_CLEAR(CPyType_MetaConfig);
    Py_CLEAR(CPyType_Secrets);
    Py_CLEAR(CPyType_LoggerConfig);
    return -1;
}
static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "settings",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    module_methods,
    NULL,
};

PyMODINIT_FUNC PyInit_settings(void)
{
    PyObject* modname = NULL;
    if (CPyModule_settings__internal) {
        Py_INCREF(CPyModule_settings__internal);
        return CPyModule_settings__internal;
    }
    CPyModule_settings__internal = PyModule_Create(&module);
    if (unlikely(CPyModule_settings__internal == NULL))
        goto fail;
    modname = PyUnicode_FromString("settings");
    if (modname == NULL) CPyError_OutOfMemory();
    if (PyObject_SetItem(PyImport_GetModuleDict(), modname, CPyModule_settings__internal) < 0)
        goto fail;
    Py_CLEAR(modname);
    if (CPyExec_settings(CPyModule_settings__internal) != 0)
        goto fail;
    return CPyModule_settings__internal;
    fail:
    {
            PyObject *exc_type, *exc_val, *exc_tb;
            PyErr_Fetch(&exc_type, &exc_val, &exc_tb);
            if (modname == NULL) {
                    modname = PyUnicode_FromString("settings");
                    if (modname == NULL) CPyError_OutOfMemory();
                }
                PyObject_DelItem(PyImport_GetModuleDict(), modname);
                PyErr_Clear();
                Py_DECREF(modname);
                Py_CLEAR(CPyModule_settings__internal);
                PyErr_Restore(exc_type, exc_val, exc_tb);
        }
        return NULL;
    }
    
char CPyDef___top_level__(void) {
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
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T0 cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    tuple_T0 cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    tuple_T0 cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    int32_t cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    int32_t cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    tuple_T0 cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    int32_t cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    int32_t cpy_r_r214;
    char cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    int32_t cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    int32_t cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    int32_t cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    int32_t cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    int32_t cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    int32_t cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    int32_t cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    int32_t cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    int32_t cpy_r_r254;
    char cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    int32_t cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    int32_t cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    int32_t cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    int32_t cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    int32_t cpy_r_r274;
    char cpy_r_r275;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    int32_t cpy_r_r278;
    char cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    int32_t cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    int32_t cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    char cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    char cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    int32_t cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    int32_t cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    tuple_T0 cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    int32_t cpy_r_r315;
    char cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    int32_t cpy_r_r319;
    char cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    int32_t cpy_r_r323;
    char cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    int32_t cpy_r_r327;
    char cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    int32_t cpy_r_r331;
    char cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    int32_t cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    int32_t cpy_r_r339;
    char cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    char cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    char cpy_r_r350;
    char cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    int32_t cpy_r_r359;
    char cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    int32_t cpy_r_r363;
    char cpy_r_r364;
    PyObject *cpy_r_r365;
    tuple_T0 cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    int32_t cpy_r_r371;
    char cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    int32_t cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    int32_t cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    int32_t cpy_r_r383;
    char cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    int32_t cpy_r_r387;
    char cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    int32_t cpy_r_r391;
    char cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    int32_t cpy_r_r395;
    char cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    int32_t cpy_r_r399;
    char cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    int32_t cpy_r_r403;
    char cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    int32_t cpy_r_r407;
    char cpy_r_r408;
    char cpy_r_r409;
    PyObject *cpy_r_r410;
    int32_t cpy_r_r411;
    char cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    int32_t cpy_r_r415;
    char cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    int32_t cpy_r_r419;
    char cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    char cpy_r_r425;
    char cpy_r_r426;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 1, CPyStatic_globals);
        goto CPyL135;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[47]; /* ('dataclass',) */
    cpy_r_r6 = CPyStatics[5]; /* 'dataclasses' */
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 2, CPyStatic_globals);
        goto CPyL135;
    }
    CPyModule_dataclasses = cpy_r_r8;
    CPy_INCREF(CPyModule_dataclasses);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyStatics[6]; /* 'settings' */
    cpy_r_r11 = (PyObject *)CPyType_ConfigPath_template;
    cpy_r_r12 = CPyType_FromTemplate(cpy_r_r11, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r13 = CPyDef_ConfigPath_trait_vtable_setup();
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL136;
    }
    cpy_r_r14 = CPyDef_ConfigPath_coroutine_setup(cpy_r_r12);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL136;
    }
    cpy_r_r15 = CPyStatics[7]; /* '__mypyc_attrs__' */
    cpy_r_r16 = CPyStatics[8]; /* 'config_path' */
    cpy_r_r17 = PyTuple_Pack(1, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL136;
    }
    cpy_r_r18 = PyObject_SetAttr(cpy_r_r12, cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL136;
    }
    CPyType_ConfigPath = (PyTypeObject *)cpy_r_r12;
    CPy_INCREF(CPyType_ConfigPath);
    cpy_r_r20 = CPyStatic_globals;
    cpy_r_r21 = CPyStatics[9]; /* 'ConfigPath' */
    cpy_r_r22 = PyDict_SetItem(cpy_r_r20, cpy_r_r21, cpy_r_r12);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL136;
    }
    cpy_r_r24 = PyDict_New();
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL136;
    }
    cpy_r_r25.empty_struct_error_flag = 0;
    cpy_r_r26 = PyDict_New();
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL137;
    }
    cpy_r_r27 = (PyObject *)&PyType_Type;
    cpy_r_r28 = (PyObject *)&PyUnicode_Type;
    cpy_r_r29 = CPyStatics[8]; /* 'config_path' */
    cpy_r_r30 = PyDict_SetItem(cpy_r_r26, cpy_r_r29, cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 23, CPyStatic_globals);
        goto CPyL138;
    }
    cpy_r_r32 = CPyStatics[10]; /* 'application.yml' */
    cpy_r_r33 = CPyStatics[8]; /* 'config_path' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r24, cpy_r_r33, cpy_r_r32);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 23, CPyStatic_globals);
        goto CPyL138;
    }
    cpy_r_r36 = CPy_InitSubclass(cpy_r_r12);
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL138;
    }
    cpy_r_r37 = CPyStatics[11]; /* '__annotations__' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r24, cpy_r_r37, cpy_r_r26);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL138;
    }
    cpy_r_r40 = CPyStatics[12]; /* 'mypyc filler docstring' */
    cpy_r_r41 = CPyStatics[13]; /* '__doc__' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r24, cpy_r_r41, cpy_r_r40);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL138;
    }
    cpy_r_r44 = CPyStatics[6]; /* 'settings' */
    cpy_r_r45 = CPyStatics[14]; /* '__module__' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r24, cpy_r_r45, cpy_r_r44);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL138;
    }
    cpy_r_r48 = CPyStatic_globals;
    cpy_r_r49 = CPyStatics[4]; /* 'dataclass' */
    cpy_r_r50 = CPyDict_GetItem(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 20, CPyStatic_globals);
        goto CPyL138;
    }
    cpy_r_r51 = CPyStatics[5]; /* 'dataclasses' */
    cpy_r_r52 = CPyDataclass_SleightOfHand(cpy_r_r50, cpy_r_r12, cpy_r_r24, cpy_r_r26, cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 21, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPyStatics[6]; /* 'settings' */
    cpy_r_r55 = (PyObject *)CPyType_AppConfig_template;
    cpy_r_r56 = CPyType_FromTemplate(cpy_r_r55, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r57 = CPyDef_AppConfig_trait_vtable_setup();
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL139;
    }
    cpy_r_r58 = CPyDef_AppConfig_coroutine_setup(cpy_r_r56);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL139;
    }
    cpy_r_r59 = CPyStatics[7]; /* '__mypyc_attrs__' */
    cpy_r_r60 = CPyStatics[15]; /* 'app_name' */
    cpy_r_r61 = CPyStatics[16]; /* 'environement' */
    cpy_r_r62 = CPyStatics[17]; /* 'host' */
    cpy_r_r63 = CPyStatics[18]; /* 'port' */
    cpy_r_r64 = PyTuple_Pack(4, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL139;
    }
    cpy_r_r65 = PyObject_SetAttr(cpy_r_r56, cpy_r_r59, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL139;
    }
    CPyType_AppConfig = (PyTypeObject *)cpy_r_r56;
    CPy_INCREF(CPyType_AppConfig);
    cpy_r_r67 = CPyStatic_globals;
    cpy_r_r68 = CPyStatics[19]; /* 'AppConfig' */
    cpy_r_r69 = PyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_r56);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL139;
    }
    cpy_r_r71 = PyDict_New();
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL139;
    }
    cpy_r_r72.empty_struct_error_flag = 0;
    cpy_r_r73 = PyDict_New();
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL140;
    }
    cpy_r_r74 = (PyObject *)&PyType_Type;
    cpy_r_r75 = (PyObject *)&PyUnicode_Type;
    cpy_r_r76 = CPyStatics[15]; /* 'app_name' */
    cpy_r_r77 = PyDict_SetItem(cpy_r_r73, cpy_r_r76, cpy_r_r75);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 28, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r79 = CPyStatics[20]; /* 'livstop' */
    cpy_r_r80 = CPyStatics[15]; /* 'app_name' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r71, cpy_r_r80, cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 28, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r83 = (PyObject *)&PyUnicode_Type;
    cpy_r_r84 = CPyStatics[16]; /* 'environement' */
    cpy_r_r85 = PyDict_SetItem(cpy_r_r73, cpy_r_r84, cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 29, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r87 = CPyStatics[21]; /* 'production' */
    cpy_r_r88 = CPyStatics[16]; /* 'environement' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r71, cpy_r_r88, cpy_r_r87);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 29, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r91 = (PyObject *)&PyUnicode_Type;
    cpy_r_r92 = CPyStatics[17]; /* 'host' */
    cpy_r_r93 = PyDict_SetItem(cpy_r_r73, cpy_r_r92, cpy_r_r91);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 30, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r95 = CPyStatics[22]; /* '' */
    cpy_r_r96 = CPyStatics[17]; /* 'host' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r71, cpy_r_r96, cpy_r_r95);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 30, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r99 = (PyObject *)&PyLong_Type;
    cpy_r_r100 = CPyStatics[18]; /* 'port' */
    cpy_r_r101 = PyDict_SetItem(cpy_r_r73, cpy_r_r100, cpy_r_r99);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 31, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r103 = CPyStatics[18]; /* 'port' */
    cpy_r_r104 = CPyStatics[45]; /* 8000 */
    cpy_r_r105 = CPyDict_SetItem(cpy_r_r71, cpy_r_r103, cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 31, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r107 = CPy_InitSubclass(cpy_r_r56);
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r108 = CPyStatics[11]; /* '__annotations__' */
    cpy_r_r109 = CPyDict_SetItem(cpy_r_r71, cpy_r_r108, cpy_r_r73);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r111 = CPyStatics[12]; /* 'mypyc filler docstring' */
    cpy_r_r112 = CPyStatics[13]; /* '__doc__' */
    cpy_r_r113 = CPyDict_SetItem(cpy_r_r71, cpy_r_r112, cpy_r_r111);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r115 = CPyStatics[6]; /* 'settings' */
    cpy_r_r116 = CPyStatics[14]; /* '__module__' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r71, cpy_r_r116, cpy_r_r115);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r119 = CPyStatic_globals;
    cpy_r_r120 = CPyStatics[4]; /* 'dataclass' */
    cpy_r_r121 = CPyDict_GetItem(cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 26, CPyStatic_globals);
        goto CPyL141;
    }
    cpy_r_r122 = CPyStatics[5]; /* 'dataclasses' */
    cpy_r_r123 = CPyDataclass_SleightOfHand(cpy_r_r121, cpy_r_r56, cpy_r_r71, cpy_r_r73, cpy_r_r122);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 27, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r124 = NULL;
    cpy_r_r125 = CPyStatics[6]; /* 'settings' */
    cpy_r_r126 = (PyObject *)CPyType_DataSource_template;
    cpy_r_r127 = CPyType_FromTemplate(cpy_r_r126, cpy_r_r124, cpy_r_r125);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r128 = CPyDef_DataSource_trait_vtable_setup();
    if (unlikely(cpy_r_r128 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL142;
    }
    cpy_r_r129 = CPyDef_DataSource_coroutine_setup(cpy_r_r127);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL142;
    }
    cpy_r_r130 = CPyStatics[7]; /* '__mypyc_attrs__' */
    cpy_r_r131 = CPyStatics[23]; /* 'static_source_url' */
    cpy_r_r132 = CPyStatics[24]; /* 'realtime_trip_updates_url' */
    cpy_r_r133 = PyTuple_Pack(2, cpy_r_r131, cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL142;
    }
    cpy_r_r134 = PyObject_SetAttr(cpy_r_r127, cpy_r_r130, cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL142;
    }
    CPyType_DataSource = (PyTypeObject *)cpy_r_r127;
    CPy_INCREF(CPyType_DataSource);
    cpy_r_r136 = CPyStatic_globals;
    cpy_r_r137 = CPyStatics[25]; /* 'DataSource' */
    cpy_r_r138 = PyDict_SetItem(cpy_r_r136, cpy_r_r137, cpy_r_r127);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL142;
    }
    cpy_r_r140 = PyDict_New();
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL142;
    }
    cpy_r_r141.empty_struct_error_flag = 0;
    cpy_r_r142 = PyDict_New();
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL143;
    }
    cpy_r_r143 = (PyObject *)&PyType_Type;
    cpy_r_r144 = (PyObject *)&PyUnicode_Type;
    cpy_r_r145 = CPyStatics[23]; /* 'static_source_url' */
    cpy_r_r146 = PyDict_SetItem(cpy_r_r142, cpy_r_r145, cpy_r_r144);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 36, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r148 = CPyStatics[22]; /* '' */
    cpy_r_r149 = CPyStatics[23]; /* 'static_source_url' */
    cpy_r_r150 = CPyDict_SetItem(cpy_r_r140, cpy_r_r149, cpy_r_r148);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 36, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r152 = (PyObject *)&PyUnicode_Type;
    cpy_r_r153 = CPyStatics[24]; /* 'realtime_trip_updates_url' */
    cpy_r_r154 = PyDict_SetItem(cpy_r_r142, cpy_r_r153, cpy_r_r152);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 37, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r156 = CPyStatics[22]; /* '' */
    cpy_r_r157 = CPyStatics[24]; /* 'realtime_trip_updates_url' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r140, cpy_r_r157, cpy_r_r156);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 37, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r160 = CPy_InitSubclass(cpy_r_r127);
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r161 = CPyStatics[11]; /* '__annotations__' */
    cpy_r_r162 = CPyDict_SetItem(cpy_r_r140, cpy_r_r161, cpy_r_r142);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r164 = CPyStatics[12]; /* 'mypyc filler docstring' */
    cpy_r_r165 = CPyStatics[13]; /* '__doc__' */
    cpy_r_r166 = CPyDict_SetItem(cpy_r_r140, cpy_r_r165, cpy_r_r164);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r168 = CPyStatics[6]; /* 'settings' */
    cpy_r_r169 = CPyStatics[14]; /* '__module__' */
    cpy_r_r170 = CPyDict_SetItem(cpy_r_r140, cpy_r_r169, cpy_r_r168);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r172 = CPyStatic_globals;
    cpy_r_r173 = CPyStatics[4]; /* 'dataclass' */
    cpy_r_r174 = CPyDict_GetItem(cpy_r_r172, cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 34, CPyStatic_globals);
        goto CPyL144;
    }
    cpy_r_r175 = CPyStatics[5]; /* 'dataclasses' */
    cpy_r_r176 = CPyDataclass_SleightOfHand(cpy_r_r174, cpy_r_r127, cpy_r_r140, cpy_r_r142, cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 35, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r177 = NULL;
    cpy_r_r178 = CPyStatics[6]; /* 'settings' */
    cpy_r_r179 = (PyObject *)CPyType_MetaConfig_template;
    cpy_r_r180 = CPyType_FromTemplate(cpy_r_r179, cpy_r_r177, cpy_r_r178);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r181 = CPyDef_MetaConfig_trait_vtable_setup();
    if (unlikely(cpy_r_r181 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL145;
    }
    cpy_r_r182 = CPyDef_MetaConfig_coroutine_setup(cpy_r_r180);
    if (unlikely(cpy_r_r182 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL145;
    }
    cpy_r_r183 = CPyStatics[7]; /* '__mypyc_attrs__' */
    cpy_r_r184 = CPyStatics[26]; /* 'static_refresh_interval_hrs' */
    cpy_r_r185 = CPyStatics[27]; /* 'static_request_timeout_secs' */
    cpy_r_r186 = CPyStatics[28]; /* 'static_sync_check_interval_secs' */
    cpy_r_r187 = CPyStatics[29]; /* 'auto_download_static' */
    cpy_r_r188 = CPyStatics[30]; /* 'realtime_poll_interval_secs' */
    cpy_r_r189 = CPyStatics[31]; /* 'realtime_request_timeout_secs' */
    cpy_r_r190 = CPyStatics[32]; /* 'bootstrap_schema' */
    cpy_r_r191 = CPyStatics[33]; /* 'sync_batch_size' */
    cpy_r_r192 = CPyStatics[34]; /* 'auto_sync_start' */
    cpy_r_r193 = PyTuple_Pack(9, cpy_r_r184, cpy_r_r185, cpy_r_r186, cpy_r_r187, cpy_r_r188, cpy_r_r189, cpy_r_r190, cpy_r_r191, cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL145;
    }
    cpy_r_r194 = PyObject_SetAttr(cpy_r_r180, cpy_r_r183, cpy_r_r193);
    CPy_DECREF(cpy_r_r193);
    cpy_r_r195 = cpy_r_r194 >= 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL145;
    }
    CPyType_MetaConfig = (PyTypeObject *)cpy_r_r180;
    CPy_INCREF(CPyType_MetaConfig);
    cpy_r_r196 = CPyStatic_globals;
    cpy_r_r197 = CPyStatics[35]; /* 'MetaConfig' */
    cpy_r_r198 = PyDict_SetItem(cpy_r_r196, cpy_r_r197, cpy_r_r180);
    cpy_r_r199 = cpy_r_r198 >= 0;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL145;
    }
    cpy_r_r200 = PyDict_New();
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL145;
    }
    cpy_r_r201.empty_struct_error_flag = 0;
    cpy_r_r202 = PyDict_New();
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL146;
    }
    cpy_r_r203 = (PyObject *)&PyType_Type;
    cpy_r_r204 = (PyObject *)&PyLong_Type;
    cpy_r_r205 = CPyStatics[26]; /* 'static_refresh_interval_hrs' */
    cpy_r_r206 = PyDict_SetItem(cpy_r_r202, cpy_r_r205, cpy_r_r204);
    cpy_r_r207 = cpy_r_r206 >= 0;
    if (unlikely(!cpy_r_r207)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 42, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r208 = CPyStatics[26]; /* 'static_refresh_interval_hrs' */
    cpy_r_r209 = CPyStatics[46]; /* 0 */
    cpy_r_r210 = CPyDict_SetItem(cpy_r_r200, cpy_r_r208, cpy_r_r209);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 42, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r212 = (PyObject *)&PyLong_Type;
    cpy_r_r213 = CPyStatics[27]; /* 'static_request_timeout_secs' */
    cpy_r_r214 = PyDict_SetItem(cpy_r_r202, cpy_r_r213, cpy_r_r212);
    cpy_r_r215 = cpy_r_r214 >= 0;
    if (unlikely(!cpy_r_r215)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 43, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r216 = CPyStatics[27]; /* 'static_request_timeout_secs' */
    cpy_r_r217 = CPyStatics[46]; /* 0 */
    cpy_r_r218 = CPyDict_SetItem(cpy_r_r200, cpy_r_r216, cpy_r_r217);
    cpy_r_r219 = cpy_r_r218 >= 0;
    if (unlikely(!cpy_r_r219)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 43, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r220 = (PyObject *)&PyLong_Type;
    cpy_r_r221 = CPyStatics[28]; /* 'static_sync_check_interval_secs' */
    cpy_r_r222 = PyDict_SetItem(cpy_r_r202, cpy_r_r221, cpy_r_r220);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 44, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r224 = CPyStatics[28]; /* 'static_sync_check_interval_secs' */
    cpy_r_r225 = CPyStatics[46]; /* 0 */
    cpy_r_r226 = CPyDict_SetItem(cpy_r_r200, cpy_r_r224, cpy_r_r225);
    cpy_r_r227 = cpy_r_r226 >= 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 44, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r228 = (PyObject *)&PyBool_Type;
    cpy_r_r229 = CPyStatics[29]; /* 'auto_download_static' */
    cpy_r_r230 = PyDict_SetItem(cpy_r_r202, cpy_r_r229, cpy_r_r228);
    cpy_r_r231 = cpy_r_r230 >= 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 45, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r232 = CPyStatics[29]; /* 'auto_download_static' */
    cpy_r_r233 = 1 ? Py_True : Py_False;
    cpy_r_r234 = CPyDict_SetItem(cpy_r_r200, cpy_r_r232, cpy_r_r233);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 45, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r236 = (PyObject *)&PyLong_Type;
    cpy_r_r237 = CPyStatics[30]; /* 'realtime_poll_interval_secs' */
    cpy_r_r238 = PyDict_SetItem(cpy_r_r202, cpy_r_r237, cpy_r_r236);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 46, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r240 = CPyStatics[30]; /* 'realtime_poll_interval_secs' */
    cpy_r_r241 = CPyStatics[46]; /* 0 */
    cpy_r_r242 = CPyDict_SetItem(cpy_r_r200, cpy_r_r240, cpy_r_r241);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 46, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r244 = (PyObject *)&PyLong_Type;
    cpy_r_r245 = CPyStatics[31]; /* 'realtime_request_timeout_secs' */
    cpy_r_r246 = PyDict_SetItem(cpy_r_r202, cpy_r_r245, cpy_r_r244);
    cpy_r_r247 = cpy_r_r246 >= 0;
    if (unlikely(!cpy_r_r247)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 47, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r248 = CPyStatics[31]; /* 'realtime_request_timeout_secs' */
    cpy_r_r249 = CPyStatics[46]; /* 0 */
    cpy_r_r250 = CPyDict_SetItem(cpy_r_r200, cpy_r_r248, cpy_r_r249);
    cpy_r_r251 = cpy_r_r250 >= 0;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 47, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r252 = (PyObject *)&PyBool_Type;
    cpy_r_r253 = CPyStatics[32]; /* 'bootstrap_schema' */
    cpy_r_r254 = PyDict_SetItem(cpy_r_r202, cpy_r_r253, cpy_r_r252);
    cpy_r_r255 = cpy_r_r254 >= 0;
    if (unlikely(!cpy_r_r255)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 48, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r256 = CPyStatics[32]; /* 'bootstrap_schema' */
    cpy_r_r257 = 1 ? Py_True : Py_False;
    cpy_r_r258 = CPyDict_SetItem(cpy_r_r200, cpy_r_r256, cpy_r_r257);
    cpy_r_r259 = cpy_r_r258 >= 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 48, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r260 = (PyObject *)&PyLong_Type;
    cpy_r_r261 = CPyStatics[33]; /* 'sync_batch_size' */
    cpy_r_r262 = PyDict_SetItem(cpy_r_r202, cpy_r_r261, cpy_r_r260);
    cpy_r_r263 = cpy_r_r262 >= 0;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 49, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r264 = CPyStatics[33]; /* 'sync_batch_size' */
    cpy_r_r265 = CPyStatics[46]; /* 0 */
    cpy_r_r266 = CPyDict_SetItem(cpy_r_r200, cpy_r_r264, cpy_r_r265);
    cpy_r_r267 = cpy_r_r266 >= 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 49, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r268 = (PyObject *)&PyBool_Type;
    cpy_r_r269 = CPyStatics[34]; /* 'auto_sync_start' */
    cpy_r_r270 = PyDict_SetItem(cpy_r_r202, cpy_r_r269, cpy_r_r268);
    cpy_r_r271 = cpy_r_r270 >= 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 50, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r272 = CPyStatics[34]; /* 'auto_sync_start' */
    cpy_r_r273 = 1 ? Py_True : Py_False;
    cpy_r_r274 = CPyDict_SetItem(cpy_r_r200, cpy_r_r272, cpy_r_r273);
    cpy_r_r275 = cpy_r_r274 >= 0;
    if (unlikely(!cpy_r_r275)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 50, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r276 = CPy_InitSubclass(cpy_r_r180);
    if (unlikely(!cpy_r_r276)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r277 = CPyStatics[11]; /* '__annotations__' */
    cpy_r_r278 = CPyDict_SetItem(cpy_r_r200, cpy_r_r277, cpy_r_r202);
    cpy_r_r279 = cpy_r_r278 >= 0;
    if (unlikely(!cpy_r_r279)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r280 = CPyStatics[12]; /* 'mypyc filler docstring' */
    cpy_r_r281 = CPyStatics[13]; /* '__doc__' */
    cpy_r_r282 = CPyDict_SetItem(cpy_r_r200, cpy_r_r281, cpy_r_r280);
    cpy_r_r283 = cpy_r_r282 >= 0;
    if (unlikely(!cpy_r_r283)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r284 = CPyStatics[6]; /* 'settings' */
    cpy_r_r285 = CPyStatics[14]; /* '__module__' */
    cpy_r_r286 = CPyDict_SetItem(cpy_r_r200, cpy_r_r285, cpy_r_r284);
    cpy_r_r287 = cpy_r_r286 >= 0;
    if (unlikely(!cpy_r_r287)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r288 = CPyStatic_globals;
    cpy_r_r289 = CPyStatics[4]; /* 'dataclass' */
    cpy_r_r290 = CPyDict_GetItem(cpy_r_r288, cpy_r_r289);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 40, CPyStatic_globals);
        goto CPyL147;
    }
    cpy_r_r291 = CPyStatics[5]; /* 'dataclasses' */
    cpy_r_r292 = CPyDataclass_SleightOfHand(cpy_r_r290, cpy_r_r180, cpy_r_r200, cpy_r_r202, cpy_r_r291);
    CPy_DECREF(cpy_r_r290);
    CPy_DECREF(cpy_r_r180);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(!cpy_r_r292)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 41, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r293 = NULL;
    cpy_r_r294 = CPyStatics[6]; /* 'settings' */
    cpy_r_r295 = (PyObject *)CPyType_Secrets_template;
    cpy_r_r296 = CPyType_FromTemplate(cpy_r_r295, cpy_r_r293, cpy_r_r294);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r297 = CPyDef_Secrets_trait_vtable_setup();
    if (unlikely(cpy_r_r297 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL148;
    }
    cpy_r_r298 = CPyDef_Secrets_coroutine_setup(cpy_r_r296);
    if (unlikely(cpy_r_r298 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL148;
    }
    cpy_r_r299 = CPyStatics[7]; /* '__mypyc_attrs__' */
    cpy_r_r300 = CPyStatics[36]; /* 'NTA_KEY_PRIMARY' */
    cpy_r_r301 = CPyStatics[37]; /* 'NTA_KEY_SECONDARY' */
    cpy_r_r302 = PyTuple_Pack(2, cpy_r_r300, cpy_r_r301);
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL148;
    }
    cpy_r_r303 = PyObject_SetAttr(cpy_r_r296, cpy_r_r299, cpy_r_r302);
    CPy_DECREF(cpy_r_r302);
    cpy_r_r304 = cpy_r_r303 >= 0;
    if (unlikely(!cpy_r_r304)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL148;
    }
    CPyType_Secrets = (PyTypeObject *)cpy_r_r296;
    CPy_INCREF(CPyType_Secrets);
    cpy_r_r305 = CPyStatic_globals;
    cpy_r_r306 = CPyStatics[38]; /* 'Secrets' */
    cpy_r_r307 = PyDict_SetItem(cpy_r_r305, cpy_r_r306, cpy_r_r296);
    cpy_r_r308 = cpy_r_r307 >= 0;
    if (unlikely(!cpy_r_r308)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL148;
    }
    cpy_r_r309 = PyDict_New();
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL148;
    }
    cpy_r_r310.empty_struct_error_flag = 0;
    cpy_r_r311 = PyDict_New();
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL149;
    }
    cpy_r_r312 = (PyObject *)&PyType_Type;
    cpy_r_r313 = (PyObject *)&PyUnicode_Type;
    cpy_r_r314 = CPyStatics[36]; /* 'NTA_KEY_PRIMARY' */
    cpy_r_r315 = PyDict_SetItem(cpy_r_r311, cpy_r_r314, cpy_r_r313);
    cpy_r_r316 = cpy_r_r315 >= 0;
    if (unlikely(!cpy_r_r316)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 55, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r317 = CPyStatics[22]; /* '' */
    cpy_r_r318 = CPyStatics[36]; /* 'NTA_KEY_PRIMARY' */
    cpy_r_r319 = CPyDict_SetItem(cpy_r_r309, cpy_r_r318, cpy_r_r317);
    cpy_r_r320 = cpy_r_r319 >= 0;
    if (unlikely(!cpy_r_r320)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 55, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r321 = (PyObject *)&PyUnicode_Type;
    cpy_r_r322 = CPyStatics[37]; /* 'NTA_KEY_SECONDARY' */
    cpy_r_r323 = PyDict_SetItem(cpy_r_r311, cpy_r_r322, cpy_r_r321);
    cpy_r_r324 = cpy_r_r323 >= 0;
    if (unlikely(!cpy_r_r324)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 56, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r325 = CPyStatics[22]; /* '' */
    cpy_r_r326 = CPyStatics[37]; /* 'NTA_KEY_SECONDARY' */
    cpy_r_r327 = CPyDict_SetItem(cpy_r_r309, cpy_r_r326, cpy_r_r325);
    cpy_r_r328 = cpy_r_r327 >= 0;
    if (unlikely(!cpy_r_r328)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 56, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r329 = CPy_InitSubclass(cpy_r_r296);
    if (unlikely(!cpy_r_r329)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r330 = CPyStatics[11]; /* '__annotations__' */
    cpy_r_r331 = CPyDict_SetItem(cpy_r_r309, cpy_r_r330, cpy_r_r311);
    cpy_r_r332 = cpy_r_r331 >= 0;
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r333 = CPyStatics[12]; /* 'mypyc filler docstring' */
    cpy_r_r334 = CPyStatics[13]; /* '__doc__' */
    cpy_r_r335 = CPyDict_SetItem(cpy_r_r309, cpy_r_r334, cpy_r_r333);
    cpy_r_r336 = cpy_r_r335 >= 0;
    if (unlikely(!cpy_r_r336)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r337 = CPyStatics[6]; /* 'settings' */
    cpy_r_r338 = CPyStatics[14]; /* '__module__' */
    cpy_r_r339 = CPyDict_SetItem(cpy_r_r309, cpy_r_r338, cpy_r_r337);
    cpy_r_r340 = cpy_r_r339 >= 0;
    if (unlikely(!cpy_r_r340)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r341 = CPyStatic_globals;
    cpy_r_r342 = CPyStatics[4]; /* 'dataclass' */
    cpy_r_r343 = CPyDict_GetItem(cpy_r_r341, cpy_r_r342);
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 53, CPyStatic_globals);
        goto CPyL150;
    }
    cpy_r_r344 = CPyStatics[5]; /* 'dataclasses' */
    cpy_r_r345 = CPyDataclass_SleightOfHand(cpy_r_r343, cpy_r_r296, cpy_r_r309, cpy_r_r311, cpy_r_r344);
    CPy_DECREF(cpy_r_r343);
    CPy_DECREF(cpy_r_r296);
    CPy_DECREF(cpy_r_r309);
    CPy_DECREF(cpy_r_r311);
    if (unlikely(!cpy_r_r345)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 54, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r346 = NULL;
    cpy_r_r347 = CPyStatics[6]; /* 'settings' */
    cpy_r_r348 = (PyObject *)CPyType_LoggerConfig_template;
    cpy_r_r349 = CPyType_FromTemplate(cpy_r_r348, cpy_r_r346, cpy_r_r347);
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL135;
    }
    cpy_r_r350 = CPyDef_LoggerConfig_trait_vtable_setup();
    if (unlikely(cpy_r_r350 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL151;
    }
    cpy_r_r351 = CPyDef_LoggerConfig_coroutine_setup(cpy_r_r349);
    if (unlikely(cpy_r_r351 == 2)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL151;
    }
    cpy_r_r352 = CPyStatics[7]; /* '__mypyc_attrs__' */
    cpy_r_r353 = CPyStatics[39]; /* 'log_dir' */
    cpy_r_r354 = CPyStatics[40]; /* 'debug_filepath' */
    cpy_r_r355 = CPyStatics[41]; /* 'error_filepath' */
    cpy_r_r356 = CPyStatics[42]; /* 'warning_filepath' */
    cpy_r_r357 = CPyStatics[43]; /* 'info_filepath' */
    cpy_r_r358 = PyTuple_Pack(5, cpy_r_r353, cpy_r_r354, cpy_r_r355, cpy_r_r356, cpy_r_r357);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL151;
    }
    cpy_r_r359 = PyObject_SetAttr(cpy_r_r349, cpy_r_r352, cpy_r_r358);
    CPy_DECREF(cpy_r_r358);
    cpy_r_r360 = cpy_r_r359 >= 0;
    if (unlikely(!cpy_r_r360)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL151;
    }
    CPyType_LoggerConfig = (PyTypeObject *)cpy_r_r349;
    CPy_INCREF(CPyType_LoggerConfig);
    cpy_r_r361 = CPyStatic_globals;
    cpy_r_r362 = CPyStatics[44]; /* 'LoggerConfig' */
    cpy_r_r363 = PyDict_SetItem(cpy_r_r361, cpy_r_r362, cpy_r_r349);
    cpy_r_r364 = cpy_r_r363 >= 0;
    if (unlikely(!cpy_r_r364)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL151;
    }
    cpy_r_r365 = PyDict_New();
    if (unlikely(cpy_r_r365 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL151;
    }
    cpy_r_r366.empty_struct_error_flag = 0;
    cpy_r_r367 = PyDict_New();
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL152;
    }
    cpy_r_r368 = (PyObject *)&PyType_Type;
    cpy_r_r369 = (PyObject *)&PyUnicode_Type;
    cpy_r_r370 = CPyStatics[39]; /* 'log_dir' */
    cpy_r_r371 = PyDict_SetItem(cpy_r_r367, cpy_r_r370, cpy_r_r369);
    cpy_r_r372 = cpy_r_r371 >= 0;
    if (unlikely(!cpy_r_r372)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 61, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r373 = CPyStatics[22]; /* '' */
    cpy_r_r374 = CPyStatics[39]; /* 'log_dir' */
    cpy_r_r375 = CPyDict_SetItem(cpy_r_r365, cpy_r_r374, cpy_r_r373);
    cpy_r_r376 = cpy_r_r375 >= 0;
    if (unlikely(!cpy_r_r376)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 61, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r377 = (PyObject *)&PyUnicode_Type;
    cpy_r_r378 = CPyStatics[40]; /* 'debug_filepath' */
    cpy_r_r379 = PyDict_SetItem(cpy_r_r367, cpy_r_r378, cpy_r_r377);
    cpy_r_r380 = cpy_r_r379 >= 0;
    if (unlikely(!cpy_r_r380)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 62, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r381 = CPyStatics[22]; /* '' */
    cpy_r_r382 = CPyStatics[40]; /* 'debug_filepath' */
    cpy_r_r383 = CPyDict_SetItem(cpy_r_r365, cpy_r_r382, cpy_r_r381);
    cpy_r_r384 = cpy_r_r383 >= 0;
    if (unlikely(!cpy_r_r384)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 62, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r385 = (PyObject *)&PyUnicode_Type;
    cpy_r_r386 = CPyStatics[41]; /* 'error_filepath' */
    cpy_r_r387 = PyDict_SetItem(cpy_r_r367, cpy_r_r386, cpy_r_r385);
    cpy_r_r388 = cpy_r_r387 >= 0;
    if (unlikely(!cpy_r_r388)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 63, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r389 = CPyStatics[22]; /* '' */
    cpy_r_r390 = CPyStatics[41]; /* 'error_filepath' */
    cpy_r_r391 = CPyDict_SetItem(cpy_r_r365, cpy_r_r390, cpy_r_r389);
    cpy_r_r392 = cpy_r_r391 >= 0;
    if (unlikely(!cpy_r_r392)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 63, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r393 = (PyObject *)&PyUnicode_Type;
    cpy_r_r394 = CPyStatics[42]; /* 'warning_filepath' */
    cpy_r_r395 = PyDict_SetItem(cpy_r_r367, cpy_r_r394, cpy_r_r393);
    cpy_r_r396 = cpy_r_r395 >= 0;
    if (unlikely(!cpy_r_r396)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 64, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r397 = CPyStatics[22]; /* '' */
    cpy_r_r398 = CPyStatics[42]; /* 'warning_filepath' */
    cpy_r_r399 = CPyDict_SetItem(cpy_r_r365, cpy_r_r398, cpy_r_r397);
    cpy_r_r400 = cpy_r_r399 >= 0;
    if (unlikely(!cpy_r_r400)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 64, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r401 = (PyObject *)&PyUnicode_Type;
    cpy_r_r402 = CPyStatics[43]; /* 'info_filepath' */
    cpy_r_r403 = PyDict_SetItem(cpy_r_r367, cpy_r_r402, cpy_r_r401);
    cpy_r_r404 = cpy_r_r403 >= 0;
    if (unlikely(!cpy_r_r404)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 65, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r405 = CPyStatics[22]; /* '' */
    cpy_r_r406 = CPyStatics[43]; /* 'info_filepath' */
    cpy_r_r407 = CPyDict_SetItem(cpy_r_r365, cpy_r_r406, cpy_r_r405);
    cpy_r_r408 = cpy_r_r407 >= 0;
    if (unlikely(!cpy_r_r408)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 65, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r409 = CPy_InitSubclass(cpy_r_r349);
    if (unlikely(!cpy_r_r409)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r410 = CPyStatics[11]; /* '__annotations__' */
    cpy_r_r411 = CPyDict_SetItem(cpy_r_r365, cpy_r_r410, cpy_r_r367);
    cpy_r_r412 = cpy_r_r411 >= 0;
    if (unlikely(!cpy_r_r412)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r413 = CPyStatics[12]; /* 'mypyc filler docstring' */
    cpy_r_r414 = CPyStatics[13]; /* '__doc__' */
    cpy_r_r415 = CPyDict_SetItem(cpy_r_r365, cpy_r_r414, cpy_r_r413);
    cpy_r_r416 = cpy_r_r415 >= 0;
    if (unlikely(!cpy_r_r416)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r417 = CPyStatics[6]; /* 'settings' */
    cpy_r_r418 = CPyStatics[14]; /* '__module__' */
    cpy_r_r419 = CPyDict_SetItem(cpy_r_r365, cpy_r_r418, cpy_r_r417);
    cpy_r_r420 = cpy_r_r419 >= 0;
    if (unlikely(!cpy_r_r420)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r421 = CPyStatic_globals;
    cpy_r_r422 = CPyStatics[4]; /* 'dataclass' */
    cpy_r_r423 = CPyDict_GetItem(cpy_r_r421, cpy_r_r422);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 59, CPyStatic_globals);
        goto CPyL153;
    }
    cpy_r_r424 = CPyStatics[5]; /* 'dataclasses' */
    cpy_r_r425 = CPyDataclass_SleightOfHand(cpy_r_r423, cpy_r_r349, cpy_r_r365, cpy_r_r367, cpy_r_r424);
    CPy_DECREF(cpy_r_r423);
    CPy_DECREF(cpy_r_r349);
    CPy_DECREF(cpy_r_r365);
    CPy_DECREF(cpy_r_r367);
    if (unlikely(!cpy_r_r425)) {
        CPy_AddTraceback("dto/settings.py", "<module>", 60, CPyStatic_globals);
        goto CPyL135;
    }
    return 1;
CPyL135: ;
    cpy_r_r426 = 2;
    return cpy_r_r426;
CPyL136: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL135;
CPyL137: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r24);
    goto CPyL135;
CPyL138: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r26);
    goto CPyL135;
CPyL139: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL135;
CPyL140: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r71);
    goto CPyL135;
CPyL141: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r73);
    goto CPyL135;
CPyL142: ;
    CPy_DecRef(cpy_r_r127);
    goto CPyL135;
CPyL143: ;
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_r140);
    goto CPyL135;
CPyL144: ;
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_r140);
    CPy_DecRef(cpy_r_r142);
    goto CPyL135;
CPyL145: ;
    CPy_DecRef(cpy_r_r180);
    goto CPyL135;
CPyL146: ;
    CPy_DecRef(cpy_r_r180);
    CPy_DecRef(cpy_r_r200);
    goto CPyL135;
CPyL147: ;
    CPy_DecRef(cpy_r_r180);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_r202);
    goto CPyL135;
CPyL148: ;
    CPy_DecRef(cpy_r_r296);
    goto CPyL135;
CPyL149: ;
    CPy_DecRef(cpy_r_r296);
    CPy_DecRef(cpy_r_r309);
    goto CPyL135;
CPyL150: ;
    CPy_DecRef(cpy_r_r296);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r311);
    goto CPyL135;
CPyL151: ;
    CPy_DecRef(cpy_r_r349);
    goto CPyL135;
CPyL152: ;
    CPy_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r365);
    goto CPyL135;
CPyL153: ;
    CPy_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r365);
    CPy_DecRef(cpy_r_r367);
    goto CPyL135;
}
    
    int CPyGlobalsInit(void)
    {
        static int is_initialized = 0;
        if (is_initialized) return 0;
        
        CPy_Init();
        CPyModule_settings = Py_None;
        CPyModule_builtins = Py_None;
        CPyModule_dataclasses = Py_None;
        if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
            return -1;
        }
        is_initialized = 1;
        return 0;
    }
    
    PyObject *CPyStatics[48];
    const char * const CPyLit_Str[] = {
    "\006\bbuiltins\tdataclass\vdataclasses\bsettings\017__mypyc_attrs__\vconfig_path",
    "\004\nConfigPath\017application.yml\017__annotations__\026mypyc filler docstring",
    "\b\a__doc__\n__module__\bapp_name\fenvironement\004host\004port\tAppConfig\alivstop",
    "\005\nproduction\000\021static_source_url\031realtime_trip_updates_url\nDataSource",
    "\002\033static_refresh_interval_hrs\033static_request_timeout_secs",
    "\002\037static_sync_check_interval_secs\024auto_download_static",
    "\002\033realtime_poll_interval_secs\035realtime_request_timeout_secs",
    "\004\020bootstrap_schema\017sync_batch_size\017auto_sync_start\nMetaConfig",
    "\005\017NTA_KEY_PRIMARY\021NTA_KEY_SECONDARY\aSecrets\alog_dir\016debug_filepath",
    "\004\016error_filepath\020warning_filepath\rinfo_filepath\fLoggerConfig",
    "",
};
    const char * const CPyLit_Bytes[] = {
    "",
};
    const char * const CPyLit_Int[] = {
    "\0028000\0000",
    "",
};
    const double CPyLit_Float[] = {0};
    const double CPyLit_Complex[] = {0};
    const int CPyLit_Tuple[] = {1, 1, 4};
    const int CPyLit_FrozenSet[] = {0};
    CPyModule *CPyModule_settings__internal = NULL;
    CPyModule *CPyModule_settings;
    PyObject *CPyStatic_globals;
    CPyModule *CPyModule_builtins;
    CPyModule *CPyModule_dataclasses;
    int CPyExec_settings(PyObject *module);
    PyTypeObject *CPyType_ConfigPath;
    PyObject *CPyDef_ConfigPath(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyTypeObject *CPyType_AppConfig;
    PyObject *CPyDef_AppConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyTypeObject *CPyType_DataSource;
    PyObject *CPyDef_DataSource(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyTypeObject *CPyType_MetaConfig;
    PyObject *CPyDef_MetaConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyTypeObject *CPyType_Secrets;
    PyObject *CPyDef_Secrets(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyTypeObject *CPyType_LoggerConfig;
    PyObject *CPyDef_LoggerConfig(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    char CPyDef___top_level__(void);
