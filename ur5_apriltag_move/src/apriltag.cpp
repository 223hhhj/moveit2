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
    csv_file_ = "/home/steven/Documents/IIIIIIIII_TEST/handeye_calibration/pose_data_record_curved.csv";
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
