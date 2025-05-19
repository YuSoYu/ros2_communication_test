// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roscar_interfaces:msg/GuiCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roscar_interfaces/msg/gui_command.hpp"


#ifndef ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__TRAITS_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roscar_interfaces/msg/detail/gui_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roscar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GuiCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: user_id
  {
    out << "user_id: ";
    rosidl_generator_traits::value_to_yaml(msg.user_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GuiCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: user_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_id: ";
    rosidl_generator_traits::value_to_yaml(msg.user_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GuiCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace roscar_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use roscar_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roscar_interfaces::msg::GuiCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  roscar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roscar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const roscar_interfaces::msg::GuiCommand & msg)
{
  return roscar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roscar_interfaces::msg::GuiCommand>()
{
  return "roscar_interfaces::msg::GuiCommand";
}

template<>
inline const char * name<roscar_interfaces::msg::GuiCommand>()
{
  return "roscar_interfaces/msg/GuiCommand";
}

template<>
struct has_fixed_size<roscar_interfaces::msg::GuiCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roscar_interfaces::msg::GuiCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roscar_interfaces::msg::GuiCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__TRAITS_HPP_
