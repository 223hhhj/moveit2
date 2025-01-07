#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include "std_msgs/msg/int32_multi_array.hpp"
#include <deque>
#include <numeric>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

class RobotController : public rclcpp::Node
{
public:
  RobotController() : Node("robot_controller")
  {
    lego_coordinates_subscription = this->create_subscription<geometry_msgs::msg::Point>(
      "/lego_coordinates", 10, 
      std::bind(&RobotController::lego_coordinates_callback, this, std::placeholders::_1));

    coordinate_buffer.clear();
  }

  void lego_coordinates_callback(const geometry_msgs::msg::Point::SharedPtr msg)
  {
    coordinate_buffer.push_back(*msg);
    if (coordinate_buffer.size() >= 60) {
      calculate_average_coordinates();
      coordinate_buffer.clear();
    }
  }

  void calculate_average_coordinates()
  {
    double sum_x = 0, sum_y = 0;
    for (const auto& point : coordinate_buffer) {
      sum_x += point.x;
      sum_y += point.y;
    }
    average_x = sum_x / coordinate_buffer.size();
    average_y = sum_y / coordinate_buffer.size();
    coordinates_ready = true;
  }

  bool are_coordinates_ready() const { return coordinates_ready; }
  double get_average_x() const { return average_x; }
  double get_average_y() const { return average_y; }

private:
  rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr lego_coordinates_subscription;
  std::deque<geometry_msgs::msg::Point> coordinate_buffer;
  double average_x = 0, average_y = 0;
  bool coordinates_ready = false;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto robot_controller = std::make_shared<RobotController>();
  
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
  
  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(robot_controller);
  executor.add_node(move_group_node);
  std::thread([&executor]() { executor.spin(); }).detach();

  static const std::string PLANNING_GROUP_ARM = "ur_manipulator";
  moveit::planning_interface::MoveGroupInterface move_group_arm(move_group_node, PLANNING_GROUP_ARM);
  const moveit::core::JointModelGroup *joint_model_group_arm = move_group_arm.getCurrentState()->getJointModelGroup(PLANNING_GROUP_ARM);

  move_group_arm.setMaxVelocityScalingFactor(0.05);

  // Go Home
  moveit::core::RobotStatePtr current_state_arm = move_group_arm.getCurrentState(10);
  std::vector<double> joint_group_positions_arm;
  current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);

  RCLCPP_INFO(LOGGER, "Going Home");
  joint_group_positions_arm[0] = -1.64;
  joint_group_positions_arm[1] = -2.27;
  joint_group_positions_arm[2] = 1.92;
  joint_group_positions_arm[3] = -1.22;
  joint_group_positions_arm[4] = -1.57;
  joint_group_positions_arm[5] = 1.57;

  move_group_arm.setJointValueTarget(joint_group_positions_arm);
  moveit::planning_interface::MoveGroupInterface::Plan my_plan_arm;
  bool success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);

  if (success_arm) {
    move_group_arm.execute(my_plan_arm);
  }

  // Wait for coordinates
  RCLCPP_INFO(LOGGER, "Waiting for lego coordinates...");
  while (rclcpp::ok() && !robot_controller->are_coordinates_ready()) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }

  // Pregrasp
  RCLCPP_INFO(LOGGER, "Moving to Pregrasp Position");
  geometry_msgs::msg::Pose target_pose1;
  target_pose1.orientation.x = 0.0;
  target_pose1.orientation.y = 1.0;
  target_pose1.orientation.z = 0.0;
  target_pose1.orientation.w = 0.0;
  target_pose1.position.x = robot_controller->get_average_x();
  target_pose1.position.y = robot_controller->get_average_y();
  target_pose1.position.z = 0.533;  // Adjust this value as needed

  move_group_arm.setPoseTarget(target_pose1);
  success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);

  if (success_arm) {
    move_group_arm.execute(my_plan_arm);
  }

  // Open gripper
  auto gripper_publisher = move_group_node->create_publisher<std_msgs::msg::Int32MultiArray>("custom_gripper", 10);
  std_msgs::msg::Int32MultiArray gripper_command;
  gripper_command.data = {50, 10};  // width: 50, force: 10
  gripper_publisher->publish(gripper_command);
  std::this_thread::sleep_for(std::chrono::seconds(5));

  // Approach
  RCLCPP_INFO(LOGGER, "Approaching object");
  std::vector<geometry_msgs::msg::Pose> approach_waypoints;
  geometry_msgs::msg::Pose target_pose2 = target_pose1;
  target_pose2.position.z -= 0.045;
  approach_waypoints.push_back(target_pose2);

  moveit_msgs::msg::RobotTrajectory trajectory_approach;
  const double jump_threshold = 0.0;
  const double eef_step = 0.01;
  double fraction = move_group_arm.computeCartesianPath(approach_waypoints, eef_step, jump_threshold, trajectory_approach);

  if (fraction != -1.0) {
    move_group_arm.execute(trajectory_approach);
  }

  // Close gripper
  gripper_command.data = {-8, 10};  // width: -8, force: 10
  gripper_publisher->publish(gripper_command);
  std::this_thread::sleep_for(std::chrono::seconds(5));

  // Lift object
  RCLCPP_INFO(LOGGER, "Lifting object");
  std::vector<geometry_msgs::msg::Pose> lift_waypoints;
  geometry_msgs::msg::Pose target_pose3 = target_pose2;
  target_pose3.position.z += 0.05;
  lift_waypoints.push_back(target_pose3);

  moveit_msgs::msg::RobotTrajectory trajectory_lift;
  fraction = move_group_arm.computeCartesianPath(lift_waypoints, eef_step, jump_threshold, trajectory_lift);

  if (fraction != -1.0) {
    move_group_arm.execute(trajectory_lift);
  }

  // Move to second home position
  RCLCPP_INFO(LOGGER, "Moving to second home position");
  joint_group_positions_arm[0] = -1.64;
  joint_group_positions_arm[1] = -2.27;
  joint_group_positions_arm[2] = 1.92;
  joint_group_positions_arm[3] = -1.22;
  joint_group_positions_arm[4] = -1.57;
  joint_group_positions_arm[5] = 1.57;

  move_group_arm.setJointValueTarget(joint_group_positions_arm);
  success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);

  if (success_arm) {
    move_group_arm.execute(my_plan_arm);
  }

  // Move along X+
  RCLCPP_INFO(LOGGER, "Moving along X+");
  std::vector<geometry_msgs::msg::Pose> move_x_waypoints;
  geometry_msgs::msg::Pose target_pose4 = move_group_arm.getCurrentPose().pose;
  target_pose4.position.x += 0.1;
  move_x_waypoints.push_back(target_pose4);

  moveit_msgs::msg::RobotTrajectory trajectory_move_x;
  fraction = move_group_arm.computeCartesianPath(move_x_waypoints, eef_step, jump_threshold, trajectory_move_x);

  if (fraction != -1.0) {
    move_group_arm.execute(trajectory_move_x);
  }

  // Move along Z-
  RCLCPP_INFO(LOGGER, "Moving along Z-");
  std::vector<geometry_msgs::msg::Pose> move_z_waypoints;
  geometry_msgs::msg::Pose target_pose5 = target_pose4;
  target_pose5.position.z -= 0.1;
  move_z_waypoints.push_back(target_pose5);

  moveit_msgs::msg::RobotTrajectory trajectory_move_z;
  fraction = move_group_arm.computeCartesianPath(move_z_waypoints, eef_step, jump_threshold, trajectory_move_z);

  if (fraction != -1.0) {
    move_group_arm.execute(trajectory_move_z);
  }

  // Open gripper to release object
  gripper_command.data = {15, 10};  // width: 15, force: 10
  gripper_publisher->publish(gripper_command);
  std::this_thread::sleep_for(std::chrono::seconds(5));

  rclcpp::shutdown();
  return 0;
}