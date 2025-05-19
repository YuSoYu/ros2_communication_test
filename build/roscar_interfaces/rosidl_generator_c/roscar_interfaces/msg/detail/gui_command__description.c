// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roscar_interfaces:msg/GuiCommand.idl
// generated code does not contain a copyright notice

#include "roscar_interfaces/msg/detail/gui_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
const rosidl_type_hash_t *
roscar_interfaces__msg__GuiCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x57, 0x37, 0xfa, 0x33, 0xd3, 0x2d, 0x11,
      0x91, 0xed, 0x33, 0xaa, 0x64, 0x07, 0x25, 0xe7,
      0xc7, 0xf2, 0x2a, 0x39, 0x54, 0x76, 0x54, 0x41,
      0x4d, 0x03, 0x4e, 0x00, 0x21, 0x3a, 0xf4, 0xf5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roscar_interfaces__msg__GuiCommand__TYPE_NAME[] = "roscar_interfaces/msg/GuiCommand";

// Define type names, field names, and default values
static char roscar_interfaces__msg__GuiCommand__FIELD_NAME__command[] = "command";
static char roscar_interfaces__msg__GuiCommand__FIELD_NAME__user_id[] = "user_id";

static rosidl_runtime_c__type_description__Field roscar_interfaces__msg__GuiCommand__FIELDS[] = {
  {
    {roscar_interfaces__msg__GuiCommand__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roscar_interfaces__msg__GuiCommand__FIELD_NAME__user_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roscar_interfaces__msg__GuiCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roscar_interfaces__msg__GuiCommand__TYPE_NAME, 32, 32},
      {roscar_interfaces__msg__GuiCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string command\n"
  "string user_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roscar_interfaces__msg__GuiCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roscar_interfaces__msg__GuiCommand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roscar_interfaces__msg__GuiCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roscar_interfaces__msg__GuiCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
