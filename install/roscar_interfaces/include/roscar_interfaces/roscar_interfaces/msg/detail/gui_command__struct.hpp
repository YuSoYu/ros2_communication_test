// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roscar_interfaces:msg/GuiCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roscar_interfaces/msg/gui_command.hpp"


#ifndef ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__STRUCT_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roscar_interfaces__msg__GuiCommand __attribute__((deprecated))
#else
# define DEPRECATED__roscar_interfaces__msg__GuiCommand __declspec(deprecated)
#endif

namespace roscar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GuiCommand_
{
  using Type = GuiCommand_<ContainerAllocator>;

  explicit GuiCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->user_id = "";
    }
  }

  explicit GuiCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    user_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->user_id = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__user_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roscar_interfaces::msg::GuiCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const roscar_interfaces::msg::GuiCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roscar_interfaces::msg::GuiCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roscar_interfaces::msg::GuiCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::GuiCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::GuiCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::GuiCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::GuiCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roscar_interfaces::msg::GuiCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roscar_interfaces::msg::GuiCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roscar_interfaces__msg__GuiCommand
    std::shared_ptr<roscar_interfaces::msg::GuiCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roscar_interfaces__msg__GuiCommand
    std::shared_ptr<roscar_interfaces::msg::GuiCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GuiCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->user_id != other.user_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GuiCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GuiCommand_

// alias to use template instance with default allocator
using GuiCommand =
  roscar_interfaces::msg::GuiCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__STRUCT_HPP_
