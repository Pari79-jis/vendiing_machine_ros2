// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vending_machine_interfaces:srv/VendingMachine.idl
// generated code does not contain a copyright notice

#ifndef VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__TRAITS_HPP_
#define VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vending_machine_interfaces/srv/detail/vending_machine__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vending_machine_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VendingMachine_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: selected_item
  {
    out << "selected_item: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_item, out);
    out << ", ";
  }

  // member: amount_inserted
  {
    out << "amount_inserted: ";
    rosidl_generator_traits::value_to_yaml(msg.amount_inserted, out);
    out << ", ";
  }

  // member: superhero_choice
  {
    out << "superhero_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.superhero_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VendingMachine_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: selected_item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_item: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_item, out);
    out << "\n";
  }

  // member: amount_inserted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amount_inserted: ";
    rosidl_generator_traits::value_to_yaml(msg.amount_inserted, out);
    out << "\n";
  }

  // member: superhero_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "superhero_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.superhero_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VendingMachine_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vending_machine_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use vending_machine_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vending_machine_interfaces::srv::VendingMachine_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vending_machine_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vending_machine_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const vending_machine_interfaces::srv::VendingMachine_Request & msg)
{
  return vending_machine_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vending_machine_interfaces::srv::VendingMachine_Request>()
{
  return "vending_machine_interfaces::srv::VendingMachine_Request";
}

template<>
inline const char * name<vending_machine_interfaces::srv::VendingMachine_Request>()
{
  return "vending_machine_interfaces/srv/VendingMachine_Request";
}

template<>
struct has_fixed_size<vending_machine_interfaces::srv::VendingMachine_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vending_machine_interfaces::srv::VendingMachine_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vending_machine_interfaces::srv::VendingMachine_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vending_machine_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VendingMachine_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: change
  {
    out << "change: ";
    rosidl_generator_traits::value_to_yaml(msg.change, out);
    out << ", ";
  }

  // member: remaining_amount
  {
    out << "remaining_amount: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_amount, out);
    out << ", ";
  }

  // member: reward_message
  {
    out << "reward_message: ";
    rosidl_generator_traits::value_to_yaml(msg.reward_message, out);
    out << ", ";
  }

  // member: sunday_special
  {
    out << "sunday_special: ";
    rosidl_generator_traits::value_to_yaml(msg.sunday_special, out);
    out << ", ";
  }

  // member: bible_verse
  {
    out << "bible_verse: ";
    rosidl_generator_traits::value_to_yaml(msg.bible_verse, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VendingMachine_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change: ";
    rosidl_generator_traits::value_to_yaml(msg.change, out);
    out << "\n";
  }

  // member: remaining_amount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_amount: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_amount, out);
    out << "\n";
  }

  // member: reward_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reward_message: ";
    rosidl_generator_traits::value_to_yaml(msg.reward_message, out);
    out << "\n";
  }

  // member: sunday_special
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sunday_special: ";
    rosidl_generator_traits::value_to_yaml(msg.sunday_special, out);
    out << "\n";
  }

  // member: bible_verse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bible_verse: ";
    rosidl_generator_traits::value_to_yaml(msg.bible_verse, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VendingMachine_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vending_machine_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use vending_machine_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vending_machine_interfaces::srv::VendingMachine_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vending_machine_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vending_machine_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const vending_machine_interfaces::srv::VendingMachine_Response & msg)
{
  return vending_machine_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vending_machine_interfaces::srv::VendingMachine_Response>()
{
  return "vending_machine_interfaces::srv::VendingMachine_Response";
}

template<>
inline const char * name<vending_machine_interfaces::srv::VendingMachine_Response>()
{
  return "vending_machine_interfaces/srv/VendingMachine_Response";
}

template<>
struct has_fixed_size<vending_machine_interfaces::srv::VendingMachine_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vending_machine_interfaces::srv::VendingMachine_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vending_machine_interfaces::srv::VendingMachine_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vending_machine_interfaces::srv::VendingMachine>()
{
  return "vending_machine_interfaces::srv::VendingMachine";
}

template<>
inline const char * name<vending_machine_interfaces::srv::VendingMachine>()
{
  return "vending_machine_interfaces/srv/VendingMachine";
}

template<>
struct has_fixed_size<vending_machine_interfaces::srv::VendingMachine>
  : std::integral_constant<
    bool,
    has_fixed_size<vending_machine_interfaces::srv::VendingMachine_Request>::value &&
    has_fixed_size<vending_machine_interfaces::srv::VendingMachine_Response>::value
  >
{
};

template<>
struct has_bounded_size<vending_machine_interfaces::srv::VendingMachine>
  : std::integral_constant<
    bool,
    has_bounded_size<vending_machine_interfaces::srv::VendingMachine_Request>::value &&
    has_bounded_size<vending_machine_interfaces::srv::VendingMachine_Response>::value
  >
{
};

template<>
struct is_service<vending_machine_interfaces::srv::VendingMachine>
  : std::true_type
{
};

template<>
struct is_service_request<vending_machine_interfaces::srv::VendingMachine_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vending_machine_interfaces::srv::VendingMachine_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VENDING_MACHINE_INTERFACES__SRV__DETAIL__VENDING_MACHINE__TRAITS_HPP_
