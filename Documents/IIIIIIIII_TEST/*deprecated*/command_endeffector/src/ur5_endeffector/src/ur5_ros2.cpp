#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

#include <moveit_visual_tools/moveit_visual_tools.h>

#include <geometry_msgs/msg/pose.hpp>
#include <tf2/LinearMath/Quaternion.h>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
  
  // We spin up a SingleThreadedExecutor for the current state monitor to get information
  // about the robot's state.
  rclcpp::executors::SingleThreadedExecutor executor;
  //rclcpp::executors::MultiThreadedExecutor executor(rclcpp::ExecutorOptions(),16); //we don't need multithreadedexecutor
  executor.add_node(move_group_node);
  std::thread([&executor]() { executor.spin(); }).detach();

  static const std::string PLANNING_GROUP_ARM = "ur_manipulator"; // MoveIt operates on sets of joints called "PLANNING_GROUP_ARM" and stores them in an object
  moveit::planning_interface::MoveGroupInterface move_group_arm(move_group_node, PLANNING_GROUP_ARM);
  const moveit::core::JointModelGroup *joint_model_group_arm = move_group_arm.getCurrentState()->getJointModelGroup(PLANNING_GROUP_ARM);

  // Get Current State
  moveit::core::RobotStatePtr current_state_arm = move_group_arm.getCurrentState(10); //需要10 seconds来获取最新的状态信息, 这意味着如果在10秒内无法获取状态信息, 函数将返回一个nullptr
  std::vector<double> joint_group_positions_arm;
  current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);

  // Go Home //joint控制
  move_group_arm.setStartStateToCurrentState();
  RCLCPP_INFO(LOGGER, "Going Home");
  
  // joint control特定格式
  // 都是弧度
  joint_group_positions_arm[0] = 0.00;  // base 
  joint_group_positions_arm[1] = 0.00;  // shoulder
  joint_group_positions_arm[2] = 0.00;  // elbow
  joint_group_positions_arm[3] = 0.00;  // Wrist 1s
  joint_group_positions_arm[4] = 0.00;  // Wrist 2
  joint_group_positions_arm[5] = 0.00;  // Wrist 3

  move_group_arm.setJointValueTarget(joint_group_positions_arm);//設定目標 指令
  moveit::planning_interface::MoveGroupInterface::Plan my_plan_arm; //規劃路徑 指令(my_plan_arm名稱為自取) //這行寫一次就行
  bool success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);//確認planning 是否 successful //bool寫一次就行

  // Execute
  move_group_arm.execute(my_plan_arm);


  
  // Pregrasp
  RCLCPP_INFO(LOGGER, "Pregrasp Position");
  current_state_arm = move_group_arm.getCurrentState(10);
  current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);
  // pose control特定格式, orientation都是Quaternion
  
  //可用這兩行將euler angle轉成quaternion
  //ref1: https://wiki.ros.org/tf2/Tutorials/Quaternions
  //ref2: https://wiki.ros.org/tf2/Tutorials/Quaternions
  //tf2::Quaternion quaternion; // 
  //quaternion.setRPY(roll, pitch, yaw); //

  geometry_msgs::msg::Pose target_pose1;
  target_pose1.orientation.x = 1.0;//quaternion.getX();
  target_pose1.orientation.y = 0.0;//quaternion.getY();
  target_pose1.orientation.z = 0.0;//quaternion.getZ();
  target_pose1.orientation.w = 0.0;//quaternion.getW();
  target_pose1.position.x = 0.8;
  target_pose1.position.y = 0.3;
  target_pose1.position.z = 0.3;
  move_group_arm.setPoseTarget(target_pose1);//設定目標 指令
  success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);

  // Execute
  move_group_arm.execute(my_plan_arm);
  

  rclcpp::shutdown();
  return 0;
}