// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vending_machine_interfaces:srv/VendingMachine.idl
// generated code does not contain a copyright notice

#ifndef VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__STRUCT_HPP_
#define VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vending_machine_interfaces__srv__VendingMachine_Request __attribute__((deprecated))
#else
# define DEPRECATED__vending_machine_interfaces__srv__VendingMachine_Request __declspec(deprecated)
#endif

namespace vending_machine_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VendingMachine_Request_
{
  using Type = VendingMachine_Request_<ContainerAllocator>;

  explicit VendingMachine_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->selected_item = "";
      this->amount_inserted = 0.0;
      this->superhero_choice = "";
    }
  }

  explicit VendingMachine_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : selected_item(_alloc),
    superhero_choice(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->selected_item = "";
      this->amount_inserted = 0.0;
      this->superhero_choice = "";
    }
  }

  // field types and members
  using _selected_item_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _selected_item_type selected_item;
  using _amount_inserted_type =
    double;
  _amount_inserted_type amount_inserted;
  using _superhero_choice_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _superhero_choice_type superhero_choice;

  // setters for named parameter idiom
  Type & set__selected_item(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->selected_item = _arg;
    return *this;
  }
  Type & set__amount_inserted(
    const double & _arg)
  {
    this->amount_inserted = _arg;
    return *this;
  }
  Type & set__superhero_choice(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->superhero_choice = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vending_machine_interfaces__srv__VendingMachine_Request
    std::shared_ptr<vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vending_machine_interfaces__srv__VendingMachine_Request
    std::shared_ptr<vending_machine_interfaces::srv::VendingMachine_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VendingMachine_Request_ & other) const
  {
    if (this->selected_item != other.selected_item) {
      return false;
    }
    if (this->amount_inserted != other.amount_inserted) {
      return false;
    }
    if (this->superhero_choice != other.superhero_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const VendingMachine_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VendingMachine_Request_

// alias to use template instance with default allocator
using VendingMachine_Request =
  vending_machine_interfaces::srv::VendingMachine_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vending_machine_interfaces


#ifndef _WIN32
# define DEPRECATED__vending_machine_interfaces__srv__VendingMachine_Response __attribute__((deprecated))
#else
# define DEPRECATED__vending_machine_interfaces__srv__VendingMachine_Response __declspec(deprecated)
#endif

namespace vending_machine_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VendingMachine_Response_
{
  using Type = VendingMachine_Response_<ContainerAllocator>;

  explicit VendingMachine_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->change = 0.0;
      this->remaining_amount = 0.0;
      this->reward_message = "";
      this->sunday_special = "";
      this->bible_verse = "";
    }
  }

  explicit VendingMachine_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    reward_message(_alloc),
    sunday_special(_alloc),
    bible_verse(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->change = 0.0;
      this->remaining_amount = 0.0;
      this->reward_message = "";
      this->sunday_special = "";
      this->bible_verse = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _change_type =
    double;
  _change_type change;
  using _remaining_amount_type =
    double;
  _remaining_amount_type remaining_amount;
  using _reward_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reward_message_type reward_message;
  using _sunday_special_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sunday_special_type sunday_special;
  using _bible_verse_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bible_verse_type bible_verse;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__change(
    const double & _arg)
  {
    this->change = _arg;
    return *this;
  }
  Type & set__remaining_amount(
    const double & _arg)
  {
    this->remaining_amount = _arg;
    return *this;
  }
  Type & set__reward_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reward_message = _arg;
    return *this;
  }
  Type & set__sunday_special(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sunday_special = _arg;
    return *this;
  }
  Type & set__bible_verse(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bible_verse = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vending_machine_interfaces__srv__VendingMachine_Response
    std::shared_ptr<vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vending_machine_interfaces__srv__VendingMachine_Response
    std::shared_ptr<vending_machine_interfaces::srv::VendingMachine_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VendingMachine_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->change != other.change) {
      return false;
    }
    if (this->remaining_amount != other.remaining_amount) {
      return false;
    }
    if (this->reward_message != other.reward_message) {
      return false;
    }
    if (this->sunday_special != other.sunday_special) {
      return false;
    }
    if (this->bible_verse != other.bible_verse) {
      return false;
    }
    return true;
  }
  bool operator!=(const VendingMachine_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VendingMachine_Response_

// alias to use template instance with default allocator
using VendingMachine_Response =
  vending_machine_interfaces::srv::VendingMachine_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vending_machine_interfaces

namespace vending_machine_interfaces
{

namespace srv
{

struct VendingMachine
{
  using Request = vending_machine_interfaces::srv::VendingMachine_Request;
  using Response = vending_machine_interfaces::srv::VendingMachine_Response;
};

}  // namespace srv

}  // namespace vending_machine_interfaces

#endif  // VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__STRUCT_HPP_
