// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wheeltec_mic_msg:msg/PcmMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wheeltec_mic_msg/msg/detail/pcm_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wheeltec_mic_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PcmMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wheeltec_mic_msg::msg::PcmMsg(_init);
}

void PcmMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wheeltec_mic_msg::msg::PcmMsg *>(message_memory);
  typed_message->~PcmMsg();
}

size_t size_function__PcmMsg__pcm_buf(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PcmMsg__pcm_buf(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PcmMsg__pcm_buf(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PcmMsg__pcm_buf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PcmMsg__pcm_buf(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PcmMsg__pcm_buf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PcmMsg__pcm_buf(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PcmMsg__pcm_buf(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PcmMsg_message_member_array[2] = {
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg::msg::PcmMsg, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pcm_buf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg::msg::PcmMsg, pcm_buf),  // bytes offset in struct
    nullptr,  // default value
    size_function__PcmMsg__pcm_buf,  // size() function pointer
    get_const_function__PcmMsg__pcm_buf,  // get_const(index) function pointer
    get_function__PcmMsg__pcm_buf,  // get(index) function pointer
    fetch_function__PcmMsg__pcm_buf,  // fetch(index, &value) function pointer
    assign_function__PcmMsg__pcm_buf,  // assign(index, value) function pointer
    resize_function__PcmMsg__pcm_buf  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PcmMsg_message_members = {
  "wheeltec_mic_msg::msg",  // message namespace
  "PcmMsg",  // message name
  2,  // number of fields
  sizeof(wheeltec_mic_msg::msg::PcmMsg),
  PcmMsg_message_member_array,  // message members
  PcmMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  PcmMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PcmMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PcmMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace wheeltec_mic_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wheeltec_mic_msg::msg::PcmMsg>()
{
  return &::wheeltec_mic_msg::msg::rosidl_typesupport_introspection_cpp::PcmMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wheeltec_mic_msg, msg, PcmMsg)() {
  return &::wheeltec_mic_msg::msg::rosidl_typesupport_introspection_cpp::PcmMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
