// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vending_machine_interfaces:srv/VendingMachine.idl
// generated code does not contain a copyright notice
#include "vending_machine_interfaces/srv/detail/vending_machine__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vending_machine_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vending_machine_interfaces/srv/detail/vending_machine__struct.h"
#include "vending_machine_interfaces/srv/detail/vending_machine__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // selected_item, superhero_choice
#include "rosidl_runtime_c/string_functions.h"  // selected_item, superhero_choice

// forward declare type support functions


using _VendingMachine_Request__ros_msg_type = vending_machine_interfaces__srv__VendingMachine_Request;

static bool _VendingMachine_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VendingMachine_Request__ros_msg_type * ros_message = static_cast<const _VendingMachine_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: selected_item
  {
    const rosidl_runtime_c__String * str = &ros_message->selected_item;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: amount_inserted
  {
    cdr << ros_message->amount_inserted;
  }

  // Field name: superhero_choice
  {
    const rosidl_runtime_c__String * str = &ros_message->superhero_choice;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _VendingMachine_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VendingMachine_Request__ros_msg_type * ros_message = static_cast<_VendingMachine_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: selected_item
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->selected_item.data) {
      rosidl_runtime_c__String__init(&ros_message->selected_item);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->selected_item,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'selected_item'\n");
      return false;
    }
  }

  // Field name: amount_inserted
  {
    cdr >> ros_message->amount_inserted;
  }

  // Field name: superhero_choice
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->superhero_choice.data) {
      rosidl_runtime_c__String__init(&ros_message->superhero_choice);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->superhero_choice,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'superhero_choice'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vending_machine_interfaces
size_t get_serialized_size_vending_machine_interfaces__srv__VendingMachine_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VendingMachine_Request__ros_msg_type * ros_message = static_cast<const _VendingMachine_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name selected_item
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->selected_item.size + 1);
  // field.name amount_inserted
  {
    size_t item_size = sizeof(ros_message->amount_inserted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name superhero_choice
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->superhero_choice.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _VendingMachine_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vending_machine_interfaces__srv__VendingMachine_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vending_machine_interfaces
size_t max_serialized_size_vending_machine_interfaces__srv__VendingMachine_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: selected_item
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: amount_inserted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: superhero_choice
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vending_machine_interfaces__srv__VendingMachine_Request;
    is_plain =
      (
      offsetof(DataType, superhero_choice) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VendingMachine_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vending_machine_interfaces__srv__VendingMachine_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VendingMachine_Request = {
  "vending_machine_interfaces::srv",
  "VendingMachine_Request",
  _VendingMachine_Request__cdr_serialize,
  _VendingMachine_Request__cdr_deserialize,
  _VendingMachine_Request__get_serialized_size,
  _VendingMachine_Request__max_serialized_size
};

static rosidl_message_type_support_t _VendingMachine_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VendingMachine_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vending_machine_interfaces, srv, VendingMachine_Request)() {
  return &_VendingMachine_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "vending_machine_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "vending_machine_interfaces/srv/detail/vending_machine__struct.h"
// already included above
// #include "vending_machine_interfaces/srv/detail/vending_machine__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // bible_verse, message, reward_message, sunday_special
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // bible_verse, message, reward_message, sunday_special

// forward declare type support functions


using _VendingMachine_Response__ros_msg_type = vending_machine_interfaces__srv__VendingMachine_Response;

static bool _VendingMachine_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VendingMachine_Response__ros_msg_type * ros_message = static_cast<const _VendingMachine_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: change
  {
    cdr << ros_message->change;
  }

  // Field name: remaining_amount
  {
    cdr << ros_message->remaining_amount;
  }

  // Field name: reward_message
  {
    const rosidl_runtime_c__String * str = &ros_message->reward_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sunday_special
  {
    const rosidl_runtime_c__String * str = &ros_message->sunday_special;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bible_verse
  {
    const rosidl_runtime_c__String * str = &ros_message->bible_verse;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _VendingMachine_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VendingMachine_Response__ros_msg_type * ros_message = static_cast<_VendingMachine_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: change
  {
    cdr >> ros_message->change;
  }

  // Field name: remaining_amount
  {
    cdr >> ros_message->remaining_amount;
  }

  // Field name: reward_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reward_message.data) {
      rosidl_runtime_c__String__init(&ros_message->reward_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reward_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reward_message'\n");
      return false;
    }
  }

  // Field name: sunday_special
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sunday_special.data) {
      rosidl_runtime_c__String__init(&ros_message->sunday_special);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sunday_special,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sunday_special'\n");
      return false;
    }
  }

  // Field name: bible_verse
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bible_verse.data) {
      rosidl_runtime_c__String__init(&ros_message->bible_verse);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bible_verse,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bible_verse'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vending_machine_interfaces
size_t get_serialized_size_vending_machine_interfaces__srv__VendingMachine_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VendingMachine_Response__ros_msg_type * ros_message = static_cast<const _VendingMachine_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name change
  {
    size_t item_size = sizeof(ros_message->change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining_amount
  {
    size_t item_size = sizeof(ros_message->remaining_amount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reward_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reward_message.size + 1);
  // field.name sunday_special
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sunday_special.size + 1);
  // field.name bible_verse
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bible_verse.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _VendingMachine_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vending_machine_interfaces__srv__VendingMachine_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vending_machine_interfaces
size_t max_serialized_size_vending_machine_interfaces__srv__VendingMachine_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: change
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: remaining_amount
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reward_message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sunday_special
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bible_verse
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vending_machine_interfaces__srv__VendingMachine_Response;
    is_plain =
      (
      offsetof(DataType, bible_verse) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VendingMachine_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vending_machine_interfaces__srv__VendingMachine_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VendingMachine_Response = {
  "vending_machine_interfaces::srv",
  "VendingMachine_Response",
  _VendingMachine_Response__cdr_serialize,
  _VendingMachine_Response__cdr_deserialize,
  _VendingMachine_Response__get_serialized_size,
  _VendingMachine_Response__max_serialized_size
};

static rosidl_message_type_support_t _VendingMachine_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VendingMachine_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vending_machine_interfaces, srv, VendingMachine_Response)() {
  return &_VendingMachine_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "vending_machine_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vending_machine_interfaces/srv/vending_machine.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t VendingMachine__callbacks = {
  "vending_machine_interfaces::srv",
  "VendingMachine",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vending_machine_interfaces, srv, VendingMachine_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vending_machine_interfaces, srv, VendingMachine_Response)(),
};

static rosidl_service_type_support_t VendingMachine__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &VendingMachine__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vending_machine_interfaces, srv, VendingMachine)() {
  return &VendingMachine__handle;
}

#if defined(__cplusplus)
}
#endif
