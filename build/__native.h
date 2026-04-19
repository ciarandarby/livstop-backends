#ifndef MYPYC_NATIVE_H
#define MYPYC_NATIVE_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T0
#define MYPYC_DECLARED_tuple_T0
typedef struct tuple_T0 {
    int empty_struct_error_flag;
} tuple_T0;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_config_path;
} settings___ConfigPathObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_app_name;
    PyObject *_environement;
    PyObject *_host;
    CPyTagged _port;
} settings___AppConfigObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_static_source_url;
    PyObject *_realtime_trip_updates_url;
} settings___DataSourceObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _static_refresh_interval_hrs;
    CPyTagged _static_request_timeout_secs;
    CPyTagged _static_sync_check_interval_secs;
    char _auto_download_static;
    CPyTagged _realtime_poll_interval_secs;
    CPyTagged _realtime_request_timeout_secs;
    char _bootstrap_schema;
    CPyTagged _sync_batch_size;
    char _auto_sync_start;
} settings___MetaConfigObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_NTA_KEY_PRIMARY;
    PyObject *_NTA_KEY_SECONDARY;
} settings___SecretsObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_log_dir;
    PyObject *_debug_filepath;
    PyObject *_error_filepath;
    PyObject *_warning_filepath;
    PyObject *_info_filepath;
} settings___LoggerConfigObject;

#endif
