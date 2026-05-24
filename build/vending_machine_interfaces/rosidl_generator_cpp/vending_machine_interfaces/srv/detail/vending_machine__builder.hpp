// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vending_machine_interfaces:srv/VendingMachine.idl
// generated code does not contain a copyright notice

#ifndef VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__BUILDER_HPP_
#define VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vending_machine_interfaces/srv/detail/vending_machine__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vending_machine_interfaces
{

namespace srv
{

namespace builder
{

class Init_VendingMachine_Request_superhero_choice
{
public:
  explicit Init_VendingMachine_Request_superhero_choice(::vending_machine_interfaces::srv::VendingMachine_Request & msg)
  : msg_(msg)
  {}
  ::vending_machine_interfaces::srv::VendingMachine_Request superhero_choice(::vending_machine_interfaces::srv::VendingMachine_Request::_superhero_choice_type arg)
  {
    msg_.superhero_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Request msg_;
};

class Init_VendingMachine_Request_amount_inserted
{
public:
  explicit Init_VendingMachine_Request_amount_inserted(::vending_machine_interfaces::srv::VendingMachine_Request & msg)
  : msg_(msg)
  {}
  Init_VendingMachine_Request_superhero_choice amount_inserted(::vending_machine_interfaces::srv::VendingMachine_Request::_amount_inserted_type arg)
  {
    msg_.amount_inserted = std::move(arg);
    return Init_VendingMachine_Request_superhero_choice(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Request msg_;
};

class Init_VendingMachine_Request_selected_item
{
public:
  Init_VendingMachine_Request_selected_item()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VendingMachine_Request_amount_inserted selected_item(::vending_machine_interfaces::srv::VendingMachine_Request::_selected_item_type arg)
  {
    msg_.selected_item = std::move(arg);
    return Init_VendingMachine_Request_amount_inserted(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vending_machine_interfaces::srv::VendingMachine_Request>()
{
  return vending_machine_interfaces::srv::builder::Init_VendingMachine_Request_selected_item();
}

}  // namespace vending_machine_interfaces


namespace vending_machine_interfaces
{

namespace srv
{

namespace builder
{

class Init_VendingMachine_Response_bible_verse
{
public:
  explicit Init_VendingMachine_Response_bible_verse(::vending_machine_interfaces::srv::VendingMachine_Response & msg)
  : msg_(msg)
  {}
  ::vending_machine_interfaces::srv::VendingMachine_Response bible_verse(::vending_machine_interfaces::srv::VendingMachine_Response::_bible_verse_type arg)
  {
    msg_.bible_verse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Response msg_;
};

class Init_VendingMachine_Response_sunday_special
{
public:
  explicit Init_VendingMachine_Response_sunday_special(::vending_machine_interfaces::srv::VendingMachine_Response & msg)
  : msg_(msg)
  {}
  Init_VendingMachine_Response_bible_verse sunday_special(::vending_machine_interfaces::srv::VendingMachine_Response::_sunday_special_type arg)
  {
    msg_.sunday_special = std::move(arg);
    return Init_VendingMachine_Response_bible_verse(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Response msg_;
};

class Init_VendingMachine_Response_reward_message
{
public:
  explicit Init_VendingMachine_Response_reward_message(::vending_machine_interfaces::srv::VendingMachine_Response & msg)
  : msg_(msg)
  {}
  Init_VendingMachine_Response_sunday_special reward_message(::vending_machine_interfaces::srv::VendingMachine_Response::_reward_message_type arg)
  {
    msg_.reward_message = std::move(arg);
    return Init_VendingMachine_Response_sunday_special(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Response msg_;
};

class Init_VendingMachine_Response_remaining_amount
{
public:
  explicit Init_VendingMachine_Response_remaining_amount(::vending_machine_interfaces::srv::VendingMachine_Response & msg)
  : msg_(msg)
  {}
  Init_VendingMachine_Response_reward_message remaining_amount(::vending_machine_interfaces::srv::VendingMachine_Response::_remaining_amount_type arg)
  {
    msg_.remaining_amount = std::move(arg);
    return Init_VendingMachine_Response_reward_message(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Response msg_;
};

class Init_VendingMachine_Response_change
{
public:
  explicit Init_VendingMachine_Response_change(::vending_machine_interfaces::srv::VendingMachine_Response & msg)
  : msg_(msg)
  {}
  Init_VendingMachine_Response_remaining_amount change(::vending_machine_interfaces::srv::VendingMachine_Response::_change_type arg)
  {
    msg_.change = std::move(arg);
    return Init_VendingMachine_Response_remaining_amount(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Response msg_;
};

class Init_VendingMachine_Response_message
{
public:
  explicit Init_VendingMachine_Response_message(::vending_machine_interfaces::srv::VendingMachine_Response & msg)
  : msg_(msg)
  {}
  Init_VendingMachine_Response_change message(::vending_machine_interfaces::srv::VendingMachine_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_VendingMachine_Response_change(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Response msg_;
};

class Init_VendingMachine_Response_success
{
public:
  Init_VendingMachine_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VendingMachine_Response_message success(::vending_machine_interfaces::srv::VendingMachine_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_VendingMachine_Response_message(msg_);
  }

private:
  ::vending_machine_interfaces::srv::VendingMachine_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vending_machine_interfaces::srv::VendingMachine_Response>()
{
  return vending_machine_interfaces::srv::builder::Init_VendingMachine_Response_success();
}

}  // namespace vending_machine_interfaces

#endif  // VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__BUILDER_HPP_
