// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynorb_interface:srv/FeedFrame.idl
// generated code does not contain a copyright notice

#ifndef DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__BUILDER_HPP_
#define DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynorb_interface/srv/detail/feed_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynorb_interface
{

namespace srv
{

namespace builder
{

class Init_FeedFrame_Request_frame
{
public:
  Init_FeedFrame_Request_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynorb_interface::srv::FeedFrame_Request frame(::dynorb_interface::srv::FeedFrame_Request::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynorb_interface::srv::FeedFrame_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynorb_interface::srv::FeedFrame_Request>()
{
  return dynorb_interface::srv::builder::Init_FeedFrame_Request_frame();
}

}  // namespace dynorb_interface


namespace dynorb_interface
{

namespace srv
{

namespace builder
{

class Init_FeedFrame_Response_seg
{
public:
  Init_FeedFrame_Response_seg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynorb_interface::srv::FeedFrame_Response seg(::dynorb_interface::srv::FeedFrame_Response::_seg_type arg)
  {
    msg_.seg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynorb_interface::srv::FeedFrame_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynorb_interface::srv::FeedFrame_Response>()
{
  return dynorb_interface::srv::builder::Init_FeedFrame_Response_seg();
}

}  // namespace dynorb_interface

#endif  // DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__BUILDER_HPP_
