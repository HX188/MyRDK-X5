// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wheeltec_mic_msg:msg/PcmMsg.idl
// generated code does not contain a copyright notice
#include "wheeltec_mic_msg/msg/detail/pcm_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wheeltec_mic_msg/msg/detail/pcm_msg__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace wheeltec_mic_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_serialize(
  const wheeltec_mic_msg::msg::PcmMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: length
  cdr << ros_message.length;
  // Member: pcm_buf
  {
    cdr << ros_message.pcm_buf;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wheeltec_mic_msg::msg::PcmMsg & ros_message)
{
  // Member: length
  cdr >> ros_message.length;

  // Member: pcm_buf
  {
    cdr >> ros_message.pcm_buf;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
get_serialized_size(
  const wheeltec_mic_msg::msg::PcmMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pcm_buf
  {
    size_t array_size = ros_message.pcm_buf.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.pcm_buf[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
max_serialized_size_PcmMsg(
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


  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pcm_buf
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
    using DataType = wheeltec_mic_msg::msg::PcmMsg;
    is_plain =
      (
      offsetof(DataType, pcm_buf) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PcmMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wheeltec_mic_msg::msg::PcmMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PcmMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wheeltec_mic_msg::msg::PcmMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PcmMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wheeltec_mic_msg::msg::PcmMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PcmMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PcmMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PcmMsg__callbacks = {
  "wheeltec_mic_msg::msg",
  "PcmMsg",
  _PcmMsg__cdr_serialize,
  _PcmMsg__cdr_deserialize,
  _PcmMsg__get_serialized_size,
  _PcmMsg__max_serialized_size
};

static rosidl_message_type_support_t _PcmMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PcmMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wheeltec_mic_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wheeltec_mic_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<wheeltec_mic_msg::msg::PcmMsg>()
{
  return &wheeltec_mic_msg::msg::typesupport_fastrtps_cpp::_PcmMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, msg, PcmMsg)() {
  return &wheeltec_mic_msg::msg::typesupport_fastrtps_cpp::_PcmMsg__handle;
}

#ifdef __cplusplus
}
#endif
