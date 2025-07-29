// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/yolo_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_YoloDetection_conf3
{
public:
  explicit Init_YoloDetection_conf3(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::YoloDetection conf3(::interfaces::msg::YoloDetection::_conf3_type arg)
  {
    msg_.conf3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_y3
{
public:
  explicit Init_YoloDetection_y3(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_conf3 y3(::interfaces::msg::YoloDetection::_y3_type arg)
  {
    msg_.y3 = std::move(arg);
    return Init_YoloDetection_conf3(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_x3
{
public:
  explicit Init_YoloDetection_x3(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_y3 x3(::interfaces::msg::YoloDetection::_x3_type arg)
  {
    msg_.x3 = std::move(arg);
    return Init_YoloDetection_y3(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_conf2
{
public:
  explicit Init_YoloDetection_conf2(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_x3 conf2(::interfaces::msg::YoloDetection::_conf2_type arg)
  {
    msg_.conf2 = std::move(arg);
    return Init_YoloDetection_x3(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_y2
{
public:
  explicit Init_YoloDetection_y2(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_conf2 y2(::interfaces::msg::YoloDetection::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_YoloDetection_conf2(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_x2
{
public:
  explicit Init_YoloDetection_x2(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_y2 x2(::interfaces::msg::YoloDetection::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_YoloDetection_y2(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_conf1
{
public:
  explicit Init_YoloDetection_conf1(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_x2 conf1(::interfaces::msg::YoloDetection::_conf1_type arg)
  {
    msg_.conf1 = std::move(arg);
    return Init_YoloDetection_x2(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_y1
{
public:
  explicit Init_YoloDetection_y1(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_conf1 y1(::interfaces::msg::YoloDetection::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_YoloDetection_conf1(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_x1
{
public:
  explicit Init_YoloDetection_x1(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_y1 x1(::interfaces::msg::YoloDetection::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_YoloDetection_y1(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_conf
{
public:
  explicit Init_YoloDetection_conf(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_x1 conf(::interfaces::msg::YoloDetection::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return Init_YoloDetection_x1(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_h
{
public:
  explicit Init_YoloDetection_h(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_conf h(::interfaces::msg::YoloDetection::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_YoloDetection_conf(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_w
{
public:
  explicit Init_YoloDetection_w(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_h w(::interfaces::msg::YoloDetection::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_YoloDetection_h(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_y
{
public:
  explicit Init_YoloDetection_y(::interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_w y(::interfaces::msg::YoloDetection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_YoloDetection_w(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_x
{
public:
  Init_YoloDetection_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloDetection_y x(::interfaces::msg::YoloDetection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_YoloDetection_y(msg_);
  }

private:
  ::interfaces::msg::YoloDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::YoloDetection>()
{
  return interfaces::msg::builder::Init_YoloDetection_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
