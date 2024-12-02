// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynorb_interface:srv/DynClass.idl
// generated code does not contain a copyright notice

#ifndef DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__TRAITS_HPP_
#define DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynorb_interface/srv/detail/dyn_class__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynorb_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const DynClass_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynClass_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynClass_Request & msg, bool use_flow_style = false)
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

}  // namespace dynorb_interface

namespace rosidl_generator_traits
{

[[deprecated("use dynorb_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynorb_interface::srv::DynClass_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynorb_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynorb_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynorb_interface::srv::DynClass_Request & msg)
{
  return dynorb_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynorb_interface::srv::DynClass_Request>()
{
  return "dynorb_interface::srv::DynClass_Request";
}

template<>
inline const char * name<dynorb_interface::srv::DynClass_Request>()
{
  return "dynorb_interface/srv/DynClass_Request";
}

template<>
struct has_fixed_size<dynorb_interface::srv::DynClass_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynorb_interface::srv::DynClass_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynorb_interface::srv::DynClass_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynorb_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const DynClass_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cat
  {
    out << "cat: ";
    rosidl_generator_traits::value_to_yaml(msg.cat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynClass_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cat: ";
    rosidl_generator_traits::value_to_yaml(msg.cat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynClass_Response & msg, bool use_flow_style = false)
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

}  // namespace dynorb_interface

namespace rosidl_generator_traits
{

[[deprecated("use dynorb_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynorb_interface::srv::DynClass_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynorb_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynorb_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynorb_interface::srv::DynClass_Response & msg)
{
  return dynorb_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynorb_interface::srv::DynClass_Response>()
{
  return "dynorb_interface::srv::DynClass_Response";
}

template<>
inline const char * name<dynorb_interface::srv::DynClass_Response>()
{
  return "dynorb_interface/srv/DynClass_Response";
}

template<>
struct has_fixed_size<dynorb_interface::srv::DynClass_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynorb_interface::srv::DynClass_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynorb_interface::srv::DynClass_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynorb_interface::srv::DynClass>()
{
  return "dynorb_interface::srv::DynClass";
}

template<>
inline const char * name<dynorb_interface::srv::DynClass>()
{
  return "dynorb_interface/srv/DynClass";
}

template<>
struct has_fixed_size<dynorb_interface::srv::DynClass>
  : std::integral_constant<
    bool,
    has_fixed_size<dynorb_interface::srv::DynClass_Request>::value &&
    has_fixed_size<dynorb_interface::srv::DynClass_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynorb_interface::srv::DynClass>
  : std::integral_constant<
    bool,
    has_bounded_size<dynorb_interface::srv::DynClass_Request>::value &&
    has_bounded_size<dynorb_interface::srv::DynClass_Response>::value
  >
{
};

template<>
struct is_service<dynorb_interface::srv::DynClass>
  : std::true_type
{
};

template<>
struct is_service_request<dynorb_interface::srv::DynClass_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynorb_interface::srv::DynClass_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__TRAITS_HPP_
