// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
#define INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/YoloDetection in the package interfaces.
typedef struct interfaces__msg__YoloDetection
{
  float x;
  float y;
  float w;
  float h;
  float conf;
  float x1;
  float y1;
  float conf1;
  float x2;
  float y2;
  float conf2;
  float x3;
  float y3;
  float conf3;
} interfaces__msg__YoloDetection;

// Struct for a sequence of interfaces__msg__YoloDetection.
typedef struct interfaces__msg__YoloDetection__Sequence
{
  interfaces__msg__YoloDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__YoloDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
