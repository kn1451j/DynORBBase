// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynorb_interface:srv/FeedFrame.idl
// generated code does not contain a copyright notice

#ifndef DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__TRAITS_HPP_
#define DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynorb_interface/srv/detail/feed_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frame'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace dynorb_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const FeedFrame_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    to_flow_style_yaml(msg.frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FeedFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame:\n";
    to_block_style_yaml(msg.frame, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FeedFrame_Request & msg, bool use_flow_style = false)
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
  const dynorb_interface::srv::FeedFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynorb_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynorb_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynorb_interface::srv::FeedFrame_Request & msg)
{
  return dynorb_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynorb_interface::srv::FeedFrame_Request>()
{
  return "dynorb_interface::srv::FeedFrame_Request";
}

template<>
inline const char * name<dynorb_interface::srv::FeedFrame_Request>()
{
  return "dynorb_interface/srv/FeedFrame_Request";
}

template<>
struct has_fixed_size<dynorb_interface::srv::FeedFrame_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<dynorb_interface::srv::FeedFrame_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<dynorb_interface::srv::FeedFrame_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'seg'
// already included above
// #include "sensor_msgs/msg/detail/image__traits.hpp"

namespace dynorb_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const FeedFrame_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: seg
  {
    out << "seg: ";
    to_flow_style_yaml(msg.seg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FeedFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: seg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg:\n";
    to_block_style_yaml(msg.seg, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FeedFrame_Response & msg, bool use_flow_style = false)
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
  const dynorb_interface::srv::FeedFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynorb_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynorb_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynorb_interface::srv::FeedFrame_Response & msg)
{
  return dynorb_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynorb_interface::srv::FeedFrame_Response>()
{
  return "dynorb_interface::srv::FeedFrame_Response";
}

template<>
inline const char * name<dynorb_interface::srv::FeedFrame_Response>()
{
  return "dynorb_interface/srv/FeedFrame_Response";
}

template<>
struct has_fixed_size<dynorb_interface::srv::FeedFrame_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<dynorb_interface::srv::FeedFrame_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<dynorb_interface::srv::FeedFrame_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynorb_interface::srv::FeedFrame>()
{
  return "dynorb_interface::srv::FeedFrame";
}

template<>
inline const char * name<dynorb_interface::srv::FeedFrame>()
{
  return "dynorb_interface/srv/FeedFrame";
}

template<>
struct has_fixed_size<dynorb_interface::srv::FeedFrame>
  : std::integral_constant<
    bool,
    has_fixed_size<dynorb_interface::srv::FeedFrame_Request>::value &&
    has_fixed_size<dynorb_interface::srv::FeedFrame_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynorb_interface::srv::FeedFrame>
  : std::integral_constant<
    bool,
    has_bounded_size<dynorb_interface::srv::FeedFrame_Request>::value &&
    has_bounded_size<dynorb_interface::srv::FeedFrame_Response>::value
  >
{
};

template<>
struct is_service<dynorb_interface::srv::FeedFrame>
  : std::true_type
{
};

template<>
struct is_service_request<dynorb_interface::srv::FeedFrame_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynorb_interface::srv::FeedFrame_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__TRAITS_HPP_
