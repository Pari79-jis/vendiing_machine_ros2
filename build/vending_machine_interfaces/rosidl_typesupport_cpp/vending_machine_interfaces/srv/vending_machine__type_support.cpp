// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from vending_machine_interfaces:srv/VendingMachine.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "vending_machine_interfaces/srv/detail/vending_machine__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace vending_machine_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _VendingMachine_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VendingMachine_Request_type_support_ids_t;

static const _VendingMachine_Request_type_support_ids_t _VendingMachine_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _VendingMachine_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VendingMachine_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VendingMachine_Request_type_support_symbol_names_t _VendingMachine_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vending_machine_interfaces, srv, VendingMachine_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vending_machine_interfaces, srv, VendingMachine_Request)),
  }
};

typedef struct _VendingMachine_Request_type_support_data_t
{
  void * data[2];
} _VendingMachine_Request_type_support_data_t;

static _VendingMachine_Request_type_support_data_t _VendingMachine_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VendingMachine_Request_message_typesupport_map = {
  2,
  "vending_machine_interfaces",
  &_VendingMachine_Request_message_typesupport_ids.typesupport_identifier[0],
  &_VendingMachine_Request_message_typesupport_symbol_names.symbol_name[0],
  &_VendingMachine_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VendingMachine_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VendingMachine_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace vending_machine_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vending_machine_interfaces::srv::VendingMachine_Request>()
{
  return &::vending_machine_interfaces::srv::rosidl_typesupport_cpp::VendingMachine_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vending_machine_interfaces, srv, VendingMachine_Request)() {
  return get_message_type_support_handle<vending_machine_interfaces::srv::VendingMachine_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vending_machine_interfaces/srv/detail/vending_machine__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vending_machine_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _VendingMachine_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VendingMachine_Response_type_support_ids_t;

static const _VendingMachine_Response_type_support_ids_t _VendingMachine_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _VendingMachine_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VendingMachine_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VendingMachine_Response_type_support_symbol_names_t _VendingMachine_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vending_machine_interfaces, srv, VendingMachine_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vending_machine_interfaces, srv, VendingMachine_Response)),
  }
};

typedef struct _VendingMachine_Response_type_support_data_t
{
  void * data[2];
} _VendingMachine_Response_type_support_data_t;

static _VendingMachine_Response_type_support_data_t _VendingMachine_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VendingMachine_Response_message_typesupport_map = {
  2,
  "vending_machine_interfaces",
  &_VendingMachine_Response_message_typesupport_ids.typesupport_identifier[0],
  &_VendingMachine_Response_message_typesupport_symbol_names.symbol_name[0],
  &_VendingMachine_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VendingMachine_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VendingMachine_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace vending_machine_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vending_machine_interfaces::srv::VendingMachine_Response>()
{
  return &::vending_machine_interfaces::srv::rosidl_typesupport_cpp::VendingMachine_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vending_machine_interfaces, srv, VendingMachine_Response)() {
  return get_message_type_support_handle<vending_machine_interfaces::srv::VendingMachine_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vending_machine_interfaces/srv/detail/vending_machine__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vending_machine_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _VendingMachine_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VendingMachine_type_support_ids_t;

static const _VendingMachine_type_support_ids_t _VendingMachine_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _VendingMachine_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VendingMachine_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VendingMachine_type_support_symbol_names_t _VendingMachine_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vending_machine_interfaces, srv, VendingMachine)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vending_machine_interfaces, srv, VendingMachine)),
  }
};

typedef struct _VendingMachine_type_support_data_t
{
  void * data[2];
} _VendingMachine_type_support_data_t;

static _VendingMachine_type_support_data_t _VendingMachine_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VendingMachine_service_typesupport_map = {
  2,
  "vending_machine_interfaces",
  &_VendingMachine_service_typesupport_ids.typesupport_identifier[0],
  &_VendingMachine_service_typesupport_symbol_names.symbol_name[0],
  &_VendingMachine_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t VendingMachine_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VendingMachine_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace vending_machine_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<vending_machine_interfaces::srv::VendingMachine>()
{
  return &::vending_machine_interfaces::srv::rosidl_typesupport_cpp::VendingMachine_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, vending_machine_interfaces, srv, VendingMachine)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<vending_machine_interfaces::srv::VendingMachine>();
}

#ifdef __cplusplus
}
#endif
