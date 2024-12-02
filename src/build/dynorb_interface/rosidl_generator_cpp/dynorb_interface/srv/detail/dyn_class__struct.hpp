// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynorb_interface:srv/DynClass.idl
// generated code does not contain a copyright notice

#ifndef DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__STRUCT_HPP_
#define DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynorb_interface__srv__DynClass_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynorb_interface__srv__DynClass_Request __declspec(deprecated)
#endif

namespace dynorb_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynClass_Request_
{
  using Type = DynClass_Request_<ContainerAllocator>;

  explicit DynClass_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  explicit DynClass_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynorb_interface::srv::DynClass_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynorb_interface::srv::DynClass_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynorb_interface::srv::DynClass_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynorb_interface::srv::DynClass_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynorb_interface::srv::DynClass_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynorb_interface::srv::DynClass_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynorb_interface::srv::DynClass_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynorb_interface::srv::DynClass_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynorb_interface::srv::DynClass_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynorb_interface::srv::DynClass_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynorb_interface__srv__DynClass_Request
    std::shared_ptr<dynorb_interface::srv::DynClass_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynorb_interface__srv__DynClass_Request
    std::shared_ptr<dynorb_interface::srv::DynClass_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynClass_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynClass_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynClass_Request_

// alias to use template instance with default allocator
using DynClass_Request =
  dynorb_interface::srv::DynClass_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynorb_interface


#ifndef _WIN32
# define DEPRECATED__dynorb_interface__srv__DynClass_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynorb_interface__srv__DynClass_Response __declspec(deprecated)
#endif

namespace dynorb_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynClass_Response_
{
  using Type = DynClass_Response_<ContainerAllocator>;

  explicit DynClass_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cat = 0ll;
    }
  }

  explicit DynClass_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cat = 0ll;
    }
  }

  // field types and members
  using _cat_type =
    int64_t;
  _cat_type cat;

  // setters for named parameter idiom
  Type & set__cat(
    const int64_t & _arg)
  {
    this->cat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynorb_interface::srv::DynClass_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynorb_interface::srv::DynClass_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynorb_interface::srv::DynClass_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynorb_interface::srv::DynClass_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynorb_interface::srv::DynClass_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynorb_interface::srv::DynClass_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynorb_interface::srv::DynClass_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynorb_interface::srv::DynClass_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynorb_interface::srv::DynClass_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynorb_interface::srv::DynClass_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynorb_interface__srv__DynClass_Response
    std::shared_ptr<dynorb_interface::srv::DynClass_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynorb_interface__srv__DynClass_Response
    std::shared_ptr<dynorb_interface::srv::DynClass_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynClass_Response_ & other) const
  {
    if (this->cat != other.cat) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynClass_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynClass_Response_

// alias to use template instance with default allocator
using DynClass_Response =
  dynorb_interface::srv::DynClass_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynorb_interface

namespace dynorb_interface
{

namespace srv
{

struct DynClass
{
  using Request = dynorb_interface::srv::DynClass_Request;
  using Response = dynorb_interface::srv::DynClass_Response;
};

}  // namespace srv

}  // namespace dynorb_interface

#endif  // DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__STRUCT_HPP_
