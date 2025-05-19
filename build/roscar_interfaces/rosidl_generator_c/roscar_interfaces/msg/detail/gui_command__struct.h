// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roscar_interfaces:msg/GuiCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roscar_interfaces/msg/gui_command.h"


#ifndef ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__STRUCT_H_
#define ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'user_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GuiCommand in the package roscar_interfaces.
typedef struct roscar_interfaces__msg__GuiCommand
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String user_id;
} roscar_interfaces__msg__GuiCommand;

// Struct for a sequence of roscar_interfaces__msg__GuiCommand.
typedef struct roscar_interfaces__msg__GuiCommand__Sequence
{
  roscar_interfaces__msg__GuiCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roscar_interfaces__msg__GuiCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__GUI_COMMAND__STRUCT_H_
