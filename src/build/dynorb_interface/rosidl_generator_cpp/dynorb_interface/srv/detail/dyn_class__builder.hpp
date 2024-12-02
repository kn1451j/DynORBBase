// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynorb_interface:srv/DynClass.idl
// generated code does not contain a copyright notice

#ifndef DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__BUILDER_HPP_
#define DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynorb_interface/srv/detail/dyn_class__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynorb_interface
{

namespace srv
{

namespace builder
{

class Init_DynClass_Request_y
{
public:
  explicit Init_DynClass_Request_y(::dynorb_interface::srv::DynClass_Request & msg)
  : msg_(msg)
  {}
  ::dynorb_interface::srv::DynClass_Request y(::dynorb_interface::srv::DynClass_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynorb_interface::srv::DynClass_Request msg_;
};

class Init_DynClass_Request_x
{
public:
  Init_DynClass_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynClass_Request_y x(::dynorb_interface::srv::DynClass_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DynClass_Request_y(msg_);
  }

private:
  ::dynorb_interface::srv::DynClass_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynorb_interface::srv::DynClass_Request>()
{
  return dynorb_interface::srv::builder::Init_DynClass_Request_x();
}

}  // namespace dynorb_interface


namespace dynorb_interface
{

namespace srv
{

namespace builder
{

class Init_DynClass_Response_cat
{
public:
  Init_DynClass_Response_cat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynorb_interface::srv::DynClass_Response cat(::dynorb_interface::srv::DynClass_Response::_cat_type arg)
  {
    msg_.cat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynorb_interface::srv::DynClass_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynorb_interface::srv::DynClass_Response>()
{
  return dynorb_interface::srv::builder::Init_DynClass_Response_cat();
}

}  // namespace dynorb_interface

#endif  // DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__BUILDER_HPP_
