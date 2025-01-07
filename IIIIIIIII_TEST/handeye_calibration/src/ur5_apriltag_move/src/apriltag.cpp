/*
//單一位置
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include <Eigen/Geometry> // Eigen library for quaternion operations
#include <cmath> // for std::radians

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

// 将度数转换为弧度
inline double toRadians(double degrees) {
    return degrees * M_PI / 180.0;
}

// 从外在（extrinsic）XYZ欧拉角到四元数
Eigen::Quaterniond eulerToQuaternionExtrinsicXYZ(double roll, double pitch, double yaw) {
    roll = toRadians(roll);
    pitch = toRadians(pitch);
    yaw = toRadians(yaw);

    Eigen::AngleAxisd rollAngle(roll, Eigen::Vector3d::UnitX());
    Eigen::AngleAxisd pitchAngle(pitch, Eigen::Vector3d::UnitY());
    Eigen::AngleAxisd yawAngle(yaw, Eigen::Vector3d::UnitZ());

    Eigen::Quaterniond q = yawAngle * pitchAngle * rollAngle;
    return q;
}

// 从内在（intrinsic）XYZ欧拉角到四元数
Eigen::Quaterniond eulerToQuaternionIntrinsicXYZ(double roll, double pitch, double yaw) {
    roll = toRadians(roll);
    pitch = toRadians(pitch);
    yaw = toRadians(yaw);

    Eigen::AngleAxisd rollAngle(roll, Eigen::Vector3d::UnitX());
    Eigen::AngleAxisd pitchAngle(pitch, Eigen::Vector3d::UnitY());
    Eigen::AngleAxisd yawAngle(yaw, Eigen::Vector3d::UnitZ());

    Eigen::Quaterniond q = rollAngle * pitchAngle * yawAngle;
    return q;
}

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(move_group_node);
    std::thread([&executor]() { executor.spin(); }).detach();
    static const std::string PLANNING_GROUP_ARM = "ur_manipulator"; // MoveIt operates on sets of joints called "PLANNING_GROUP_ARM" and stores them in an object
    moveit::planning_interface::MoveGroupInterface move_group_arm(move_group_node, PLANNING_GROUP_ARM);
    const moveit::core::JointModelGroup *joint_model_group_arm = move_group_arm.getCurrentState()->getJointModelGroup(PLANNING_GROUP_ARM);
    move_group_arm.setMaxVelocityScalingFactor(0.8);
    move_group_arm.setMaxAccelerationScalingFactor(0.8);

    // Get Current State
    moveit::core::RobotStatePtr current_state_arm = move_group_arm.getCurrentState(10); //需要10 seconds来获取最新的状态信息, 这意味着如果在10秒内无法获取状态信息, 函数将返回一个nullptr
    std::vector<double> joint_group_positions_arm;
    current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);

    // Go Home //joint控制
    move_group_arm.setStartStateToCurrentState();
    RCLCPP_INFO(LOGGER, "Going Home");
    move_group_arm.setPlanningTime(20.0); // increase the planning time from the default 5 seconds to be sure the planner has enough time to succeed.
    move_group_arm.setJointValueTarget(joint_group_positions_arm);//設定目標 指令
    moveit::planning_interface::MoveGroupInterface::Plan my_plan_arm; //声明了一个变量my_plan_arm//這行寫一次就行
    bool success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);//規劃路徑 指令(my_plan_arm名稱為自取)>並且確認planning 是否 successful //bool寫一次就行

    // Pregrasp
    RCLCPP_INFO(LOGGER, "Pregrasp Position");
    current_state_arm = move_group_arm.getCurrentState(10);
    current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);
    geometry_msgs::msg::Pose target_pose1; 

    // Euler angles in degrees
    double roll = 0.0;  // X-axis rotation in degrees
    double pitch = 0.0; // Y-axis rotation in degrees
    double yaw = 180.0;   // Z-axis rotation in degrees

    //Eigen::Quaterniond qExtrinsic = eulerToQuaternionExtrinsicXYZ(roll, pitch, yaw);
    Eigen::Quaterniond quaternion = eulerToQuaternionIntrinsicXYZ(roll, pitch, yaw);
    
    target_pose1.orientation.x = quaternion.x();
    target_pose1.orientation.y = quaternion.y();
    target_pose1.orientation.z = quaternion.z();
    target_pose1.orientation.w = quaternion.w();
    target_pose1.position.x = 0.25;
    target_pose1.position.y = -0.75;
    target_pose1.position.z = 0.14;
    move_group_arm.setPoseTarget(target_pose1);//設定目標 指令
    success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);

    // Execute
    int attempts = 0;
    int max_attempts = 10;
    while (!success_arm && attempts < max_attempts) {
        RCLCPP_WARN(LOGGER, "Planning attempt %d failed, retrying...", attempts + 1);
        success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
        attempts++;
    }
    if (success_arm) {
        move_group_arm.execute(my_plan_arm);
        RCLCPP_INFO(LOGGER, "Execution successful");
    } else {
        RCLCPP_ERROR(LOGGER, "Failed to plan and execute to the pregrasp position after %d attempts", attempts);
    }
    rclcpp::shutdown();
    return 0;
}
*/

/*
//(平面版本)發送record訊號+接收位置訊號+紀錄到csv
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <geometry_msgs/msg/pose.hpp>
#include <std_msgs/msg/string.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <fstream>
#include <chrono>
#include <filesystem>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <cmath>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

class RecordPublisherAndPoseSubscriber : public rclcpp::Node {
public:
  RecordPublisherAndPoseSubscriber()
  : Node("record_publisher_and_pose_subscriber") {
    publisher_ = this->create_publisher<std_msgs::msg::String>("zed_camera/record", 10);
    subscription_ = this->create_subscription<geometry_msgs::msg::Pose>(
      "zed_camera/pose_average", rclcpp::QoS(10),
      std::bind(&RecordPublisherAndPoseSubscriber::pose_callback, this, std::placeholders::_1));

    // 設定CSV檔案路徑和標題
    csv_file_ = "/home/steven/pose_data_record_flat.csv";
    if (!std::filesystem::exists(csv_file_)) {
      std::ofstream file(csv_file_);
      file << "timestamp,arm_position_x,arm_position_y,arm_position_z,arm_orientation_x,arm_orientation_y,arm_orientation_z,arm_orientation_w,"
           << "cam_position_x,cam_position_y,cam_position_z,cam_orientation_x,cam_orientation_y,cam_orientation_z,cam_orientation_w\n";
      file.close();
    }
  }

  void publish_record_signal() {
    auto msg = std::make_shared<std_msgs::msg::String>();
    msg->data = "record";
    publisher_->publish(*msg);
    RCLCPP_INFO(this->get_logger(), "Publishing: 'record'");
  }

  void pose_callback(const geometry_msgs::msg::Pose::SharedPtr msg) {
    std::lock_guard<std::mutex> lock(mutex_);
    cam_position_x_ = msg->position.x ;
    cam_position_y_ = msg->position.y;
    cam_position_z_ = msg->position.z;
    cam_orientation_x_ = msg->orientation.x;
    cam_orientation_y_ = msg->orientation.y;
    cam_orientation_z_ = msg->orientation.z;
    cam_orientation_w_ = msg->orientation.w;
    cv_.notify_one();
  }

  void record_pose_to_csv(const geometry_msgs::msg::Pose &pose) {
    std::ofstream file;
    file.open(csv_file_, std::ios::app);

    auto now = std::chrono::system_clock::now();
    auto now_c = std::chrono::system_clock::to_time_t(now);
    file << std::put_time(std::localtime(&now_c), "%Y-%m-%d %H:%M:%S") << ","
         << pose.position.x << "," << pose.position.y << "," << pose.position.z << ","
         << pose.orientation.x << "," << pose.orientation.y << "," << pose.orientation.z << "," << pose.orientation.w << ",";

    file.close();
  }

  void update_csv_with_camera_data() {
    std::ofstream file;
    file.open(csv_file_, std::ios::app);

    file << cam_position_x_ << "," << cam_position_y_ << "," << cam_position_z_ << ","
         << cam_orientation_x_ << "," << cam_orientation_y_ << "," << cam_orientation_z_ << "," << cam_orientation_w_ << "\n";

    file.close();
  }

  void wait_for_camera_pose() {
    std::unique_lock<std::mutex> lock(mutex_);
    cv_.wait(lock);
  }

private:
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr subscription_;
  std::string csv_file_;
  std::condition_variable cv_;
  std::mutex mutex_;
  double cam_position_x_, cam_position_y_, cam_position_z_;
  double cam_orientation_x_, cam_orientation_y_, cam_orientation_z_, cam_orientation_w_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<RecordPublisherAndPoseSubscriber>();

  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(node);
  std::thread([&executor]() { executor.spin(); }).detach();

  static const std::string PLANNING_GROUP_ARM = "ur_manipulator";
  moveit::planning_interface::MoveGroupInterface move_group_arm(node, PLANNING_GROUP_ARM);

  move_group_arm.setMaxVelocityScalingFactor(0.8);
  move_group_arm.setMaxAccelerationScalingFactor(0.8);

  geometry_msgs::msg::Pose target_pose1;
  target_pose1.orientation.x = 0.0;
  target_pose1.orientation.y = 0.0;
  target_pose1.orientation.z = 0.0;
  target_pose1.orientation.w = 1.0;
  target_pose1.position.x = -0.21;
  target_pose1.position.y = -0.780;
  target_pose1.position.z = 0.140;

  std::vector<std::array<double, 4>> quaternions = {
    {0.0, 0.0, 0.0, 1.0},
    {0.0, 0.0, 0.38268343, 0.92387953},
    {0.17101007, -0.17101007, 0.03015369, 0.96984631},
    {-0.17101007, -0.17101007, -0.03015369, 0.96984631},
    {-0.17101007, 0.17101007, 0.03015369, 0.96984631},
    {0.17101007, 0.17101007, -0.03015369, 0.96984631}
  };

  moveit::planning_interface::MoveGroupInterface::Plan my_plan_arm;
  int max_attempts = 10;

  auto y_move_in_steps = [&](double start_y, double end_y, int steps) {
    double step_size = (end_y - start_y) / steps;
    for (int i = 0; i <= steps; ++i) {
      target_pose1.position.y = start_y + i * step_size;

      for (const auto& quat : quaternions) {
        RCLCPP_INFO(LOGGER, "Setting target pose");

        geometry_msgs::msg::Pose target_pose;
        target_pose.orientation.x = quat[0];
        target_pose.orientation.y = quat[1];
        target_pose.orientation.z = quat[2];
        target_pose.orientation.w = quat[3];
        target_pose.position.x = target_pose1.position.x;
        target_pose.position.y = target_pose1.position.y;
        target_pose.position.z = target_pose1.position.z;
        move_group_arm.setPoseTarget(target_pose);

        bool success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);

        int attempts = 0;
        if (success_arm) {
          move_group_arm.execute(my_plan_arm);
          node->record_pose_to_csv(target_pose);

          std::this_thread::sleep_for(std::chrono::milliseconds(2500));
          node->publish_record_signal();
          node->wait_for_camera_pose();
          node->update_csv_with_camera_data();

          std::this_thread::sleep_for(std::chrono::milliseconds(500));  // 等0.5秒再繼續
        } else {
          while (!success_arm && attempts < max_attempts) {
            success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
            attempts++;
          }
          if (success_arm) {
            move_group_arm.execute(my_plan_arm);
            node->record_pose_to_csv(target_pose);

            std::this_thread::sleep_for(std::chrono::milliseconds(2500));
            node->publish_record_signal();
            node->wait_for_camera_pose();
            node->update_csv_with_camera_data();

            std::this_thread::sleep_for(std::chrono::milliseconds(500));  // 等0.5秒再繼續
          } else {
            RCLCPP_ERROR(LOGGER, "Failed to plan and execute after %d attempts", max_attempts);
            break;
          }
        }
      }
    }
  };

  auto x_move_in_steps = [&](double start_x, double end_x, int steps) {
    double step_size = (end_x - start_x) / steps;
    for (int i = 0; i <= steps; ++i) {
      target_pose1.position.x = start_x + i * step_size;

      y_move_in_steps(-0.780, -0.520, 8);

      RCLCPP_INFO(LOGGER, "Moving X to %f", target_pose1.position.x);
      move_group_arm.setPoseTarget(target_pose1);
      bool success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);

      if (success_arm) {
        move_group_arm.execute(my_plan_arm);
        node->record_pose_to_csv(target_pose1);

        std::this_thread::sleep_for(std::chrono::seconds(2));
        node->publish_record_signal();
        node->wait_for_camera_pose();
        node->update_csv_with_camera_data();

        std::this_thread::sleep_for(std::chrono::milliseconds(2500));  // 等0.5秒再繼續
      } else {
        int attempts = 0;
        while (!success_arm && attempts < max_attempts) {
          success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
          attempts++;
        }
        if (success_arm) {
          move_group_arm.execute(my_plan_arm);
          node->record_pose_to_csv(target_pose1);

          std::this_thread::sleep_for(std::chrono::milliseconds(2500));
          node->publish_record_signal();
          node->wait_for_camera_pose();
          node->update_csv_with_camera_data();

          std::this_thread::sleep_for(std::chrono::milliseconds(500));  // 等0.5秒再繼續
        } else {
          RCLCPP_ERROR(LOGGER, "Failed to plan and execute after %d attempts", max_attempts);
          break;
        }
      }
    }
  };

  x_move_in_steps(-0.210, 0.31, 16);

  rclcpp::shutdown();
  return 0;
  }
*/


//(曲面版本)發送record訊號+接收位置訊號+紀錄到csv
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <geometry_msgs/msg/pose.hpp>
#include <std_msgs/msg/string.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <fstream>
#include <chrono>
#include <filesystem>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <cmath>
#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include <Eigen/Geometry> // Eigen library for quaternion operations
#include <cmath> // for std::radians

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

class RecordPublisherAndPoseSubscriber : public rclcpp::Node {
public:
  RecordPublisherAndPoseSubscriber()
  : Node("record_publisher_and_pose_subscriber") {
    publisher_ = this->create_publisher<std_msgs::msg::String>("zed_camera/record", 10);
    subscription_ = this->create_subscription<geometry_msgs::msg::Pose>(
      "zed_camera/pose_average", rclcpp::QoS(10),
      std::bind(&RecordPublisherAndPoseSubscriber::pose_callback, this, std::placeholders::_1));

    // 設定CSV檔案路徑和標題
    csv_file_ = "/home/steven/pose_data_record_curved.csv";
    if (!std::filesystem::exists(csv_file_)) {
      std::ofstream file(csv_file_);
      file << "timestamp,arm_position_x,arm_position_y,arm_position_z,arm_orientation_x,arm_orientation_y,arm_orientation_z,arm_orientation_w,"
           << "cam_position_x,cam_position_y,cam_position_z,cam_orientation_x,cam_orientation_y,cam_orientation_z,cam_orientation_w\n";
      file.close();
    }
  }
  
  void publish_record_signal() {
    auto msg = std::make_shared<std_msgs::msg::String>();
    msg->data = "record";
    publisher_->publish(*msg);
    RCLCPP_INFO(this->get_logger(), "Publishing: 'record'");
  }

  void pose_callback(const geometry_msgs::msg::Pose::SharedPtr msg) {
    std::lock_guard<std::mutex> lock(mutex_);
    cam_position_x_ = msg->position.x ;
    cam_position_y_ = msg->position.y;
    cam_position_z_ = msg->position.z;
    cam_orientation_x_ = msg->orientation.x;
    cam_orientation_y_ = msg->orientation.y;
    cam_orientation_z_ = msg->orientation.z;
    cam_orientation_w_ = msg->orientation.w;
    cv_.notify_one();
  }

  void record_pose_to_csv(const geometry_msgs::msg::Pose &pose) {
    std::ofstream file;
    file.open(csv_file_, std::ios::app);

    auto now = std::chrono::system_clock::now();
    auto now_c = std::chrono::system_clock::to_time_t(now);
    file << std::put_time(std::localtime(&now_c), "%Y-%m-%d %H:%M:%S") << ","
         << pose.position.x << "," << pose.position.y << "," << pose.position.z << ","
         << pose.orientation.x << "," << pose.orientation.y << "," << pose.orientation.z << "," << pose.orientation.w << ",";

    file.close();
  }

  void update_csv_with_camera_data() {
    std::ofstream file;
    file.open(csv_file_, std::ios::app);

    file << cam_position_x_ << "," << cam_position_y_ << "," << cam_position_z_ << ","
         << cam_orientation_x_ << "," << cam_orientation_y_ << "," << cam_orientation_z_ << "," << cam_orientation_w_ << "\n";

    file.close();
  }

  void wait_for_camera_pose() {
    std::unique_lock<std::mutex> lock(mutex_);
    cv_.wait(lock);
  }

private:
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr subscription_;
  std::string csv_file_;
  std::condition_variable cv_;
  std::mutex mutex_;
  double cam_position_x_, cam_position_y_, cam_position_z_;
  double cam_orientation_x_, cam_orientation_y_, cam_orientation_z_, cam_orientation_w_;
};

// 将度数转换为弧度
inline double toRadians(double degrees) {
    return degrees * M_PI / 180.0;
}

// 从外在（extrinsic）XYZ欧拉角到四元数
Eigen::Quaterniond eulerToQuaternionExtrinsicXYZ(double roll, double pitch, double yaw) {
    roll = toRadians(roll);
    pitch = toRadians(pitch);
    yaw = toRadians(yaw);

    Eigen::AngleAxisd rollAngle(roll, Eigen::Vector3d::UnitX());
    Eigen::AngleAxisd pitchAngle(pitch, Eigen::Vector3d::UnitY());
    Eigen::AngleAxisd yawAngle(yaw, Eigen::Vector3d::UnitZ());

    Eigen::Quaterniond q = yawAngle * pitchAngle * rollAngle;
    return q;
}

// 从内在（intrinsic）XYZ欧拉角到四元数
Eigen::Quaterniond eulerToQuaternionIntrinsicXYZ(double roll, double pitch, double yaw) {
    roll = toRadians(roll);
    pitch = toRadians(pitch);
    yaw = toRadians(yaw);

    Eigen::AngleAxisd rollAngle(roll, Eigen::Vector3d::UnitX());
    Eigen::AngleAxisd pitchAngle(pitch, Eigen::Vector3d::UnitY());
    Eigen::AngleAxisd yawAngle(yaw, Eigen::Vector3d::UnitZ());

    Eigen::Quaterniond q = rollAngle * pitchAngle * yawAngle;
    return q;
}

double interpolateZ(double x) {
  double x_start = -0.185;
  double x_end = 0.25;
  double z_start = 0.220;
  double z_mid = 0.14;
  double x_mid = 0.0325;
  
  if (x <= x_mid) {
    return z_start + (z_mid - z_start) * ((x - x_start) / (x_mid - x_start));
  } else {
    return z_mid + (z_start - z_mid) * ((x - x_mid) / (x_end - x_mid));
  }
}

double interpolatePitch(double x) {
  double x_start = -0.185;
  double x_end = 0.25;
  double pitch_start = 45.0;
  double pitch_end = -45.0;
  double x_mid = 0.0325;
  double pitch_mid = 0.0;
  
  if (x <= x_mid) {
    return pitch_start + (pitch_mid - pitch_start) * ((x - x_start) / (x_mid - x_start));
  } else {
    return pitch_mid + (pitch_end - pitch_mid) * ((x - x_mid) / (x_end - x_mid));
  }
}

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<RecordPublisherAndPoseSubscriber>();

  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(node);
  std::thread([&executor]() { executor.spin(); }).detach();

  static const std::string PLANNING_GROUP_ARM = "ur_manipulator";
  moveit::planning_interface::MoveGroupInterface move_group_arm(node, PLANNING_GROUP_ARM);

  move_group_arm.setMaxVelocityScalingFactor(1.0);
  move_group_arm.setMaxAccelerationScalingFactor(1.0);

  // Euler angles in degrees
  double roll = 0.0;  // X-axis rotation in degrees
    
  geometry_msgs::msg::Pose target_pose1;
  target_pose1.orientation.x = 0.0;
  target_pose1.orientation.y = 0.0;
  target_pose1.orientation.z = 0.0;
  target_pose1.orientation.w = 1.0;
  target_pose1.position.x = -0.185;
  target_pose1.position.y = -0.750;
  target_pose1.position.z = 0.220;

  moveit::planning_interface::MoveGroupInterface::Plan my_plan_arm;
  int max_attempts = 10;

  std::vector<double> yaw_angles = {0.0, 90.0, 180.0, 270.0};

  auto move_to_target_pose = [&](const geometry_msgs::msg::Pose &pose) {
    move_group_arm.setPoseTarget(pose);
    bool success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);

    if (success_arm) {
      move_group_arm.execute(my_plan_arm);
      node->record_pose_to_csv(pose);

      std::this_thread::sleep_for(std::chrono::milliseconds(2500));
      node->publish_record_signal();
      node->wait_for_camera_pose();
      node->update_csv_with_camera_data();

      std::this_thread::sleep_for(std::chrono::milliseconds(500));  // 等0.5秒再繼續
    } else {
      int attempts = 0;
      while (!success_arm && attempts < max_attempts) {
        success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
        attempts++;
      }
      if (success_arm) {
        move_group_arm.execute(my_plan_arm);
        node->record_pose_to_csv(pose);

        std::this_thread::sleep_for(std::chrono::milliseconds(2500));
        node->publish_record_signal();
        node->wait_for_camera_pose();
        node->update_csv_with_camera_data();

        std::this_thread::sleep_for(std::chrono::milliseconds(500));  // 等0.5秒再繼續
      } else {
        RCLCPP_ERROR(LOGGER, "Failed to plan and execute after %d attempts", max_attempts);
      }
    }
  };

  auto y_move_in_steps = [&](double start_y, double end_y, int steps, double x, double z, double pitch) {
    double step_size = (end_y - start_y) / steps;
    for (int i = 0; i <= steps; ++i) {
      target_pose1.position.y = start_y + i * step_size;
      target_pose1.position.x = x;
      target_pose1.position.z = z;

      for (double yaw : yaw_angles) {
        Eigen::Quaterniond quaternion = eulerToQuaternionIntrinsicXYZ(roll, pitch, yaw);
        target_pose1.orientation.x = quaternion.x();
        target_pose1.orientation.y = quaternion.y();
        target_pose1.orientation.z = quaternion.z();
        target_pose1.orientation.w = quaternion.w();
        move_to_target_pose(target_pose1);
      }
    }
  };

  auto x_move_in_steps = [&](double start_x, double end_x, int steps) {
    double step_size = (end_x - start_x) / steps;
    for (int i = 0; i <= steps; ++i) {
      double x = start_x + i * step_size;
      double z = interpolateZ(x);
      double pitch = interpolatePitch(x);

      y_move_in_steps(-0.750, -0.540, 7, x, z, pitch);
    }
  };

  x_move_in_steps(-0.185, 0.25, 15);

  rclcpp::shutdown();
  return 0;
}
