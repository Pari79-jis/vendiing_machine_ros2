// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vending_machine_interfaces:srv/VendingMachine.idl
// generated code does not contain a copyright notice
#include "vending_machine_interfaces/srv/detail/vending_machine__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `selected_item`
// Member `superhero_choice`
#include "rosidl_runtime_c/string_functions.h"

bool
vending_machine_interfaces__srv__VendingMachine_Request__init(vending_machine_interfaces__srv__VendingMachine_Request * msg)
{
  if (!msg) {
    return false;
  }
  // selected_item
  if (!rosidl_runtime_c__String__init(&msg->selected_item)) {
    vending_machine_interfaces__srv__VendingMachine_Request__fini(msg);
    return false;
  }
  // amount_inserted
  // superhero_choice
  if (!rosidl_runtime_c__String__init(&msg->superhero_choice)) {
    vending_machine_interfaces__srv__VendingMachine_Request__fini(msg);
    return false;
  }
  return true;
}

void
vending_machine_interfaces__srv__VendingMachine_Request__fini(vending_machine_interfaces__srv__VendingMachine_Request * msg)
{
  if (!msg) {
    return;
  }
  // selected_item
  rosidl_runtime_c__String__fini(&msg->selected_item);
  // amount_inserted
  // superhero_choice
  rosidl_runtime_c__String__fini(&msg->superhero_choice);
}

bool
vending_machine_interfaces__srv__VendingMachine_Request__are_equal(const vending_machine_interfaces__srv__VendingMachine_Request * lhs, const vending_machine_interfaces__srv__VendingMachine_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // selected_item
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->selected_item), &(rhs->selected_item)))
  {
    return false;
  }
  // amount_inserted
  if (lhs->amount_inserted != rhs->amount_inserted) {
    return false;
  }
  // superhero_choice
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->superhero_choice), &(rhs->superhero_choice)))
  {
    return false;
  }
  return true;
}

bool
vending_machine_interfaces__srv__VendingMachine_Request__copy(
  const vending_machine_interfaces__srv__VendingMachine_Request * input,
  vending_machine_interfaces__srv__VendingMachine_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // selected_item
  if (!rosidl_runtime_c__String__copy(
      &(input->selected_item), &(output->selected_item)))
  {
    return false;
  }
  // amount_inserted
  output->amount_inserted = input->amount_inserted;
  // superhero_choice
  if (!rosidl_runtime_c__String__copy(
      &(input->superhero_choice), &(output->superhero_choice)))
  {
    return false;
  }
  return true;
}

vending_machine_interfaces__srv__VendingMachine_Request *
vending_machine_interfaces__srv__VendingMachine_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vending_machine_interfaces__srv__VendingMachine_Request * msg = (vending_machine_interfaces__srv__VendingMachine_Request *)allocator.allocate(sizeof(vending_machine_interfaces__srv__VendingMachine_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vending_machine_interfaces__srv__VendingMachine_Request));
  bool success = vending_machine_interfaces__srv__VendingMachine_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vending_machine_interfaces__srv__VendingMachine_Request__destroy(vending_machine_interfaces__srv__VendingMachine_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vending_machine_interfaces__srv__VendingMachine_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vending_machine_interfaces__srv__VendingMachine_Request__Sequence__init(vending_machine_interfaces__srv__VendingMachine_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vending_machine_interfaces__srv__VendingMachine_Request * data = NULL;

  if (size) {
    data = (vending_machine_interfaces__srv__VendingMachine_Request *)allocator.zero_allocate(size, sizeof(vending_machine_interfaces__srv__VendingMachine_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vending_machine_interfaces__srv__VendingMachine_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vending_machine_interfaces__srv__VendingMachine_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vending_machine_interfaces__srv__VendingMachine_Request__Sequence__fini(vending_machine_interfaces__srv__VendingMachine_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vending_machine_interfaces__srv__VendingMachine_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vending_machine_interfaces__srv__VendingMachine_Request__Sequence *
vending_machine_interfaces__srv__VendingMachine_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vending_machine_interfaces__srv__VendingMachine_Request__Sequence * array = (vending_machine_interfaces__srv__VendingMachine_Request__Sequence *)allocator.allocate(sizeof(vending_machine_interfaces__srv__VendingMachine_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vending_machine_interfaces__srv__VendingMachine_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vending_machine_interfaces__srv__VendingMachine_Request__Sequence__destroy(vending_machine_interfaces__srv__VendingMachine_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vending_machine_interfaces__srv__VendingMachine_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vending_machine_interfaces__srv__VendingMachine_Request__Sequence__are_equal(const vending_machine_interfaces__srv__VendingMachine_Request__Sequence * lhs, const vending_machine_interfaces__srv__VendingMachine_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vending_machine_interfaces__srv__VendingMachine_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vending_machine_interfaces__srv__VendingMachine_Request__Sequence__copy(
  const vending_machine_interfaces__srv__VendingMachine_Request__Sequence * input,
  vending_machine_interfaces__srv__VendingMachine_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vending_machine_interfaces__srv__VendingMachine_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vending_machine_interfaces__srv__VendingMachine_Request * data =
      (vending_machine_interfaces__srv__VendingMachine_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vending_machine_interfaces__srv__VendingMachine_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vending_machine_interfaces__srv__VendingMachine_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vending_machine_interfaces__srv__VendingMachine_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `reward_message`
// Member `sunday_special`
// Member `bible_verse`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
vending_machine_interfaces__srv__VendingMachine_Response__init(vending_machine_interfaces__srv__VendingMachine_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    vending_machine_interfaces__srv__VendingMachine_Response__fini(msg);
    return false;
  }
  // change
  // remaining_amount
  // reward_message
  if (!rosidl_runtime_c__String__init(&msg->reward_message)) {
    vending_machine_interfaces__srv__VendingMachine_Response__fini(msg);
    return false;
  }
  // sunday_special
  if (!rosidl_runtime_c__String__init(&msg->sunday_special)) {
    vending_machine_interfaces__srv__VendingMachine_Response__fini(msg);
    return false;
  }
  // bible_verse
  if (!rosidl_runtime_c__String__init(&msg->bible_verse)) {
    vending_machine_interfaces__srv__VendingMachine_Response__fini(msg);
    return false;
  }
  return true;
}

void
vending_machine_interfaces__srv__VendingMachine_Response__fini(vending_machine_interfaces__srv__VendingMachine_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // change
  // remaining_amount
  // reward_message
  rosidl_runtime_c__String__fini(&msg->reward_message);
  // sunday_special
  rosidl_runtime_c__String__fini(&msg->sunday_special);
  // bible_verse
  rosidl_runtime_c__String__fini(&msg->bible_verse);
}

bool
vending_machine_interfaces__srv__VendingMachine_Response__are_equal(const vending_machine_interfaces__srv__VendingMachine_Response * lhs, const vending_machine_interfaces__srv__VendingMachine_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // change
  if (lhs->change != rhs->change) {
    return false;
  }
  // remaining_amount
  if (lhs->remaining_amount != rhs->remaining_amount) {
    return false;
  }
  // reward_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reward_message), &(rhs->reward_message)))
  {
    return false;
  }
  // sunday_special
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sunday_special), &(rhs->sunday_special)))
  {
    return false;
  }
  // bible_verse
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bible_verse), &(rhs->bible_verse)))
  {
    return false;
  }
  return true;
}

bool
vending_machine_interfaces__srv__VendingMachine_Response__copy(
  const vending_machine_interfaces__srv__VendingMachine_Response * input,
  vending_machine_interfaces__srv__VendingMachine_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // change
  output->change = input->change;
  // remaining_amount
  output->remaining_amount = input->remaining_amount;
  // reward_message
  if (!rosidl_runtime_c__String__copy(
      &(input->reward_message), &(output->reward_message)))
  {
    return false;
  }
  // sunday_special
  if (!rosidl_runtime_c__String__copy(
      &(input->sunday_special), &(output->sunday_special)))
  {
    return false;
  }
  // bible_verse
  if (!rosidl_runtime_c__String__copy(
      &(input->bible_verse), &(output->bible_verse)))
  {
    return false;
  }
  return true;
}

vending_machine_interfaces__srv__VendingMachine_Response *
vending_machine_interfaces__srv__VendingMachine_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vending_machine_interfaces__srv__VendingMachine_Response * msg = (vending_machine_interfaces__srv__VendingMachine_Response *)allocator.allocate(sizeof(vending_machine_interfaces__srv__VendingMachine_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vending_machine_interfaces__srv__VendingMachine_Response));
  bool success = vending_machine_interfaces__srv__VendingMachine_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vending_machine_interfaces__srv__VendingMachine_Response__destroy(vending_machine_interfaces__srv__VendingMachine_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vending_machine_interfaces__srv__VendingMachine_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vending_machine_interfaces__srv__VendingMachine_Response__Sequence__init(vending_machine_interfaces__srv__VendingMachine_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vending_machine_interfaces__srv__VendingMachine_Response * data = NULL;

  if (size) {
    data = (vending_machine_interfaces__srv__VendingMachine_Response *)allocator.zero_allocate(size, sizeof(vending_machine_interfaces__srv__VendingMachine_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vending_machine_interfaces__srv__VendingMachine_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vending_machine_interfaces__srv__VendingMachine_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vending_machine_interfaces__srv__VendingMachine_Response__Sequence__fini(vending_machine_interfaces__srv__VendingMachine_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vending_machine_interfaces__srv__VendingMachine_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vending_machine_interfaces__srv__VendingMachine_Response__Sequence *
vending_machine_interfaces__srv__VendingMachine_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vending_machine_interfaces__srv__VendingMachine_Response__Sequence * array = (vending_machine_interfaces__srv__VendingMachine_Response__Sequence *)allocator.allocate(sizeof(vending_machine_interfaces__srv__VendingMachine_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vending_machine_interfaces__srv__VendingMachine_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vending_machine_interfaces__srv__VendingMachine_Response__Sequence__destroy(vending_machine_interfaces__srv__VendingMachine_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vending_machine_interfaces__srv__VendingMachine_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vending_machine_interfaces__srv__VendingMachine_Response__Sequence__are_equal(const vending_machine_interfaces__srv__VendingMachine_Response__Sequence * lhs, const vending_machine_interfaces__srv__VendingMachine_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vending_machine_interfaces__srv__VendingMachine_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vending_machine_interfaces__srv__VendingMachine_Response__Sequence__copy(
  const vending_machine_interfaces__srv__VendingMachine_Response__Sequence * input,
  vending_machine_interfaces__srv__VendingMachine_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vending_machine_interfaces__srv__VendingMachine_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vending_machine_interfaces__srv__VendingMachine_Response * data =
      (vending_machine_interfaces__srv__VendingMachine_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vending_machine_interfaces__srv__VendingMachine_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vending_machine_interfaces__srv__VendingMachine_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vending_machine_interfaces__srv__VendingMachine_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
