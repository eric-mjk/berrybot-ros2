// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__YoloDetection __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__YoloDetection __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloDetection_
{
  using Type = YoloDetection_<ContainerAllocator>;

  explicit YoloDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->w = 0.0f;
      this->h = 0.0f;
      this->conf = 0.0f;
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->conf1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
      this->conf2 = 0.0f;
      this->x3 = 0.0f;
      this->y3 = 0.0f;
      this->conf3 = 0.0f;
    }
  }

  explicit YoloDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->w = 0.0f;
      this->h = 0.0f;
      this->conf = 0.0f;
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->conf1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
      this->conf2 = 0.0f;
      this->x3 = 0.0f;
      this->y3 = 0.0f;
      this->conf3 = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _w_type =
    float;
  _w_type w;
  using _h_type =
    float;
  _h_type h;
  using _conf_type =
    float;
  _conf_type conf;
  using _x1_type =
    float;
  _x1_type x1;
  using _y1_type =
    float;
  _y1_type y1;
  using _conf1_type =
    float;
  _conf1_type conf1;
  using _x2_type =
    float;
  _x2_type x2;
  using _y2_type =
    float;
  _y2_type y2;
  using _conf2_type =
    float;
  _conf2_type conf2;
  using _x3_type =
    float;
  _x3_type x3;
  using _y3_type =
    float;
  _y3_type y3;
  using _conf3_type =
    float;
  _conf3_type conf3;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__w(
    const float & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__h(
    const float & _arg)
  {
    this->h = _arg;
    return *this;
  }
  Type & set__conf(
    const float & _arg)
  {
    this->conf = _arg;
    return *this;
  }
  Type & set__x1(
    const float & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const float & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__conf1(
    const float & _arg)
  {
    this->conf1 = _arg;
    return *this;
  }
  Type & set__x2(
    const float & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const float & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__conf2(
    const float & _arg)
  {
    this->conf2 = _arg;
    return *this;
  }
  Type & set__x3(
    const float & _arg)
  {
    this->x3 = _arg;
    return *this;
  }
  Type & set__y3(
    const float & _arg)
  {
    this->y3 = _arg;
    return *this;
  }
  Type & set__conf3(
    const float & _arg)
  {
    this->conf3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::YoloDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::YoloDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::YoloDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::YoloDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::YoloDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::YoloDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::YoloDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::YoloDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::YoloDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::YoloDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__YoloDetection
    std::shared_ptr<interfaces::msg::YoloDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__YoloDetection
    std::shared_ptr<interfaces::msg::YoloDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloDetection_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    if (this->conf != other.conf) {
      return false;
    }
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->conf1 != other.conf1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->conf2 != other.conf2) {
      return false;
    }
    if (this->x3 != other.x3) {
      return false;
    }
    if (this->y3 != other.y3) {
      return false;
    }
    if (this->conf3 != other.conf3) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloDetection_

// alias to use template instance with default allocator
using YoloDetection =
  interfaces::msg::YoloDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_
