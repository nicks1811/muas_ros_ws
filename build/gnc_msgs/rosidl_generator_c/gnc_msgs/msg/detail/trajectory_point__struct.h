// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gnc_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef GNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define GNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'velocity'
// Member 'acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/TrajectoryPoint in the package gnc_msgs.
typedef struct gnc_msgs__msg__TrajectoryPoint
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Vector3 velocity;
  geometry_msgs__msg__Vector3 acceleration;
  float yaw;
} gnc_msgs__msg__TrajectoryPoint;

// Struct for a sequence of gnc_msgs__msg__TrajectoryPoint.
typedef struct gnc_msgs__msg__TrajectoryPoint__Sequence
{
  gnc_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gnc_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
