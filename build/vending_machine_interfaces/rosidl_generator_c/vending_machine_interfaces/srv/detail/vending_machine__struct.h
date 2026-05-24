// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vending_machine_interfaces:srv/VendingMachine.idl
// generated code does not contain a copyright notice

#ifndef VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__STRUCT_H_
#define VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'selected_item'
// Member 'superhero_choice'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/VendingMachine in the package vending_machine_interfaces.
typedef struct vending_machine_interfaces__srv__VendingMachine_Request
{
  rosidl_runtime_c__String selected_item;
  double amount_inserted;
  rosidl_runtime_c__String superhero_choice;
} vending_machine_interfaces__srv__VendingMachine_Request;

// Struct for a sequence of vending_machine_interfaces__srv__VendingMachine_Request.
typedef struct vending_machine_interfaces__srv__VendingMachine_Request__Sequence
{
  vending_machine_interfaces__srv__VendingMachine_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vending_machine_interfaces__srv__VendingMachine_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'reward_message'
// Member 'sunday_special'
// Member 'bible_verse'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/VendingMachine in the package vending_machine_interfaces.
typedef struct vending_machine_interfaces__srv__VendingMachine_Response
{
  bool success;
  rosidl_runtime_c__String message;
  double change;
  double remaining_amount;
  rosidl_runtime_c__String reward_message;
  rosidl_runtime_c__String sunday_special;
  rosidl_runtime_c__String bible_verse;
} vending_machine_interfaces__srv__VendingMachine_Response;

// Struct for a sequence of vending_machine_interfaces__srv__VendingMachine_Response.
typedef struct vending_machine_interfaces__srv__VendingMachine_Response__Sequence
{
  vending_machine_interfaces__srv__VendingMachine_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vending_machine_interfaces__srv__VendingMachine_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__STRUCT_H_
