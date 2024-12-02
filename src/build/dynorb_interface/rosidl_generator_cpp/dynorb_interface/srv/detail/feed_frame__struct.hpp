// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynorb_interface:srv/FeedFrame.idl
// generated code does not contain a copyright notice

#ifndef DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__STRUCT_HPP_
#define DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'frame'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynorb_interface__srv__FeedFrame_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynorb_interface__srv__FeedFrame_Request __declspec(deprecated)
#endif

namespace dynorb_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FeedFrame_Request_
{
  using Type = FeedFrame_Request_<ContainerAllocator>;

  explicit FeedFrame_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_init)
  {
    (void)_init;
  }

  explicit FeedFrame_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _frame_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _frame_type frame;

  // setters for named parameter idiom
  Type & set__frame(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynorb_interface__srv__FeedFrame_Request
    std::shared_ptr<dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynorb_interface__srv__FeedFrame_Request
    std::shared_ptr<dynorb_interface::srv::FeedFrame_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeedFrame_Request_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeedFrame_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeedFrame_Request_

// alias to use template instance with default allocator
using FeedFrame_Request =
  dynorb_interface::srv::FeedFrame_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynorb_interface


// Include directives for member types
// Member 'seg'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynorb_interface__srv__FeedFrame_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynorb_interface__srv__FeedFrame_Response __declspec(deprecated)
#endif

namespace dynorb_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FeedFrame_Response_
{
  using Type = FeedFrame_Response_<ContainerAllocator>;

  explicit FeedFrame_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : seg(_init)
  {
    (void)_init;
  }

  explicit FeedFrame_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : seg(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _seg_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _seg_type seg;

  // setters for named parameter idiom
  Type & set__seg(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->seg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynorb_interface__srv__FeedFrame_Response
    std::shared_ptr<dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynorb_interface__srv__FeedFrame_Response
    std::shared_ptr<dynorb_interface::srv::FeedFrame_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeedFrame_Response_ & other) const
  {
    if (this->seg != other.seg) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeedFrame_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeedFrame_Response_

// alias to use template instance with default allocator
using FeedFrame_Response =
  dynorb_interface::srv::FeedFrame_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynorb_interface

namespace dynorb_interface
{

namespace srv
{

struct FeedFrame
{
  using Request = dynorb_interface::srv::FeedFrame_Request;
  using Response = dynorb_interface::srv::FeedFrame_Response;
};

}  // namespace srv

}  // namespace dynorb_interface

#endif  // DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__STRUCT_HPP_
