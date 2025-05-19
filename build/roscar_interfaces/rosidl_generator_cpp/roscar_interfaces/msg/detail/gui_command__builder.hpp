// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roscar_interfaces:msg/GuiCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roscar_interfaces/msg/gui_command.hpp"


#ifndef ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__BUILDER_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roscar_interfaces/msg/detail/gui_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roscar_interfaces
{

namespace msg
{

namespace builder
{

class Init_GuiCommand_user_id
{
public:
  explicit Init_GuiCommand_user_id(::roscar_interfaces::msg::GuiCommand & msg)
  : msg_(msg)
  {}
  ::roscar_interfaces::msg::GuiCommand user_id(::roscar_interfaces::msg::GuiCommand::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roscar_interfaces::msg::GuiCommand msg_;
};

class Init_GuiCommand_command
{
public:
  Init_GuiCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GuiCommand_user_id command(::roscar_interfaces::msg::GuiCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_GuiCommand_user_id(msg_);
  }

private:
  ::roscar_interfaces::msg::GuiCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roscar_interfaces::msg::GuiCommand>()
{
  return roscar_interfaces::msg::builder::Init_GuiCommand_command();
}

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__BUILDER_HPP_
