// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/yolo_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const YoloDetection & msg,
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
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << ", ";
  }

  // member: h
  {
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << ", ";
  }

  // member: conf
  {
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << ", ";
  }

  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: conf1
  {
    out << "conf1: ";
    rosidl_generator_traits::value_to_yaml(msg.conf1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << ", ";
  }

  // member: conf2
  {
    out << "conf2: ";
    rosidl_generator_traits::value_to_yaml(msg.conf2, out);
    out << ", ";
  }

  // member: x3
  {
    out << "x3: ";
    rosidl_generator_traits::value_to_yaml(msg.x3, out);
    out << ", ";
  }

  // member: y3
  {
    out << "y3: ";
    rosidl_generator_traits::value_to_yaml(msg.y3, out);
    out << ", ";
  }

  // member: conf3
  {
    out << "conf3: ";
    rosidl_generator_traits::value_to_yaml(msg.conf3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const YoloDetection & msg,
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

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << "\n";
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << "\n";
  }

  // member: conf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << "\n";
  }

  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: conf1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf1: ";
    rosidl_generator_traits::value_to_yaml(msg.conf1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }

  // member: conf2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf2: ";
    rosidl_generator_traits::value_to_yaml(msg.conf2, out);
    out << "\n";
  }

  // member: x3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x3: ";
    rosidl_generator_traits::value_to_yaml(msg.x3, out);
    out << "\n";
  }

  // member: y3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y3: ";
    rosidl_generator_traits::value_to_yaml(msg.y3, out);
    out << "\n";
  }

  // member: conf3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf3: ";
    rosidl_generator_traits::value_to_yaml(msg.conf3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const YoloDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::YoloDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::YoloDetection & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::YoloDetection>()
{
  return "interfaces::msg::YoloDetection";
}

template<>
inline const char * name<interfaces::msg::YoloDetection>()
{
  return "interfaces/msg/YoloDetection";
}

template<>
struct has_fixed_size<interfaces::msg::YoloDetection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::YoloDetection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::YoloDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_
