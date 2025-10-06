// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gnc_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef GNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define GNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gnc_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gnc_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_yaw
{
public:
  explicit Init_TrajectoryPoint_yaw(::gnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::gnc_msgs::msg::TrajectoryPoint yaw(::gnc_msgs::msg::TrajectoryPoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_acceleration
{
public:
  explicit Init_TrajectoryPoint_acceleration(::gnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_yaw acceleration(::gnc_msgs::msg::TrajectoryPoint::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrajectoryPoint_yaw(msg_);
  }

private:
  ::gnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_velocity
{
public:
  explicit Init_TrajectoryPoint_velocity(::gnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_acceleration velocity(::gnc_msgs::msg::TrajectoryPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrajectoryPoint_acceleration(msg_);
  }

private:
  ::gnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_position
{
public:
  explicit Init_TrajectoryPoint_position(::gnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_velocity position(::gnc_msgs::msg::TrajectoryPoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrajectoryPoint_velocity(msg_);
  }

private:
  ::gnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_header
{
public:
  Init_TrajectoryPoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_position header(::gnc_msgs::msg::TrajectoryPoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryPoint_position(msg_);
  }

private:
  ::gnc_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gnc_msgs::msg::TrajectoryPoint>()
{
  return gnc_msgs::msg::builder::Init_TrajectoryPoint_header();
}

}  // namespace gnc_msgs

#endif  // GNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
