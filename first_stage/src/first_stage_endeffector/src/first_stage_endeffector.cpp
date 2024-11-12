#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include "std_msgs/msg/int32_multi_array.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "std_msgs/msg/int8.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

class RobotController : public rclcpp::Node
{
public:
  RobotController() : Node("robot_controller"), state_(State::INIT), orientation_type_(-1), gripper_state_("FALSE")
  {
    coordinates_subscription = this->create_subscription<geometry_msgs::msg::Point>(
      "/lego_coordinates", 10, 
      std::bind(&RobotController::coordinatesCallback, this, std::placeholders::_1));

    orientation_subscription = this->create_subscription<geometry_msgs::msg::Quaternion>(
      "/lego_orientation", 10, 
      std::bind(&RobotController::orientationCallback, this, std::placeholders::_1));

    timer_ = this->create_wall_timer(std::chrono::milliseconds(100),
      std::bind(&RobotController::timerCallback, this));

    orientation_type_subscription = this->create_subscription<std_msgs::msg::Int8>(
      "/lego_orientation_type", 10,
      std::bind(&RobotController::orientationTypeCallback, this, std::placeholders::_1));
    
    gripper_state_subscription_ = this->create_subscription<std_msgs::msg::String>(
      "/gripper_state", 10, 
      std::bind(&RobotController::gripperStateCallback, this, std::placeholders::_1));   

    gripper_publisher = this->create_publisher<std_msgs::msg::Int32MultiArray>("custom_gripper", 10);

    timer_ = this->create_wall_timer(std::chrono::milliseconds(100),
      std::bind(&RobotController::timerCallback, this));

    RCLCPP_INFO(this->get_logger(), "Robot controller initialized.");
  }

private:
  enum class State {
    INIT,
    MOVE_TO_HOME,
    MOVE_TO_INTERMEDIATE,
    WAIT_AFTER_INTERMEDIATE,
    WAIT_FOR_COORDINATES,
    MOVE_TO_OBJECT,
    GRASP_OBJECT,
    CHECK_GRASP,
    MOVE_TO_OBSERVATION,
    WAIT_FOR_ORIENTATION,
    MOVE_TO_FINAL_POSITION,
    RELEASE_OBJECT,
    FINISHED
  };

  State state_;
  int orientation_type_;
  rclcpp::Time state_start_time_;
  geometry_msgs::msg::Pose target_pose_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_arm_;
  rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr coordinates_subscription;
  rclcpp::Subscription<geometry_msgs::msg::Quaternion>::SharedPtr orientation_subscription;
  rclcpp::Subscription<std_msgs::msg::Int8>::SharedPtr orientation_type_subscription;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr gripper_state_subscription_;
  rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr gripper_publisher;
  rclcpp::TimerBase::SharedPtr timer_;
  std::string gripper_state_;
  rclcpp::Time gripper_check_start_time_;
  bool coordinates_received_ = false;
  bool orientation_received_ = false;
  rclcpp::Time intermediate_move_time_;

  void timerCallback()
  {
    switch (state_) {
      case State::INIT:
        initializeMoveGroup();
        break;
      case State::MOVE_TO_HOME:
        if (goHome()) {
          setState(State::MOVE_TO_INTERMEDIATE);
        }
        break;
      case State::MOVE_TO_INTERMEDIATE:
        if (moveToIntermediate()) {
          intermediate_move_time_ = this->now();
          setState(State::WAIT_AFTER_INTERMEDIATE);
        }
        break;
      case State::WAIT_AFTER_INTERMEDIATE:
        if ((this->now() - intermediate_move_time_).seconds() >= 3.0) {
          setState(State::WAIT_FOR_COORDINATES);
        }
        break;
      case State::WAIT_FOR_COORDINATES:
        // 在這個狀態下，我們等待坐標和方向信息
        // 實際的處理在coordinatesCallback和orientationCallback中進行
        break;
      case State::MOVE_TO_OBJECT:
        if (moveToObject()) {
          setState(State::GRASP_OBJECT);
        }
        break;
      case State::GRASP_OBJECT:
        if (graspObject()) {
          gripper_check_start_time_ = this->now();
          setState(State::CHECK_GRASP);
        }
        break;
      case State::CHECK_GRASP:
        if ((this->now() - gripper_check_start_time_).seconds() >= 3.0) {
          if (gripper_state_ == "TRUE") {
            RCLCPP_INFO(this->get_logger(), "Grasp successful");
            setState(State::MOVE_TO_OBSERVATION);
          } else {
            RCLCPP_INFO(this->get_logger(), "Grasp failed, resetting to wait for coordinates");
            setState(State::WAIT_FOR_COORDINATES);
          }
        }
        break;
      case State::MOVE_TO_OBSERVATION:
        if (moveToObservation()) {
          setState(State::WAIT_FOR_ORIENTATION);
          state_start_time_ = this->now();
        }
        break;
      case State::WAIT_FOR_ORIENTATION:
        if (orientation_type_ != -1 || 
            (this->now() - state_start_time_).seconds() > 3.0) {
          setState(State::MOVE_TO_FINAL_POSITION);  
        }
        break;
      case State::MOVE_TO_FINAL_POSITION:
        if (moveToFinalPosition()) {
          setState(State::RELEASE_OBJECT);
        }
        break;
      case State::RELEASE_OBJECT:
        if (releaseObject()) {
          setState(State::FINISHED);
        }
        break;
      case State::FINISHED:
        RCLCPP_INFO(this->get_logger(), "Task completed.");
        break;
    }
  }

  void setState(State new_state)
  {
    state_ = new_state;
    RCLCPP_INFO(this->get_logger(), "Entering state: %s", stateToString(state_).c_str());
  }

  void initializeMoveGroup()
  {
    move_group_arm_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), "ur_manipulator");
    move_group_arm_->setMaxVelocityScalingFactor(0.1);
    RCLCPP_INFO(this->get_logger(), "MoveGroupInterface initialized.");
    setState(State::MOVE_TO_HOME);
  }

  bool goHome()
  {
    if (!move_group_arm_) {
      RCLCPP_ERROR(this->get_logger(), "MoveGroupInterface not initialized");
      return false;
    }

    move_group_arm_->setStartStateToCurrentState();
    RCLCPP_INFO(this->get_logger(), "Going Home");

    std::vector<double> joint_group_positions = {-1.64, -2.27, 1.92, -1.22, -1.57, 1.57};
    move_group_arm_->setPlanningTime(20.0);
    move_group_arm_->setJointValueTarget(joint_group_positions);

    return executePlan();
  }

  bool moveToIntermediate()
  {
    if (!move_group_arm_) {
      RCLCPP_ERROR(this->get_logger(), "MoveGroupInterface not initialized");
      return false;
    }

    RCLCPP_INFO(this->get_logger(), "Moving to intermediate position");
    std::vector<double> intermediate_position = {-2.17, -1.24, 0.68, -1.01, -1.57, 2.52};
    move_group_arm_->setJointValueTarget(intermediate_position);
    move_group_arm_->setPlanningTime(10.0);

    return executePlan();
  }

  bool moveToObject()
  {
    if (!move_group_arm_) {
      RCLCPP_ERROR(this->get_logger(), "MoveGroupInterface not initialized");
      return false;
    }

    RCLCPP_INFO(this->get_logger(), "Moving to object");
    move_group_arm_->setPoseTarget(target_pose_);

    return executePlan();
  }

  bool graspObject()
  {
    RCLCPP_INFO(LOGGER, "Grasping object");
    publishGripperCommand(40, 10);  // Open gripper
    rclcpp::sleep_for(std::chrono::seconds(2));

    geometry_msgs::msg::Pose approach_pose = target_pose_;
    approach_pose.position.z -= 0.095;
    std::vector<geometry_msgs::msg::Pose> waypoints{approach_pose};
    if (!moveGroupCartesianPath(waypoints)) {
      RCLCPP_ERROR(LOGGER, "Failed to approach object");
      return false;
    }

    publishGripperCommand(6, 10);  // Close gripper
    rclcpp::sleep_for(std::chrono::seconds(2));
    return true;
  }

  bool moveToObservation()
  {
    RCLCPP_INFO(LOGGER, "Moving to observation position");
    if (!moveToJointPosition({-1.93, -1.58, 1.48, -1.49, -1.56, 2.74}, "Observation 0")) return false;
    // Move to first position
    if (!moveToJointPosition({-1.65, -1.42, 2.07, -2.24, -1.57, 1.53}, "Observation 1")) return false;
    
    // Open gripper
    if (!controlGripper(30, 10, "Open gripper")) return false;
    
    // Move to second position
    if (!moveToJointPosition({-1.64, -1.49, 2.01, -2.11, -1.57, 1.52}, "Observation 2")) return false;
    
    // Move to third position
    if (!moveToJointPosition({-1.75, -1.54, 2.13, -2.18, -1.57, 2.92}, "Observation 3")) return false;
    
    RCLCPP_INFO(LOGGER, "Successfully moved to observation position");
    return true;
  }

  bool moveToFinalPosition()
  {
    if (!move_group_arm_) {
      RCLCPP_ERROR(this->get_logger(), "MoveGroupInterface not initialized");
      return false;
    }

    RCLCPP_INFO(LOGGER, "Moving to final position based on orientation type: %d", orientation_type_);

    if (orientation_type_ < 0 || orientation_type_ > 3) {
      RCLCPP_ERROR(LOGGER, "Invalid orientation type: %d", orientation_type_);
      return false;
    }

    switch (orientation_type_) {
      case 0: // Front
        {

          if (!moveToJointPosition({-1.64, -1.49, 2.01, -2.11, -1.57, 1.52}, "Home 1")) return false;
          if (!moveToJointPosition({-1.64, -1.42, 2.07, -2.24, -1.57, 1.52}, "Home 2")) return false;
          if (!controlGripper(30, 10, "Open gripper")) return false;
        }
        break;
      case 1: // Side-down
        {
          if (!moveToJointPosition({-1.64, -1.55, 1.93, -1.97, -1.57, 1.52}, "Home 1")) return false;
          if (!controlGripper(60, 10, "Open gripper")) return false;
          if (!moveToJointPosition({-1.69, -1.48, 2.67, -3.55, -1.47, 2.98}, "Home 2")) return false;
          if (!moveToJointPosition({-1.70, -1.35, 2.68, -3.65, -1.50, 2.98}, "Home 3")) return false;
          if (!controlGripper(30, 10, "Close gripper")) return false;
          if (!moveToJointPosition({-1.69, -1.54, 2.65, -3.67, -1.31, 2.09}, "Home 4")) return false;
          if (!moveToJointPosition({-1.69, -1.33, 2.71, -3.72, -1.50, -0.11}, "Home 5")) return false;
          if (!controlGripper(60, 10, "Open gripper")) return false;
        }
        break;
      case 2: // Side-top
        {
          if (!moveToJointPosition({-1.64, -1.49, 2.01, -2.11, -1.57, -1.3}, "Home 1")) return false;
          if (!moveToJointPosition({-1.64, -1.42, 2.07, -2.24, -1.57, -1.62}, "Home 2")) return false;
          if (!controlGripper(6, 10, "Close gripper")) return false;
          if (!moveToJointPosition({-1.64, -1.49, 2.01, -2.11, -1.57, 1.3}, "Home 3")) return false;
          if (!moveToJointPosition({-1.64, -1.42, 2.07, -2.24, -1.57, 1.52}, "Home 3")) return false;
          if (!controlGripper(30, 10, "Close gripper")) return false;
          if (!moveToJointPosition({-1.64, -1.55, 1.93, -1.97, -1.57, 1.52}, "Home 1")) return false;
          if (!controlGripper(60, 10, "Open gripper")) return false;
          if (!moveToJointPosition({-1.69, -1.48, 2.67, -3.55, -1.47, 2.98}, "Home 2")) return false;
          if (!moveToJointPosition({-1.70, -1.35, 2.68, -3.65, -1.50, 2.98}, "Home 3")) return false;
          if (!controlGripper(30, 10, "Close gripper")) return false;
          if (!moveToJointPosition({-1.69, -1.54, 2.65, -3.67, -1.31, 2.09}, "Home 4")) return false;
          if (!moveToJointPosition({-1.69, -1.33, 2.71, -3.72, -1.50, -0.11}, "Home 5")) return false;
          if (!controlGripper(60, 10, "Open gripper")) return false;
        }
        break;
      case 3: // Back
        {

          if (!moveToJointPosition({-1.64, -1.55, 1.93, -1.97, -1.57, 1.52}, "Home 1")) return false;
          if (!controlGripper(60, 10, "Open gripper")) return false;
          if (!moveToJointPosition({-1.69, -1.48, 2.67, -3.55, -1.47, 2.98}, "Home 2")) return false;
          if (!moveToJointPosition({-1.70, -1.35, 2.68, -3.65, -1.50, 2.98}, "Home 3")) return false;
          if (!controlGripper(30, 10, "Close gripper")) return false;
          if (!moveToJointPosition({-1.69, -1.57, 2.54, -3.20, -1.46, 2.91}, "Home 4")) return false;
          if (!moveToJointPosition({-1.69, -1.35, 1.78, -1.94, -1.53, 2.91}, "Home 4.5")) return false;
          if (!moveToJointPosition({-1.69, -1.13, 1.57, -1.61, -1.53, 2.91}, "Home 5")) return false;
          if (!moveToJointPosition({-1.68, -1.03, 1.39, -1.31, -1.49, 2.91}, "Home 5.5")) return false;
          if (!moveToJointPosition({-1.60, -0.74, 1.15, -1.06, -1.63, 3.13}, "Home 6")) return false;
          if (!controlGripper(60, 10, "Open gripper")) return false;
          if (!moveToJointPosition({-1.69, -1.13, 1.57, -1.61, -1.53, 2.91}, "Home 7")) return false;
          if (!moveToJointPosition({-1.69, -1.48, 2.67, -3.55, -1.47, 2.98}, "Home 8")) return false;
          if (!moveToJointPosition({-1.70, -1.35, 2.68, -3.65, -1.50, 2.98}, "Home 9")) return false;
          if (!controlGripper(30, 10, "Close gripper")) return false;
          if (!moveToJointPosition({-1.69, -1.54, 2.65, -3.67, -1.31, 2.09}, "Home 10")) return false;
          if (!moveToJointPosition({-1.69, -1.33, 2.71, -3.72, -1.50, -0.11}, "Home 11")) return false;
          if (!controlGripper(60, 10, "Open gripper")) return false;
        }
        break;
      default:
        RCLCPP_ERROR(LOGGER, "Invalid orientation type");
        return false;
    }

    return true;
  }

  bool releaseObject()
  {
    RCLCPP_INFO(LOGGER, "Releasing object");
    publishGripperCommand(30, 10);
    rclcpp::sleep_for(std::chrono::seconds(2));
    return true;
  }

  bool executePlan()
  {
    moveit::planning_interface::MoveGroupInterface::Plan my_plan;
    bool success = (move_group_arm_->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (success) {
      RCLCPP_INFO(this->get_logger(), "Executing plan");
      move_group_arm_->execute(my_plan);
    } else {
      RCLCPP_ERROR(this->get_logger(), "Planning failed");
    }

    return success;
  }

  bool moveGroupCartesianPath(const std::vector<geometry_msgs::msg::Pose>& waypoints)
  {
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group_arm_->computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);

    RCLCPP_INFO(LOGGER, "Path planned for %f of the total path.", fraction);

    if (fraction > 0.9) {
      move_group_arm_->execute(trajectory);
      return true;
    }
    return false;
  }

  void coordinatesCallback(const geometry_msgs::msg::Point::SharedPtr msg)
  {
    if (state_ == State::WAIT_FOR_COORDINATES) {
      target_pose_.position.x = msg->x;
      target_pose_.position.y = msg->y;
      target_pose_.position.z = 0.533;  // 固定高度
      coordinates_received_ = true;
      RCLCPP_INFO(this->get_logger(), "Received coordinates: x=%f, y=%f, z=%f", 
                  msg->x, msg->y, target_pose_.position.z);
      checkStateTransition();
    }
  }

  void orientationCallback(const geometry_msgs::msg::Quaternion::SharedPtr msg)
  {
    if (state_ == State::WAIT_FOR_COORDINATES) {
      target_pose_.orientation = *msg;
      orientation_received_ = true;
      RCLCPP_INFO(this->get_logger(), "Received orientation: x=%f, y=%f, z=%f, w=%f", 
                  msg->x, msg->y, msg->z, msg->w);
      checkStateTransition();
    }
  }

  void orientationTypeCallback(const std_msgs::msg::Int8::SharedPtr msg)
  {
    orientation_type_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received orientation type: %d", orientation_type_);
  }

  void gripperStateCallback(const std_msgs::msg::String::SharedPtr msg)
  {
    gripper_state_ = msg->data.substr(7);  // Remove "State: " prefix
    RCLCPP_INFO(this->get_logger(), "Gripper state: %s", gripper_state_.c_str());
  }

  void checkStateTransition()
  {
    if (coordinates_received_ && orientation_received_) {
      setState(State::MOVE_TO_OBJECT);
      coordinates_received_ = false;
      orientation_received_ = false;
    }
  }

  void publishGripperCommand(int width, int force)
  {
    std_msgs::msg::Int32MultiArray gripper_command;
    gripper_command.data = {width, force};
    RCLCPP_INFO(LOGGER, "Publishing Gripper Command: width=%d, force=%d", width, force);
    gripper_publisher->publish(gripper_command);
  }

  bool moveToJointPosition(const std::vector<double>& target_position, const std::string& position_name)
  {
    RCLCPP_INFO(LOGGER, "Moving to %s", position_name.c_str());
    move_group_arm_->setStartStateToCurrentState();
    move_group_arm_->setJointValueTarget(target_position);
    move_group_arm_->setPlanningTime(10.0);

    moveit::planning_interface::MoveGroupInterface::Plan my_plan_arm;
    
    int attempts = 0;
    const int max_attempts = 3;
    bool success_arm = false;

    while (!success_arm && attempts < max_attempts) {
      success_arm = (move_group_arm_->plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
      if (success_arm) {
        success_arm = (move_group_arm_->execute(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
      }
      attempts++;
      if (!success_arm && attempts < max_attempts) {
        RCLCPP_WARN(LOGGER, "Attempt %d failed, retrying...", attempts);
        rclcpp::sleep_for(std::chrono::seconds(1));
      }
    }

    if (success_arm) {
      RCLCPP_INFO(LOGGER, "Successfully moved to %s", position_name.c_str());
      return true;
    } else {
      RCLCPP_ERROR(LOGGER, "Failed to move to %s after %d attempts", position_name.c_str(), max_attempts);
      return false;
    }
  }

  bool controlGripper(int width, int force, const std::string& operation)
  {
    RCLCPP_INFO(LOGGER, "Performing gripper operation: %s", operation.c_str());
    publishGripperCommand(width, force);
    
    // Wait for gripper operation to complete
    rclcpp::sleep_for(std::chrono::seconds(2));
    
    return true;
  }

  std::string stateToString(State state)
  {
    switch (state) {
      case State::INIT: return "INIT";
      case State::MOVE_TO_HOME: return "MOVE_TO_HOME";
      case State::MOVE_TO_INTERMEDIATE: return "MOVE_TO_INTERMEDIATE";
      case State::WAIT_FOR_COORDINATES: return "WAIT_FOR_COORDINATES";
      case State::MOVE_TO_OBJECT: return "MOVE_TO_OBJECT";
      case State::GRASP_OBJECT: return "GRASP_OBJECT";
      case State::CHECK_GRASP: return "CHECK_GRASP";
      case State::MOVE_TO_OBSERVATION: return "MOVE_TO_OBSERVATION";
      case State::WAIT_FOR_ORIENTATION: return "WAIT_FOR_ORIENTATION";
      case State::MOVE_TO_FINAL_POSITION: return "MOVE_TO_FINAL_POSITION";
      case State::RELEASE_OBJECT: return "RELEASE_OBJECT";
      case State::FINISHED: return "FINISHED";
      default: return "UNKNOWN";
    }
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<RobotController>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}