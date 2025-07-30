// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:action/Perception.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__PERCEPTION__BUILDER_HPP_
#define INTERFACES__ACTION__DETAIL__PERCEPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/action/detail/perception__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Perception_Goal_run
{
public:
  Init_Perception_Goal_run()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Perception_Goal run(::interfaces::action::Perception_Goal::_run_type arg)
  {
    msg_.run = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Perception_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Perception_Goal>()
{
  return interfaces::action::builder::Init_Perception_Goal_run();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Perception_Result_yolo_result
{
public:
  Init_Perception_Result_yolo_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Perception_Result yolo_result(::interfaces::action::Perception_Result::_yolo_result_type arg)
  {
    msg_.yolo_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Perception_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Perception_Result>()
{
  return interfaces::action::builder::Init_Perception_Result_yolo_result();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Perception_Feedback_status
{
public:
  Init_Perception_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Perception_Feedback status(::interfaces::action::Perception_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Perception_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Perception_Feedback>()
{
  return interfaces::action::builder::Init_Perception_Feedback_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Perception_SendGoal_Request_goal
{
public:
  explicit Init_Perception_SendGoal_Request_goal(::interfaces::action::Perception_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Perception_SendGoal_Request goal(::interfaces::action::Perception_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Perception_SendGoal_Request msg_;
};

class Init_Perception_SendGoal_Request_goal_id
{
public:
  Init_Perception_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Perception_SendGoal_Request_goal goal_id(::interfaces::action::Perception_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Perception_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces::action::Perception_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Perception_SendGoal_Request>()
{
  return interfaces::action::builder::Init_Perception_SendGoal_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Perception_SendGoal_Response_stamp
{
public:
  explicit Init_Perception_SendGoal_Response_stamp(::interfaces::action::Perception_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Perception_SendGoal_Response stamp(::interfaces::action::Perception_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Perception_SendGoal_Response msg_;
};

class Init_Perception_SendGoal_Response_accepted
{
public:
  Init_Perception_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Perception_SendGoal_Response_stamp accepted(::interfaces::action::Perception_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Perception_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces::action::Perception_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Perception_SendGoal_Response>()
{
  return interfaces::action::builder::Init_Perception_SendGoal_Response_accepted();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Perception_GetResult_Request_goal_id
{
public:
  Init_Perception_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Perception_GetResult_Request goal_id(::interfaces::action::Perception_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Perception_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Perception_GetResult_Request>()
{
  return interfaces::action::builder::Init_Perception_GetResult_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Perception_GetResult_Response_result
{
public:
  explicit Init_Perception_GetResult_Response_result(::interfaces::action::Perception_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Perception_GetResult_Response result(::interfaces::action::Perception_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Perception_GetResult_Response msg_;
};

class Init_Perception_GetResult_Response_status
{
public:
  Init_Perception_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Perception_GetResult_Response_result status(::interfaces::action::Perception_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Perception_GetResult_Response_result(msg_);
  }

private:
  ::interfaces::action::Perception_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Perception_GetResult_Response>()
{
  return interfaces::action::builder::Init_Perception_GetResult_Response_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Perception_FeedbackMessage_feedback
{
public:
  explicit Init_Perception_FeedbackMessage_feedback(::interfaces::action::Perception_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Perception_FeedbackMessage feedback(::interfaces::action::Perception_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Perception_FeedbackMessage msg_;
};

class Init_Perception_FeedbackMessage_goal_id
{
public:
  Init_Perception_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Perception_FeedbackMessage_feedback goal_id(::interfaces::action::Perception_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Perception_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces::action::Perception_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Perception_FeedbackMessage>()
{
  return interfaces::action::builder::Init_Perception_FeedbackMessage_goal_id();
}

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__PERCEPTION__BUILDER_HPP_
