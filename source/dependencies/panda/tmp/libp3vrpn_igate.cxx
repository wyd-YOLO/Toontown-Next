/*
 * This file was generated by:
 * built\bin\interrogate -v -srcdir panda/src/vrpn -Ipanda/src/vrpn -DCPPPARSER -D__STDC__=1 -D__cplusplus=201103L -DWIN32_VC -DWIN32 -D_WIN32 -D_M_IX86 -D_MSC_VER=1600 -D__declspec(param)= -D__cdecl -D_near -D_far -D__near -D__far -D__stdcall -oc built/tmp/libp3vrpn_igate.cxx -od built/pandac/input/libp3vrpn.in -fnames -string -refcount -assert -python-native -Sbuilt/include/parser-inc -Ipanda/src/vrpn -Sbuilt/tmp -Sbuilt/include -Sthirdparty/win-python/include -Sthirdparty/win-libs-vc10/vrpn/include -Sthirdparty/win-libs-vc10/extras/include -module panda3d.vrpn -library libp3vrpn config_vrpn.h p3vrpn_composite1.cxx vrpnAnalog.h vrpnAnalogDevice.h vrpnButton.h vrpnButtonDevice.h vrpnClient.h vrpnDial.h vrpnDialDevice.h vrpnTracker.h vrpnTrackerDevice.h vrpn_interface.h 
 *
 */

#include "dtoolbase.h"
#include "interrogate_request.h"
#include "dconfig.h"
#include "pnotify.h"
#include <sstream>
#define PANDA_LIBRARY_NAME_libp3vrpn
#include "py_panda.h"
#include "extension.h"
#include "dcast.h"

#include "config_vrpn.h"
#include "notifyCategoryProxy.h"
#include "pandabase.h"
#include "vrpnAnalog.h"
#include "vrpnAnalogDevice.h"
#include "vrpnButton.h"
#include "vrpnButtonDevice.h"
#include "vrpnClient.h"
#include "vrpnDial.h"
#include "vrpnDialDevice.h"
#include "vrpnTracker.h"
#include "vrpnTrackerDevice.h"
#include "vrpn_interface.h"

#undef _POSIX_C_SOURCE
#undef _XOPEN_SOURCE
#define PY_SSIZE_T_CLEAN 1

#if PYTHON_FRAMEWORK
  #include <Python/Python.h>
#else
  #include "Python.h"
#endif

/**
 * Forward declarations for top-level class VrpnClient
 */
typedef VrpnClient VrpnClient_localtype;
Define_Module_ClassRef(panda3d.vrpn, VrpnClient, VrpnClient_localtype, VrpnClient);
static struct Dtool_PyTypedObject *const Dtool_Ptr_VrpnClient = &Dtool_VrpnClient;
static void Dtool_PyModuleClassInit_VrpnClient(PyObject *module);
bool Dtool_ConstCoerce_VrpnClient(PyObject *args, CPT(VrpnClient) &coerced);
bool Dtool_Coerce_VrpnClient(PyObject *args, PT(VrpnClient) &coerced);

/**
 * Extern declarations for imported classes
 */
// ostream
#ifndef LINK_ALL_STATIC
static struct Dtool_PyTypedObject *Dtool_Ptr_ostream;
#else
extern struct Dtool_PyTypedObject Dtool_ostream;
static struct Dtool_PyTypedObject *const Dtool_Ptr_ostream = &Dtool_ostream;
#endif
// TypeHandle
#ifndef LINK_ALL_STATIC
static struct Dtool_PyTypedObject *Dtool_Ptr_TypeHandle;
inline static TypeHandle *Dtool_Coerce_TypeHandle(PyObject *args, TypeHandle &coerced) {
  nassertr(Dtool_Ptr_TypeHandle != NULL, NULL);
  nassertr(Dtool_Ptr_TypeHandle->_Dtool_Coerce != NULL, NULL);
  return ((TypeHandle *(*)(PyObject *, TypeHandle &))Dtool_Ptr_TypeHandle->_Dtool_Coerce)(args, coerced);
}
#else
extern struct Dtool_PyTypedObject Dtool_TypeHandle;
static struct Dtool_PyTypedObject *const Dtool_Ptr_TypeHandle = &Dtool_TypeHandle;
extern TypeHandle *Dtool_Coerce_TypeHandle(PyObject *args, TypeHandle &coerced);
#endif
// TypedObject
#ifndef LINK_ALL_STATIC
static struct Dtool_PyTypedObject *Dtool_Ptr_TypedObject;
#else
extern struct Dtool_PyTypedObject Dtool_TypedObject;
static struct Dtool_PyTypedObject *const Dtool_Ptr_TypedObject = &Dtool_TypedObject;
#endif
// ReferenceCount
#ifndef LINK_ALL_STATIC
static struct Dtool_PyTypedObject *Dtool_Ptr_ReferenceCount;
#else
extern struct Dtool_PyTypedObject Dtool_ReferenceCount;
static struct Dtool_PyTypedObject *const Dtool_Ptr_ReferenceCount = &Dtool_ReferenceCount;
#endif
// TypedReferenceCount
#ifndef LINK_ALL_STATIC
static struct Dtool_PyTypedObject *Dtool_Ptr_TypedReferenceCount;
#else
extern struct Dtool_PyTypedObject Dtool_TypedReferenceCount;
static struct Dtool_PyTypedObject *const Dtool_Ptr_TypedReferenceCount = &Dtool_TypedReferenceCount;
#endif
// ClientBase
#ifndef LINK_ALL_STATIC
static struct Dtool_PyTypedObject *Dtool_Ptr_ClientBase;
#else
extern struct Dtool_PyTypedObject Dtool_ClientBase;
static struct Dtool_PyTypedObject *const Dtool_Ptr_ClientBase = &Dtool_ClientBase;
#endif

/**
 * Python wrappers for global functions
 */
/**
 * Python wrappers for functions of class VrpnClient
 */
/**
 * Python function wrapper for:
 * inline std::string const &VrpnClient::get_server_name(void) const
 */
static PyObject *Dtool_VrpnClient_get_server_name_4(PyObject *self, PyObject *) {
  VrpnClient *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer(self, Dtool_VrpnClient, (void **)&local_this)) {
    return NULL;
  }
  // 1-inline std::string const &VrpnClient::get_server_name(void) const
  std::string const &return_value = (*(const VrpnClient*)local_this).get_server_name();
  if (Dtool_CheckErrorOccurred()) {
    return NULL;
  }
  return Dtool_WrapValue(return_value);
}

#ifndef NDEBUG
static const char *Dtool_VrpnClient_get_server_name_4_comment =
  "C++ Interface:\n"
  "get_server_name(VrpnClient self)\n"
  "\n"
  "/**\n"
  " * Returns the name of the server as passed to the VrpnClient constructor.\n"
  " */";
#else
static const char *Dtool_VrpnClient_get_server_name_4_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * inline bool VrpnClient::is_valid(void) const
 */
static PyObject *Dtool_VrpnClient_is_valid_5(PyObject *self, PyObject *) {
  VrpnClient *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer(self, Dtool_VrpnClient, (void **)&local_this)) {
    return NULL;
  }
  // 1-inline bool VrpnClient::is_valid(void) const
  bool return_value = (*(const VrpnClient*)local_this).is_valid();
  return Dtool_Return_Bool(return_value);
}

#ifndef NDEBUG
static const char *Dtool_VrpnClient_is_valid_5_comment =
  "C++ Interface:\n"
  "is_valid(VrpnClient self)\n"
  "\n"
  "/**\n"
  " * Returns true if everything seems to be kosher with the server (even if\n"
  " * there is no connection), or false otherwise.\n"
  " */";
#else
static const char *Dtool_VrpnClient_is_valid_5_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * inline bool VrpnClient::is_connected(void) const
 */
static PyObject *Dtool_VrpnClient_is_connected_6(PyObject *self, PyObject *) {
  VrpnClient *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer(self, Dtool_VrpnClient, (void **)&local_this)) {
    return NULL;
  }
  // 1-inline bool VrpnClient::is_connected(void) const
  bool return_value = (*(const VrpnClient*)local_this).is_connected();
  return Dtool_Return_Bool(return_value);
}

#ifndef NDEBUG
static const char *Dtool_VrpnClient_is_connected_6_comment =
  "C++ Interface:\n"
  "is_connected(VrpnClient self)\n"
  "\n"
  "/**\n"
  " * Returns true if the connection is established successfully, false\n"
  " * otherwise.\n"
  " */";
#else
static const char *Dtool_VrpnClient_is_connected_6_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * void VrpnClient::write(ostream &out, int indent_level = 0) const
 */
static PyObject *Dtool_VrpnClient_write_7(PyObject *self, PyObject *args, PyObject *kwds) {
  VrpnClient *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer(self, Dtool_VrpnClient, (void **)&local_this)) {
    return NULL;
  }
  // 1-void VrpnClient::write(ostream &out, int indent_level = 0) const
  PyObject *param1;
  int param2 = 0;
  static const char *keyword_list[] = {"out", "indent_level", NULL};
  if (PyArg_ParseTupleAndKeywords(args, kwds, "O|i:write", (char **)keyword_list, &param1, &param2)) {
    ostream *param1_this = (ostream *)DTOOL_Call_GetPointerThisClass(param1, Dtool_Ptr_ostream, 1, "VrpnClient.write", false, true);
    if (param1_this != NULL) {
      (*(const VrpnClient*)local_this).write(*param1_this, (int)param2);
      return Dtool_Return_None();
    }
  }
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "write(VrpnClient self, ostream out, int indent_level)\n");
  }
  return NULL;
}

#ifndef NDEBUG
static const char *Dtool_VrpnClient_write_7_comment =
  "C++ Interface:\n"
  "write(VrpnClient self, ostream out, int indent_level)\n"
  "\n"
  "/**\n"
  " * Writes a list of the active devices that the VrpnClient is currently\n"
  " * polling each frame.\n"
  " */";
#else
static const char *Dtool_VrpnClient_write_7_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * static TypeHandle VrpnClient::get_class_type(void)
 */
static PyObject *Dtool_VrpnClient_get_class_type_8(PyObject *, PyObject *) {
  // 1-static TypeHandle VrpnClient::get_class_type(void)
  TypeHandle *return_value = new TypeHandle(VrpnClient::get_class_type());
  if (return_value == NULL) {
    return PyErr_NoMemory();
  }
  if (Dtool_CheckErrorOccurred()) {
    delete return_value;
    return NULL;
  }
  return DTool_CreatePyInstance((void *)return_value, *Dtool_Ptr_TypeHandle, true, false);
}

#ifndef NDEBUG
static const char *Dtool_VrpnClient_get_class_type_8_comment =
  "C++ Interface:\n"
  "get_class_type()\n";
#else
static const char *Dtool_VrpnClient_get_class_type_8_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * VrpnClient::VrpnClient(std::string const &server_name)
 */
static int Dtool_Init_VrpnClient(PyObject *self, PyObject *args, PyObject *kwds) {
    int parameter_count = (int)PyTuple_Size(args);
    if (kwds != NULL) {
      parameter_count += (int)PyDict_Size(kwds);
    }
  if (parameter_count != 1) {
#ifdef NDEBUG
    Dtool_Raise_TypeError("function takes exactly 1 argument");
    return -1;
#else
    PyErr_Format(PyExc_TypeError,
                 "VrpnClient() takes exactly 1 argument (%d given)",
                 parameter_count);
    return -1;
#endif
  }
  PyObject *arg = NULL;
  if (PyTuple_GET_SIZE(args) == 1) {
    arg = PyTuple_GET_ITEM(args, 0);
  } else if (kwds != NULL) {
    arg = PyDict_GetItemString(kwds, "server_name");
  }
  if (arg == (PyObject *)NULL) {
    Dtool_Raise_TypeError("Required argument 'server_name' (pos 1) not found");
    return -1;
  }
  // 1-VrpnClient::VrpnClient(std::string const &server_name)
  char *param0_str = NULL;
  Py_ssize_t param0_len;
#if PY_MAJOR_VERSION >= 3
  param0_str = PyUnicode_AsUTF8AndSize(arg, &param0_len);
#else
  if (PyString_AsStringAndSize(arg, &param0_str, &param0_len) == -1) {
    param0_str = NULL;
  }
#endif
  if (param0_str != NULL) {
    VrpnClient *return_value = new VrpnClient(std::string(param0_str, param0_len));
    if (return_value == NULL) {
      PyErr_NoMemory();
      return -1;
    }
    return_value->ref();
    if (Dtool_CheckErrorOccurred()) {
      unref_delete(return_value);
      return -1;
    }
    return DTool_PyInit_Finalize(self, (void *)return_value, &Dtool_VrpnClient, true, false);
  }
  if (!_PyErr_OCCURRED()) {
    Dtool_Raise_BadArgumentsError(
      "VrpnClient(str server_name)\n");
  }
  return -1;
}

bool Dtool_ConstCoerce_VrpnClient(PyObject *args, CPT(VrpnClient) &coerced) {
  DTOOL_Call_ExtractThisPointerForType(args, &Dtool_VrpnClient, (void**)&coerced.cheat());
  if (coerced != NULL) {
    // The argument is already of matching type, no need to coerce.
    coerced->ref();
    return true;
  }

  if (!PyTuple_Check(args)) {
    PyObject *arg = args;
    // 1-VrpnClient::VrpnClient(std::string const &server_name)
    char *param0_str = NULL;
    Py_ssize_t param0_len;
#if PY_MAJOR_VERSION >= 3
    param0_str = PyUnicode_AsUTF8AndSize(arg, &param0_len);
#else
    if (PyString_AsStringAndSize(arg, &param0_str, &param0_len) == -1) {
      param0_str = NULL;
    }
#endif
    if (param0_str != NULL) {
      VrpnClient *return_value = new VrpnClient(std::string(param0_str, param0_len));
      if (return_value == NULL) {
        PyErr_NoMemory();
        return false;
      }
      return_value->ref();
      if (_PyErr_OCCURRED()) {
        unref_delete(return_value);
        return false;
      } else {
        coerced = MOVE(return_value);
        return true;
      }
    }
    PyErr_Clear();
  }
  return false;
}

bool Dtool_Coerce_VrpnClient(PyObject *args, PT(VrpnClient) &coerced) {
  DTOOL_Call_ExtractThisPointerForType(args, &Dtool_VrpnClient, (void**)&coerced.cheat());
  if (coerced != NULL) {
    // The argument is already of matching type, no need to coerce.
    if (!((Dtool_PyInstDef *)args)->_is_const) {
      // A non-const instance is required, which this is.
      coerced->ref();
      return true;
    }
  }

  if (!PyTuple_Check(args)) {
    PyObject *arg = args;
    // 1-VrpnClient::VrpnClient(std::string const &server_name)
    char *param0_str = NULL;
    Py_ssize_t param0_len;
#if PY_MAJOR_VERSION >= 3
    param0_str = PyUnicode_AsUTF8AndSize(arg, &param0_len);
#else
    if (PyString_AsStringAndSize(arg, &param0_str, &param0_len) == -1) {
      param0_str = NULL;
    }
#endif
    if (param0_str != NULL) {
      VrpnClient *return_value = new VrpnClient(std::string(param0_str, param0_len));
      if (return_value == NULL) {
        PyErr_NoMemory();
        return false;
      }
      return_value->ref();
      if (_PyErr_OCCURRED()) {
        unref_delete(return_value);
        return false;
      } else {
        coerced = MOVE(return_value);
        return true;
      }
    }
    PyErr_Clear();
  }
  return false;
}

static void *Dtool_UpcastInterface_VrpnClient(PyObject *self, Dtool_PyTypedObject *requested_type) {
  Dtool_PyTypedObject *SelfType = ((Dtool_PyInstDef *)self)->_My_Type;
  if (SelfType != Dtool_Ptr_VrpnClient) {
    printf("VrpnClient ** Bad Source Type-- Requesting Conversion from %s to %s\n", Py_TYPE(self)->tp_name, requested_type->_PyType.tp_name); fflush(NULL);
    return NULL;
  }

  VrpnClient *local_this = (VrpnClient *)((Dtool_PyInstDef *)self)->_ptr_to_object;
  if (requested_type == Dtool_Ptr_VrpnClient) {
    return local_this;
  }
  if (requested_type == Dtool_Ptr_ClientBase) {
    return (ClientBase *) local_this;
  }
  if (requested_type == Dtool_Ptr_ReferenceCount) {
    return (ReferenceCount *)(TypedReferenceCount *)(ClientBase *) local_this;
  }
  if (requested_type == Dtool_Ptr_TypedObject) {
    return (TypedObject *)(TypedReferenceCount *)(ClientBase *) local_this;
  }
  if (requested_type == Dtool_Ptr_TypedReferenceCount) {
    return (TypedReferenceCount *)(ClientBase *) local_this;
  }
  return NULL;
}

static void *Dtool_DowncastInterface_VrpnClient(void *from_this, Dtool_PyTypedObject *from_type) {
  if (from_this == NULL || from_type == NULL) {
    return NULL;
  }
  if (from_type == Dtool_Ptr_VrpnClient) {
    return from_this;
  }
  if (from_type == Dtool_Ptr_ClientBase) {
    ClientBase* other_this = (ClientBase*)from_this;
    return (VrpnClient*)other_this;
  }
  if (from_type == Dtool_Ptr_ReferenceCount) {
    ReferenceCount* other_this = (ReferenceCount*)from_this;
    return (VrpnClient*)other_this;
  }
  if (from_type == Dtool_Ptr_TypedObject) {
    TypedObject* other_this = (TypedObject*)from_this;
    return (VrpnClient*)other_this;
  }
  if (from_type == Dtool_Ptr_TypedReferenceCount) {
    TypedReferenceCount* other_this = (TypedReferenceCount*)from_this;
    return (VrpnClient*)other_this;
  }
  return (void *) NULL;
}

/**
 * Python method tables for VrpnClient (VrpnClient)
 */
static PyMethodDef Dtool_Methods_VrpnClient[] = {
  {"get_server_name", &Dtool_VrpnClient_get_server_name_4, METH_NOARGS, (const char *)Dtool_VrpnClient_get_server_name_4_comment},
  {"getServerName", &Dtool_VrpnClient_get_server_name_4, METH_NOARGS, (const char *)Dtool_VrpnClient_get_server_name_4_comment},
  {"is_valid", &Dtool_VrpnClient_is_valid_5, METH_NOARGS, (const char *)Dtool_VrpnClient_is_valid_5_comment},
  {"isValid", &Dtool_VrpnClient_is_valid_5, METH_NOARGS, (const char *)Dtool_VrpnClient_is_valid_5_comment},
  {"is_connected", &Dtool_VrpnClient_is_connected_6, METH_NOARGS, (const char *)Dtool_VrpnClient_is_connected_6_comment},
  {"isConnected", &Dtool_VrpnClient_is_connected_6, METH_NOARGS, (const char *)Dtool_VrpnClient_is_connected_6_comment},
  {"write", (PyCFunction) &Dtool_VrpnClient_write_7, METH_VARARGS | METH_KEYWORDS, (const char *)Dtool_VrpnClient_write_7_comment},
  {"get_class_type", &Dtool_VrpnClient_get_class_type_8, METH_NOARGS | METH_STATIC, (const char *)Dtool_VrpnClient_get_class_type_8_comment},
  {"getClassType", &Dtool_VrpnClient_get_class_type_8, METH_NOARGS | METH_STATIC, (const char *)Dtool_VrpnClient_get_class_type_8_comment},
  {NULL, NULL, 0, NULL}
};

//////////////////
//  A __str__ function
//     VrpnClient
//////////////////
static PyObject *Dtool_Str_VrpnClient(PyObject *self) {
  VrpnClient *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer(self, Dtool_VrpnClient, (void **)&local_this)) {
    return NULL;
  }

  ostringstream os;
  local_this->write(os);
  std::string ss = os.str();
  return Dtool_WrapValue(ss);
}

static PyNumberMethods Dtool_NumberMethods_VrpnClient = {
  0, // nb_add
  0, // nb_subtract
  0, // nb_multiply
#if PY_MAJOR_VERSION < 3
  0, // nb_divide
#endif
  0, // nb_remainder
  0, // nb_divmod
  0, // nb_power
  0, // nb_negative
  0, // nb_positive
  0, // nb_absolute
  0, // nb_bool
  0, // nb_invert
  0, // nb_lshift
  0, // nb_rshift
  0, // nb_and
  0, // nb_xor
  0, // nb_or
#if PY_MAJOR_VERSION < 3
  0, // nb_coerce
#endif
  0, // nb_int
  0, // nb_long
  0, // nb_float
#if PY_MAJOR_VERSION < 3
  0, // nb_oct
  0, // nb_hex
#endif
  0, // nb_inplace_add
  0, // nb_inplace_subtract
  0, // nb_inplace_multiply
#if PY_MAJOR_VERSION < 3
  0, // nb_inplace_divide
#endif
  0, // nb_inplace_remainder
  0, // nb_inplace_power
  0, // nb_inplace_lshift
  0, // nb_inplace_rshift
  0, // nb_inplace_and
  0, // nb_inplace_xor
  0, // nb_inplace_or
  0, // nb_floor_divide
  0, // nb_true_divide
  0, // nb_inplace_floor_divide
  0, // nb_inplace_true_divide
#if PY_VERSION_HEX >= 0x02050000
  0, // nb_index
#endif
#if PY_VERSION_HEX >= 0x03050000
  0, // nb_matrix_multiply
  0, // nb_inplace_matrix_multiply
#endif
};

static PySequenceMethods Dtool_SequenceMethods_VrpnClient = {
  0, // sq_length
  0, // sq_concat
  0, // sq_repeat
  0, // sq_item
  0, // sq_slice
  0, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static PyMappingMethods Dtool_MappingMethods_VrpnClient = {
  0, // mp_length
  0, // mp_subscript
  0, // mp_ass_subscript
};

static PyBufferProcs Dtool_BufferProcs_VrpnClient = {
#if PY_MAJOR_VERSION < 3
  0, // bf_getreadbuffer
  0, // bf_getwritebuffer
  0, // bf_getsegcount
  0, // bf_getcharbuffer
#endif
#if PY_VERSION_HEX >= 0x02060000
  0, // bf_getbuffer
  0, // bf_releasebuffer
#endif
};

struct Dtool_PyTypedObject Dtool_VrpnClient = {
  {
    PyVarObject_HEAD_INIT(NULL, 0)
    "panda3d.vrpn.VrpnClient",
    sizeof(Dtool_PyInstDef),
    0, // tp_itemsize
    &Dtool_FreeInstance_VrpnClient,
    0, // tp_print
    0, // tp_getattr
    0, // tp_setattr
#if PY_MAJOR_VERSION >= 3
    0, // tp_reserved
#else
    0, // tp_compare
#endif
    0, // tp_repr
    &Dtool_NumberMethods_VrpnClient,
    &Dtool_SequenceMethods_VrpnClient,
    &Dtool_MappingMethods_VrpnClient,
    0, // tp_hash
    0, // tp_call
    &Dtool_Str_VrpnClient,
    PyObject_GenericGetAttr,
    PyObject_GenericSetAttr,
    &Dtool_BufferProcs_VrpnClient,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_CHECKTYPES,
#ifdef NDEBUG
    0,
#else
    "/**\n"
    " * A specific ClientBase that connects to a VRPN server and records\n"
    " * information on the connected VRPN devices.\n"
    " */",
#endif
    0, // tp_traverse
    0, // tp_clear
    0, // tp_richcompare
    0, // tp_weaklistoffset
    0, // tp_iter
    0, // tp_iternext
    Dtool_Methods_VrpnClient,
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    Dtool_Init_VrpnClient,
    PyType_GenericAlloc,
    Dtool_new_VrpnClient,
    PyObject_Del,
    0, // tp_is_gc
    0, // tp_bases
    0, // tp_mro
    0, // tp_cache
    0, // tp_subclasses
    0, // tp_weaklist
    0, // tp_del
#if PY_VERSION_HEX >= 0x02060000
    0, // tp_version_tag
#endif
#if PY_VERSION_HEX >= 0x03040000
    0, // tp_finalize
#endif
  },
  TypeHandle::none(),
  Dtool_PyModuleClassInit_VrpnClient,
  Dtool_UpcastInterface_VrpnClient,
  Dtool_DowncastInterface_VrpnClient,
  (CoerceFunction)Dtool_ConstCoerce_VrpnClient,
  (CoerceFunction)Dtool_Coerce_VrpnClient,
};

static void Dtool_PyModuleClassInit_VrpnClient(PyObject *module) {
  (void) module; // Unused
  static bool initdone = false;
  if (!initdone) {
    initdone = true;
    // Dependent objects
    assert(Dtool_Ptr_ClientBase != NULL);
    assert(Dtool_Ptr_ClientBase->_Dtool_ModuleClassInit != NULL);
    Dtool_Ptr_ClientBase->_Dtool_ModuleClassInit(NULL);
    Dtool_VrpnClient._PyType.tp_bases = PyTuple_Pack(1, (PyTypeObject *)Dtool_Ptr_ClientBase);
    PyObject *dict = PyDict_New();
    Dtool_VrpnClient._PyType.tp_dict = dict;
    PyDict_SetItemString(dict, "DtoolClassDict", dict);
    if (PyType_Ready((PyTypeObject *)&Dtool_VrpnClient) < 0) {
      Dtool_Raise_TypeError("PyType_Ready(VrpnClient)");
      return;
    }
    Py_INCREF((PyTypeObject *)&Dtool_VrpnClient);
  }
}


/**
 * Module Object Linker ..
 */
void Dtool_libp3vrpn_RegisterTypes() {
  Dtool_VrpnClient._type = VrpnClient::get_class_type();
  RegisterRuntimeTypedClass(Dtool_VrpnClient);
}

void Dtool_libp3vrpn_ResolveExternals() {
#ifndef LINK_ALL_STATIC
  // Resolve externally imported types.
  Dtool_Ptr_ostream = LookupNamedClass("ostream");
  Dtool_Ptr_TypeHandle = LookupNamedClass("TypeHandle");
  Dtool_Ptr_TypedObject = LookupRuntimeTypedClass(TypedObject::get_class_type());
  Dtool_Ptr_ReferenceCount = LookupRuntimeTypedClass(ReferenceCount::get_class_type());
  Dtool_Ptr_TypedReferenceCount = LookupRuntimeTypedClass(TypedReferenceCount::get_class_type());
  Dtool_Ptr_ClientBase = LookupRuntimeTypedClass(ClientBase::get_class_type());
#endif
}

void Dtool_libp3vrpn_BuildInstants(PyObject *module) {
  (void) module;
  // VrpnClient
  Dtool_PyModuleClassInit_VrpnClient(module);
  PyModule_AddObject(module, "VrpnClient", (PyObject *)&Dtool_VrpnClient);
}

static PyMethodDef python_simple_funcs[] = {
  // Support Function For Dtool_types ... for now in each module ??
  {"Dtool_BorrowThisReference", &Dtool_BorrowThisReference, METH_VARARGS, "Used to borrow 'this' pointer (to, from)\nAssumes no ownership."},
  {"Dtool_AddToDictionary", &Dtool_AddToDictionary, METH_VARARGS, "Used to add items into a tp_dict"},
  {NULL, NULL, 0, NULL}
};

struct LibraryDef libp3vrpn_moddef = {python_simple_funcs};
static InterrogateModuleDef _in_module_def = {
  1478213858,  /* file_identifier */
  "libp3vrpn",  /* library_name */
  "lPJY",  /* library_hash_name */
  "panda3d.vrpn",  /* module_name */
  "libp3vrpn.in",  /* database_filename */
  (InterrogateUniqueNameDef *)0,  /* unique_names */
  0,  /* num_unique_names */
  (void **)0,  /* fptrs */
  0,  /* num_fptrs */
  1,  /* first_index */
  26  /* next_index */
};

Configure(_in_configure_libp3vrpn);
ConfigureFn(_in_configure_libp3vrpn) {
  interrogate_request_module(&_in_module_def);
}
