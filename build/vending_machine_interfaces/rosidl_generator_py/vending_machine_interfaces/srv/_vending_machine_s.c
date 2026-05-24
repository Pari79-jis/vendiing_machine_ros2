// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from vending_machine_interfaces:srv/VendingMachine.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "vending_machine_interfaces/srv/detail/vending_machine__struct.h"
#include "vending_machine_interfaces/srv/detail/vending_machine__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool vending_machine_interfaces__srv__vending_machine__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("vending_machine_interfaces.srv._vending_machine.VendingMachine_Request", full_classname_dest, 70) == 0);
  }
  vending_machine_interfaces__srv__VendingMachine_Request * ros_message = _ros_message;
  {  // selected_item
    PyObject * field = PyObject_GetAttrString(_pymsg, "selected_item");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->selected_item, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // amount_inserted
    PyObject * field = PyObject_GetAttrString(_pymsg, "amount_inserted");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->amount_inserted = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // superhero_choice
    PyObject * field = PyObject_GetAttrString(_pymsg, "superhero_choice");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->superhero_choice, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vending_machine_interfaces__srv__vending_machine__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VendingMachine_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vending_machine_interfaces.srv._vending_machine");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VendingMachine_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vending_machine_interfaces__srv__VendingMachine_Request * ros_message = (vending_machine_interfaces__srv__VendingMachine_Request *)raw_ros_message;
  {  // selected_item
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->selected_item.data,
      strlen(ros_message->selected_item.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "selected_item", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // amount_inserted
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->amount_inserted);
    {
      int rc = PyObject_SetAttrString(_pymessage, "amount_inserted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // superhero_choice
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->superhero_choice.data,
      strlen(ros_message->superhero_choice.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "superhero_choice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "vending_machine_interfaces/srv/detail/vending_machine__struct.h"
// already included above
// #include "vending_machine_interfaces/srv/detail/vending_machine__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool vending_machine_interfaces__srv__vending_machine__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("vending_machine_interfaces.srv._vending_machine.VendingMachine_Response", full_classname_dest, 71) == 0);
  }
  vending_machine_interfaces__srv__VendingMachine_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // change
    PyObject * field = PyObject_GetAttrString(_pymsg, "change");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->change = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remaining_amount
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_amount");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_amount = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reward_message
    PyObject * field = PyObject_GetAttrString(_pymsg, "reward_message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reward_message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sunday_special
    PyObject * field = PyObject_GetAttrString(_pymsg, "sunday_special");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sunday_special, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bible_verse
    PyObject * field = PyObject_GetAttrString(_pymsg, "bible_verse");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bible_verse, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vending_machine_interfaces__srv__vending_machine__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VendingMachine_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vending_machine_interfaces.srv._vending_machine");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VendingMachine_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vending_machine_interfaces__srv__VendingMachine_Response * ros_message = (vending_machine_interfaces__srv__VendingMachine_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->change);
    {
      int rc = PyObject_SetAttrString(_pymessage, "change", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_amount
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_amount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_amount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reward_message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reward_message.data,
      strlen(ros_message->reward_message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reward_message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sunday_special
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sunday_special.data,
      strlen(ros_message->sunday_special.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sunday_special", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bible_verse
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bible_verse.data,
      strlen(ros_message->bible_verse.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bible_verse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
