// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wheeltec_mic_msg:msg/PcmMsg.idl
// generated code does not contain a copyright notice
#include "wheeltec_mic_msg/msg/detail/pcm_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wheeltec_mic_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wheeltec_mic_msg/msg/detail/pcm_msg__struct.h"
#include "wheeltec_mic_msg/msg/detail/pcm_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // pcm_buf
#include "rosidl_runtime_c/string_functions.h"  // pcm_buf

// forward declare type support functions


using _PcmMsg__ros_msg_type = wheeltec_mic_msg__msg__PcmMsg;

static bool _PcmMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PcmMsg__ros_msg_type * ros_message = static_cast<const _PcmMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: pcm_buf
  {
    size_t size = ros_message->pcm_buf.size;
    auto array_ptr = ros_message->pcm_buf.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _PcmMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PcmMsg__ros_msg_type * ros_message = static_cast<_PcmMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: pcm_buf
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pcm_buf.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->pcm_buf);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->pcm_buf, size)) {
      fprintf(stderr, "failed to create array for field 'pcm_buf'");
      return false;
    }
    auto array_ptr = ros_message->pcm_buf.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'pcm_buf'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wheeltec_mic_msg
size_t get_serialized_size_wheeltec_mic_msg__msg__PcmMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PcmMsg__ros_msg_type * ros_message = static_cast<const _PcmMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pcm_buf
  {
    size_t array_size = ros_message->pcm_buf.size;
    auto array_ptr = ros_message->pcm_buf.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PcmMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wheeltec_mic_msg__msg__PcmMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wheeltec_mic_msg
size_t max_serialized_size_wheeltec_mic_msg__msg__PcmMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pcm_buf
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wheeltec_mic_msg__msg__PcmMsg;
    is_plain =
      (
      offsetof(DataType, pcm_buf) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PcmMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wheeltec_mic_msg__msg__PcmMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PcmMsg = {
  "wheeltec_mic_msg::msg",
  "PcmMsg",
  _PcmMsg__cdr_serialize,
  _PcmMsg__cdr_deserialize,
  _PcmMsg__get_serialized_size,
  _PcmMsg__max_serialized_size
};

static rosidl_message_type_support_t _PcmMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PcmMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wheeltec_mic_msg, msg, PcmMsg)() {
  return &_PcmMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
