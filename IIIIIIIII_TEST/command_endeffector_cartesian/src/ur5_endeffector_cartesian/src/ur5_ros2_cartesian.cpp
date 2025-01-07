#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
<<<<<<< HEAD
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include "std_msgs/msg/int32_multi_array.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "std_msgs/msg/bool.hpp"
#include <thread>
#include <chrono>
#include <vector>
#include <numeric>
#include <moveit_msgs/msg/robot_trajectory.hpp>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

class RobotControl : public rclcpp::Node
{
public:
    RobotControl() : Node("robot_control")
    {
        subscription_ = this->create_subscription<std_msgs::msg::Float64MultiArray>(
            "/sensor_data", 10, std::bind(&RobotControl::sensor_callback, this, std::placeholders::_1));
        
        result_publisher_ = this->create_publisher<std_msgs::msg::Bool>("force_change_result", 10);
        
        fx_values_.clear();
        current_fx_ = 0.0;
        is_recording_ = false;
    }

    void sensor_callback(const std_msgs::msg::Float64MultiArray::SharedPtr msg)
    {
        if (msg->data.size() >= 1)
        {
            current_fx_ = msg->data[0];
            if (is_recording_)
            {
                fx_values_.push_back(current_fx_);
            }
        }
    }

    void start_recording()
    {
        fx_values_.clear();
        is_recording_ = true;
    }

    void stop_recording()
    {
        is_recording_ = false;
    }

    double get_average_fx()
    {
        if (fx_values_.empty())
        {
            return 0.0;
        }
        return std::accumulate(fx_values_.begin(), fx_values_.end(), 0.0) / fx_values_.size();
    }

    double get_current_fx()
    {
        return current_fx_;
    }

    void publish_result(bool result)
    {
        std_msgs::msg::Bool msg;
        msg.data = result;
        result_publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Published result: %s", result ? "TRUE" : "FALSE");
    }

private:
    rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr result_publisher_;
    std::vector<double> fx_values_;
    double current_fx_;
    bool is_recording_;
};

void moveToPose(moveit::planning_interface::MoveGroupInterface& move_group_arm, const geometry_msgs::msg::Pose& target_pose) {
    move_group_arm.setPoseTarget(target_pose);
    moveit::planning_interface::MoveGroupInterface::Plan my_plan;
    bool success = (move_group_arm.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
    if (success) {
        move_group_arm.execute(my_plan);
    } else {
        RCLCPP_ERROR(LOGGER, "Planning failed!");
    }
}

void moveToJointPosition(moveit::planning_interface::MoveGroupInterface& move_group_arm, const std::vector<double>& joint_positions) {
    move_group_arm.setJointValueTarget(joint_positions);
    moveit::planning_interface::MoveGroupInterface::Plan my_plan;
    bool success = (move_group_arm.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
    if (success) {
        move_group_arm.execute(my_plan);
    } else {
        RCLCPP_ERROR(LOGGER, "Planning failed!");
    }
}

void controlGripper(rclcpp::Node::SharedPtr node, int width, int force) {
    auto gripper_publisher = node->create_publisher<std_msgs::msg::Int32MultiArray>("custom_gripper", 10);
    std_msgs::msg::Int32MultiArray gripper_command;
    gripper_command.data = {width, force};
    RCLCPP_INFO(LOGGER, "Publishing Gripper Command: '%d', '%d'", width, force);
    gripper_publisher->publish(gripper_command);
    std::this_thread::sleep_for(std::chrono::seconds(5));
}

void moveAlongXAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
    std::vector<geometry_msgs::msg::Pose> waypoints;
    geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
    geometry_msgs::msg::Pose target_pose = current_pose;
    
    target_pose.position.x += distance;
    waypoints.push_back(target_pose);
    
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
    
    if (fraction == -1.0 || fraction < 0.9) {
        RCLCPP_ERROR(LOGGER, "Path planning for X-axis movement failed");
    } else {
        move_group_arm.execute(trajectory);
    }
}

void moveAlongYAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
    std::vector<geometry_msgs::msg::Pose> waypoints;
    geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
    geometry_msgs::msg::Pose target_pose = current_pose;
    
    target_pose.position.y += distance;
    waypoints.push_back(target_pose);
    
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
    
    if (fraction == -1.0 || fraction < 0.9) {
        RCLCPP_ERROR(LOGGER, "Path planning for Y-axis movement failed");
    } else {
        move_group_arm.execute(trajectory);
    }
}

void moveAlongZAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
    std::vector<geometry_msgs::msg::Pose> waypoints;
    geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
    geometry_msgs::msg::Pose target_pose = current_pose;
    
    target_pose.position.z += distance;
    waypoints.push_back(target_pose);
    
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
    
    if (fraction == -1.0 || fraction < 0.9) {
        RCLCPP_ERROR(LOGGER, "Path planning for Z-axis movement failed");
    } else {
        move_group_arm.execute(trajectory);
    }
}

// 新增的輔助函數，用於調整姿勢的 y 值
void adjustPosesY(std::vector<geometry_msgs::msg::Pose>& poses, double adjustment) {
    for (int i = 2; i <= 5; ++i) {
        poses[i].position.y += adjustment;
    }
}

// 封裝主要操作的函數
void performMainOperations(moveit::planning_interface::MoveGroupInterface& move_group_arm, 
                           rclcpp::Node::SharedPtr move_group_node,
                           const std::vector<geometry_msgs::msg::Pose>& poses) {
    RCLCPP_INFO(LOGGER, "Closing gripper joint position");
    controlGripper(move_group_node, 40, 10);

    // Move to pose1
    RCLCPP_INFO(LOGGER, "Moving to pose home");
    moveToPose(move_group_arm, poses[0]);

    RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
    moveAlongZAxis(move_group_arm, -0.11);

    RCLCPP_INFO(LOGGER, "Closing gripper joint position");
    controlGripper(move_group_node, 6, 10);

    RCLCPP_INFO(LOGGER, "Closing gripper joint position");
    controlGripper(move_group_node, 30, 10);

    // Move to pose1
    RCLCPP_INFO(LOGGER, "Moving to pose0");
    moveToPose(move_group_arm, poses[1]);

    // Open gripper
    RCLCPP_INFO(LOGGER, "Opening gripper after pose0");
    controlGripper(move_group_node, 60, 10);

    // Move down along Z-axis
    RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
    moveAlongZAxis(move_group_arm, -0.11);

    // Close gripper
    RCLCPP_INFO(LOGGER, "Closing gripper at new position");
    controlGripper(move_group_node, 30, 10);

    // Open gripper
    RCLCPP_INFO(LOGGER, "Opening gripper after new joint position");
    controlGripper(move_group_node, 60, 10);

    // Move up along Z-axis
    RCLCPP_INFO(LOGGER, "Moving up along Z-axis");
    moveAlongZAxis(move_group_arm, 0.11);

    RCLCPP_INFO(LOGGER, "Closing gripper at joint position");
    controlGripper(move_group_node, 30, 10);

    RCLCPP_INFO(LOGGER, "Moving to pose home");
    moveToPose(move_group_arm, poses[0]);

    RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
    moveAlongZAxis(move_group_arm, -0.11);

    // Close gripper
    RCLCPP_INFO(LOGGER, "Closing gripper at new joint position");
    controlGripper(move_group_node, 6, 10);
}

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto robot_control_node = std::make_shared<RobotControl>();
    
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
    
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(robot_control_node);
    executor.add_node(move_group_node);
    std::thread([&executor]() { executor.spin(); }).detach();

    static const std::string PLANNING_GROUP_ARM = "ur_manipulator";
    moveit::planning_interface::MoveGroupInterface move_group_arm(move_group_node, PLANNING_GROUP_ARM);
    const moveit::core::JointModelGroup* joint_model_group_arm = move_group_arm.getCurrentState()->getJointModelGroup(PLANNING_GROUP_ARM);
    
    move_group_arm.setMaxVelocityScalingFactor(0.25);
    move_group_arm.setMaxAccelerationScalingFactor(0.25);

    // Get Current State
    moveit::core::RobotStatePtr current_state_arm = move_group_arm.getCurrentState(10);
    std::vector<double> joint_group_positions_arm;
    current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);

    // Go Home
    move_group_arm.setStartStateToCurrentState();
    RCLCPP_INFO(LOGGER, "Going Home");
    
    joint_group_positions_arm[0] = -1.64;  // base 
    joint_group_positions_arm[1] = -2.27;  // shoulder
    joint_group_positions_arm[2] = 1.92;   // elbow
    joint_group_positions_arm[3] = -1.22;  // Wrist 1
    joint_group_positions_arm[4] = -1.57;  // Wrist 2
    joint_group_positions_arm[5] = 1.57;   // Wrist 3

    moveToJointPosition(move_group_arm, joint_group_positions_arm);

    // Define all unique poses
    std::vector<geometry_msgs::msg::Pose> poses(6);
    
    // Pose 1 轉正後/直
    poses[0].orientation.x = -0.707;
    poses[0].orientation.y = 0.707;
    poses[0].orientation.z = 0.0;
    poses[0].orientation.w = 0.0;
    poses[0].position.x = 0.078;
    poses[0].position.y = -0.485;
    poses[0].position.z = 0.280;
    
    // Pose 2 轉正後/橫
    poses[1].orientation.x = 1.0;
    poses[1].orientation.y = 0.0;
    poses[1].orientation.z = 0.0;
    poses[1].orientation.w = 0.0;
    poses[1].position.x = 0.078;
    poses[1].position.y = -0.485;
    poses[1].position.z = 0.275;

    // Pose 3 平台/上/橫
    poses[2].orientation.x = 1.0;
    poses[2].orientation.y = 0.0;
    poses[2].orientation.z = 0.0;
    poses[2].orientation.w = 0.0;
    poses[2].position.x = 0.2;
    poses[2].position.y = -0.603;
    poses[2].position.z = 0.225;

    // Pose 4 平台/下/橫
    poses[3].orientation.x = 1.0;
    poses[3].orientation.y = 0.0;
    poses[3].orientation.z = 0.0;
    poses[3].orientation.w = 0.0;
    poses[3].position.x = 0.2;
    poses[3].position.y = -0.603;
    poses[3].position.z = 0.185;

    // Pose 5 旋轉壓積木
    poses[4].orientation.x = -0.707;
    poses[4].orientation.y = 0.707;
    poses[4].orientation.z = 0.0;
    poses[4].orientation.w = 0.0;
    poses[4].position.x = 0.2;
    poses[4].position.y = -0.603;
    poses[4].position.z = 0.195;

    // Pose 6 往x移動
    poses[5].orientation.x = 1.0;
    poses[5].orientation.y = 0.0;
    poses[5].orientation.z = 0.0;
    poses[5].orientation.w = 0.0;
    poses[5].position.x = 0.205;
    poses[5].position.y = -0.603;
    poses[5].position.z = 0.185;

    bool continue_operations = true;
    int cycle_count = 0;
    while (continue_operations) {
        RCLCPP_INFO(LOGGER, "Starting cycle %d", cycle_count + 1);

        // 執行主要操作
        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 40, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose home");
        moveToPose(move_group_arm, poses[0]);

        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.1);

        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 6, 10);
/**/
        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 30, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose0");
        moveToPose(move_group_arm, poses[1]);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper after pose0");
        controlGripper(move_group_node, 60, 10);

        // Move down along Z-axis
        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.1);

        // Close gripper
        RCLCPP_INFO(LOGGER, "Closing gripper at new position");
        controlGripper(move_group_node, 30, 10);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper after new joint position");
        controlGripper(move_group_node, 60, 10);

        // Move up along Z-axis
        RCLCPP_INFO(LOGGER, "Moving up along Z-axis");
        moveAlongZAxis(move_group_arm, 0.1);

        RCLCPP_INFO(LOGGER, "Closing gripper at joint position");
        controlGripper(move_group_node, 30, 10);

        RCLCPP_INFO(LOGGER, "Moving to pose home");
        moveToPose(move_group_arm, poses[0]);

        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.1);

        // Close gripper
        RCLCPP_INFO(LOGGER, "Closing gripper at new joint position");
        controlGripper(move_group_node, 10, 10);



///////////組裝平台




        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose1");
        moveToPose(move_group_arm, poses[2]);

        // Move to pose2
        RCLCPP_INFO(LOGGER, "Moving to pose2");
        moveToPose(move_group_arm, poses[3]);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper at pose2");
        controlGripper(move_group_node, 30, 10);

        // Move to pose3
        RCLCPP_INFO(LOGGER, "Moving to pose3");
        moveToPose(move_group_arm, poses[2]);

        // Close gripper
        RCLCPP_INFO(LOGGER, "Closing gripper at pose3");
        controlGripper(move_group_node, 10, 10);

        // Move to pose4
        RCLCPP_INFO(LOGGER, "Moving to pose4");
        moveToPose(move_group_arm, poses[4]);

        // Move to pose5
        RCLCPP_INFO(LOGGER, "Moving to pose5");
        moveToPose(move_group_arm, poses[2]);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper at pose5");
        controlGripper(move_group_node, 30, 10);

        // Move to pose6
        RCLCPP_INFO(LOGGER, "Moving to pose6");
        moveToPose(move_group_arm, poses[3]);

        // 進行力變化檢測
        bool fx_changed = false;
        do {
            // Close gripper at pose6
            RCLCPP_INFO(LOGGER, "Closing gripper at pose6");
            controlGripper(move_group_node, 6, 40);

            // Start recording fx values
            RCLCPP_INFO(LOGGER, "Recording fx values for 2 seconds");
            robot_control_node->start_recording();
            rclcpp::sleep_for(std::chrono::seconds(2));
            robot_control_node->stop_recording();

            double average_fx = robot_control_node->get_average_fx();
            RCLCPP_INFO(LOGGER, "Average fx after closing gripper: %f", average_fx);

            // Move to pose4
            RCLCPP_INFO(LOGGER, "Moving to pose4");
            moveToPose(move_group_arm, poses[5]);

            // Wait for 2 seconds after moving to pose4
            RCLCPP_INFO(LOGGER, "Waiting for 2 seconds after moving to pose4");
            rclcpp::sleep_for(std::chrono::seconds(2));

            // Get the final fx value after movement and waiting
            double final_fx = robot_control_node->get_current_fx();
            RCLCPP_INFO(LOGGER, "Final fx after movement and waiting: %f", final_fx);

            // Compare fx values
            fx_changed = (average_fx - final_fx) > 1.0;
            RCLCPP_INFO(LOGGER, fx_changed ? "Significant fx change detected (TRUE)" : "No significant fx change (FALSE)");
            RCLCPP_INFO(LOGGER, "Difference in fx: %f", average_fx - final_fx);

            // Publish the result
            robot_control_node->publish_result(fx_changed);

            if (!fx_changed) {
                // Move to pose3
                RCLCPP_INFO(LOGGER, "Moving to pose3");
                moveToPose(move_group_arm, poses[3]);

                // Move up along Y-axis
                RCLCPP_INFO(LOGGER, "Moving up along Y-axis");
                moveAlongYAxis(move_group_arm, 0.005);

                // Open gripper
                RCLCPP_INFO(LOGGER, "Opening gripper");
                controlGripper(move_group_node, 30, 10);

                // Move to pose3
                RCLCPP_INFO(LOGGER, "Moving to pose3");
                moveToPose(move_group_arm, poses[2]);

                // Close gripper
                RCLCPP_INFO(LOGGER, "Closing gripper at pose3");
                controlGripper(move_group_node, 6, 10);

                // Move to pose4
                RCLCPP_INFO(LOGGER, "Moving to pose4");
                moveToPose(move_group_arm, poses[4]);

                // Move to pose5
                RCLCPP_INFO(LOGGER, "Moving to pose5");
                moveToPose(move_group_arm, poses[2]);

                // Open gripper
                RCLCPP_INFO(LOGGER, "Opening gripper at pose5");
                controlGripper(move_group_node, 30, 10);

                // Move to pose6
                RCLCPP_INFO(LOGGER, "Moving to pose6");
                moveToPose(move_group_arm, poses[3]);
            }
        } while (!fx_changed);

        if (fx_changed) {
            RCLCPP_INFO(LOGGER, "Significant force change detected. Preparing for next cycle.");

            // Move to pose3
            RCLCPP_INFO(LOGGER, "Moving to pose3");
            moveToPose(move_group_arm, poses[3]);

            // 打開夾爪
            RCLCPP_INFO(LOGGER, "Opening gripper");
            controlGripper(move_group_node, 40, 10);
            RCLCPP_INFO(LOGGER, "Waiting for gripper to open");
            rclcpp::sleep_for(std::chrono::seconds(2));

            // 移動到 "Going Home" 位置
            RCLCPP_INFO(LOGGER, "Moving to Going Home position");
            moveToJointPosition(move_group_arm, joint_group_positions_arm);

            // 調整 poses[2] 到 poses[5] 的 y 值
            for (int i = 2; i <= 5; ++i) {
                poses[i].position.y += 0.048;
            }
            RCLCPP_INFO(LOGGER, "Adjusted y values for poses 2 to 5");

            cycle_count++;
        }
    }

    RCLCPP_INFO(LOGGER, "All operations completed.");

    rclcpp::shutdown();
    return 0;
}

























































































/*  力覺+視覺找圓孔中心
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2/LinearMath/Vector3.h>
#include <vector>
#include <std_msgs/msg/int32_multi_array.hpp>

class UR5Control : public rclcpp::Node {
public:
    UR5Control() : Node("ur5_control"), 
                  current_velocity(1.0), 
                  current_acceleration(0.1),
                  force_threshold(50.0),
                  is_moving(true),
                  initial_forces_set(false),
                  current_direction_index(0) {
        setupNode();
        setupDirections();
        // 定義 pose666 和 pose0
        pose666 = createPose(0.26, -0.597, 0.423, 1.0, 0.0, 0.0, 0.0);  // 請根據實際需求調整座標
        pose0 = createPose(0.27, -0.602, 0.224, 1.0, 0.0, 0.0, 0.0);
        RCLCPP_INFO(this->get_logger(), "UR5Control node initialized");
    }

    void setupNode() {
        move_group_node = std::make_shared<rclcpp::Node>("move_group_interface");
        executor = std::make_shared<rclcpp::executors::SingleThreadedExecutor>();
        executor->add_node(move_group_node);
        std::thread([this]() { executor->spin(); }).detach();

        move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(move_group_node, "ur_manipulator");
        move_group->setPlanningTime(10.0);

        sensor_subscriber = this->create_subscription<std_msgs::msg::Float64MultiArray>(
            "/sensor_data", 10, std::bind(&UR5Control::sensorCallback, this, std::placeholders::_1));
        
        timer = this->create_wall_timer(
            std::chrono::milliseconds(5),
            std::bind(&UR5Control::timerCallback, this));
    }

    void setupDirections() {
        movement_directions = {
            tf2::Vector3(0.0, 0.0, -1.0),  // Initial down
            tf2::Vector3(0.0, 0.0, 1.0),   // Small up
            tf2::Vector3(1.0, 0.0, 0.0),   // X+
            tf2::Vector3(-1.0, 0.0, 0.0),  // X-
            tf2::Vector3(0.0, -1.0, 0.0),  // Y-
            tf2::Vector3(0.0, 1.0, 0.0)    // Y+
        };
        fixed_distances = {0.0, 0.01, 0.0, 0.0, 0.0, 0.0};
    }

    void setInitialForces() {
        initial_forces = forces;
        initial_forces_set = true;
        RCLCPP_INFO(this->get_logger(), "Initial forces set to: [%.2f, %.2f, %.2f] for direction %ld",
                    initial_forces.x(), initial_forces.y(), initial_forces.z(),
                    current_direction_index);
    }

    void startMovement() {
        // 訂閱力傳感器數據
        enableForceMeasurement();
        // 等待穩定讀數
        rclcpp::sleep_for(std::chrono::milliseconds(100));
        setInitialForces();
        setMoveDirection(movement_directions[0].x(), 
                        movement_directions[0].y(), 
                        movement_directions[0].z());
    }

    void setMoveDirection(double x, double y, double z) {
        move_direction = tf2::Vector3(x, y, z);
        move_direction.normalize();
        RCLCPP_INFO(this->get_logger(), "Set move direction to: [%.2f, %.2f, %.2f]", x, y, z);
    }

    void setForceThreshold(double threshold) {
        force_threshold = threshold;
        RCLCPP_INFO(this->get_logger(), "Force threshold set to: %.2f", force_threshold);
    }

    void sensorCallback(const std_msgs::msg::Float64MultiArray::SharedPtr msg) {
        if (msg->data.size() >= 3) {
            forces = tf2::Vector3(msg->data[0], msg->data[1], msg->data[2]);
            RCLCPP_DEBUG(this->get_logger(), "Received forces: [%.2f, %.2f, %.2f]", 
                forces.x(), forces.y(), forces.z());
        }
    }

    bool switchToNextDirection() {
        current_direction_index++;
        if (current_direction_index >= movement_directions.size()) {
            RCLCPP_INFO(this->get_logger(), "All movements completed. Shutting down...");
            rclcpp::shutdown();
            return false;
        }

        const auto& new_direction = movement_directions[current_direction_index];
        setMoveDirection(new_direction.x(), new_direction.y(), new_direction.z());
        
        // Check if this direction has a fixed distance
        if (current_direction_index == 1) { // For the upward movement
            moveFixedDistance(0.01);
            
            // 在固定距離移動後重置力傳感器初始值
            initial_forces_set = false;
            disableForceMeasurement();
            enableForceMeasurement();
            rclcpp::sleep_for(std::chrono::milliseconds(100));
            
            // 添加 2 秒停留時間
            RCLCPP_INFO(this->get_logger(), "Waiting for 2 seconds after upward movement...");
            std::this_thread::sleep_for(std::chrono::seconds(2));
            
            return switchToNextDirection(); // Immediately move to next direction
        }
        
        current_velocity = 1.0;
        current_acceleration = 1.0;
        is_moving = true;
        
        // 在切換方向時重置力傳感器初始值
        initial_forces_set = false;
        disableForceMeasurement();
        enableForceMeasurement();
        rclcpp::sleep_for(std::chrono::milliseconds(100));
        setInitialForces();
        
        RCLCPP_INFO(this->get_logger(), "Switching to direction %ld: [%.1f, %.1f, %.1f]", 
                    current_direction_index,
                    new_direction.x(), new_direction.y(), new_direction.z());
        return true;
    }

    void moveFixedDistance(double distance) {
        geometry_msgs::msg::PoseStamped current_pose = move_group->getCurrentPose();
        geometry_msgs::msg::Pose target_pose = current_pose.pose;
        
        target_pose.position.x += move_direction.x() * distance;
        target_pose.position.y += move_direction.y() * distance;
        target_pose.position.z += move_direction.z() * distance;
        
        planAndExecute("Fixed Distance Movement", [&]() {
            move_group->setPoseTarget(target_pose);
        }, 0.5, 0.5);
        
        // 更新 pose0 為當前位置
        current_pose = move_group->getCurrentPose();
        pose0 = current_pose.pose;
    }
        void timerCallback() {
        if (!initial_forces_set) return;

        tf2::Vector3 force_diff = forces - initial_forces;
        double total_force_diff = std::abs(force_diff.x()) + 
                                std::abs(force_diff.y()) + 
                                std::abs(force_diff.z());

        if (total_force_diff > force_threshold) {
            RCLCPP_INFO(this->get_logger(), 
                "Total force difference: %.2f (threshold: %.2f)", 
                total_force_diff, force_threshold);
            decelerateAndMove();
        } else {
            resetSpeedAndMove();
        }
    }

    void moveInDirection(double distance) {
        tf2::Vector3 current_pos(pose0.position.x, pose0.position.y, pose0.position.z);
        tf2::Vector3 new_pos = current_pos + move_direction * distance;
        
        pose0.position.x = new_pos.x();
        pose0.position.y = new_pos.y();
        pose0.position.z = new_pos.z();

        planAndExecute("Directional Movement", [&]() {
            move_group->setPoseTarget(pose0);
        }, current_velocity, current_acceleration);
    }

    void enableForceMeasurement() {
        sensor_subscriber = this->create_subscription<std_msgs::msg::Float64MultiArray>(
            "/sensor_data", 10, 
            std::bind(&UR5Control::sensorCallback, this, std::placeholders::_1));
    }

    void disableForceMeasurement() {
        sensor_subscriber.reset();
    }

    void decelerateAndMove() {
    is_moving = true;
    current_velocity = std::max(0.0, current_velocity - 0.5);
    current_acceleration = std::max(0.0, current_acceleration - 0.5);

    if (current_velocity > 0.0) {
        double distance = 0.0002 * (current_velocity / 0.5);
        moveInDirection(distance);
        RCLCPP_INFO(this->get_logger(), "Decelerated to velocity: %.2f", current_velocity);
    } else {
        // 停止時，取消訂閱力傳感器數據
        disableForceMeasurement();
        
        geometry_msgs::msg::PoseStamped current_pose = move_group->getCurrentPose();
        RCLCPP_INFO(this->get_logger(), "Robot stopped at pose: "
            "position (%.3f, %.3f, %.3f), "
            "orientation (%.3f, %.3f, %.3f, %.3f)",
            current_pose.pose.position.x,
            current_pose.pose.position.y,
            current_pose.pose.position.z,
            current_pose.pose.orientation.x,
            current_pose.pose.orientation.y,
            current_pose.pose.orientation.z,
            current_pose.pose.orientation.w);

        is_moving = false;
        initial_forces_set = false;

        // Record pose for axis movements
        if (current_direction_index == 2) {
            recordPose(true);
        } else if (current_direction_index == 3) {
            recordPose(false);
        } else if (current_direction_index == 4) {
            recordPose(false);
        } else if (current_direction_index == 5) {
            recordPose(true);
        }

        RCLCPP_INFO(this->get_logger(), "Contact detected, waiting for 2 seconds...");
        std::this_thread::sleep_for(std::chrono::seconds(2));

        if (switchToNextDirection()) {
            enableForceMeasurement();
            rclcpp::sleep_for(std::chrono::milliseconds(100));
            setInitialForces();
            current_velocity = 0.1;
        }
    }
    }

    void recordPose(bool is_positive_direction) {
        geometry_msgs::msg::PoseStamped current_pose = move_group->getCurrentPose();
        
        if (current_direction_index == 2 || current_direction_index == 3) {  // X-axis
            if (is_positive_direction) {
                x_positive_pose = current_pose.pose;
                x_positive_recorded = true;
                RCLCPP_INFO(this->get_logger(), "Recorded X+ pose");
            } else {
                x_negative_pose = current_pose.pose;
                x_negative_recorded = true;
                RCLCPP_INFO(this->get_logger(), "Recorded X- pose");
            }
            if (x_positive_recorded && x_negative_recorded) {
                calculatePose1();
            }
        } else if (current_direction_index == 4 || current_direction_index == 5) {  // Y-axis
            if (is_positive_direction) {
                y_positive_pose = current_pose.pose;
                y_positive_recorded = true;
                RCLCPP_INFO(this->get_logger(), "Recorded Y+ pose");
            } else {
                y_negative_pose = current_pose.pose;
                y_negative_recorded = true;
                RCLCPP_INFO(this->get_logger(), "Recorded Y- pose");
            }
            if (y_positive_recorded && y_negative_recorded) {
                calculatePose2();
            }
        }
    }


    void calculatePose1() {
        pose1.position.x = (x_positive_pose.position.x + x_negative_pose.position.x) / 2.0;
        pose1.position.y = (x_positive_pose.position.y + x_negative_pose.position.y) / 2.0;
        pose1.position.z = (x_positive_pose.position.z + x_negative_pose.position.z) / 2.0;
        
        // Average quaternions
        pose1.orientation.x = (x_positive_pose.orientation.x + x_negative_pose.orientation.x) / 2.0;
        pose1.orientation.y = (x_positive_pose.orientation.y + x_negative_pose.orientation.y) / 2.0;
        pose1.orientation.z = (x_positive_pose.orientation.z + x_negative_pose.orientation.z) / 2.0;
        pose1.orientation.w = (x_positive_pose.orientation.w + x_negative_pose.orientation.w) / 2.0;
        
        // Normalize quaternion
        double norm = sqrt(pose1.orientation.x * pose1.orientation.x +
                         pose1.orientation.y * pose1.orientation.y +
                         pose1.orientation.z * pose1.orientation.z +
                         pose1.orientation.w * pose1.orientation.w);
        
        pose1.orientation.x /= norm;
        pose1.orientation.y /= norm;
        pose1.orientation.z /= norm;
        pose1.orientation.w /= norm;

        RCLCPP_INFO(this->get_logger(), "Calculated pose1");
        moveToPose1();
    }

    void calculatePose2() {
        pose2.position.x = (y_positive_pose.position.x + y_negative_pose.position.x) / 2.0;
        pose2.position.y = (y_positive_pose.position.y + y_negative_pose.position.y) / 2.0;
        pose2.position.z = (y_positive_pose.position.z + y_negative_pose.position.z) / 2.0;
        
        pose2.orientation = pose1.orientation;  // Keep orientation from pose1
        
        RCLCPP_INFO(this->get_logger(), "Calculated pose2");
        completeMoveSequence();
    }


    void moveToPose1() {
        planAndExecute("Pose 1", [&]() {
            move_group->setPoseTarget(pose1);
        }, 0.5, 0.5);
        
        // 更新 pose0 為當前位置，用於後續的 Y 軸移動
        geometry_msgs::msg::PoseStamped current_pose = move_group->getCurrentPose();
        pose0 = current_pose.pose;
        
        setInitialForces();
        rclcpp::sleep_for(std::chrono::milliseconds(100));
        current_velocity = 0.1;
    }

    void controlGripper(int width, int force) {
        auto gripper_publisher = this->create_publisher<std_msgs::msg::Int32MultiArray>("custom_gripper", 10);
        std_msgs::msg::Int32MultiArray gripper_command;
        gripper_command.data.push_back(width);
        gripper_command.data.push_back(force);
        
        RCLCPP_INFO(this->get_logger(), "Publishing Gripper Command: width=%d, force=%d", width, force);
        gripper_publisher->publish(gripper_command);
        
        // 等待夾爪動作完成
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    void completeMoveSequence() {
        // 移動到 pose2
        planAndExecute("Pose 2", [&]() {
            move_group->setPoseTarget(pose2);
        }, 0.5, 0.5);
        
        // 控制夾爪到 (20, 10)
        controlGripper(10, 10);
        
        // 往 Z 軸負方向移動 0.05 mm
        geometry_msgs::msg::PoseStamped current_pose = move_group->getCurrentPose();
        geometry_msgs::msg::Pose target_pose = current_pose.pose;
        target_pose.position.z -= 0.03;  // 注意：0.05mm = 0.005 cm
        
        planAndExecute("Z-axis Movement", [&]() {
            move_group->setPoseTarget(target_pose);
        }, 0.2, 0.2);
        
        // 控制夾爪到 (0, 10)
        controlGripper(0, 10);
        
        // 沿Z+方向移動 0.1mm
        current_pose = move_group->getCurrentPose();
        target_pose = current_pose.pose;
        target_pose.position.z += 0.08;  // 0.1mm = 0.01 cm
        
        planAndExecute("Z+ Movement", [&]() {
            move_group->setPoseTarget(target_pose);
        }, 0.2, 0.2);
        
        RCLCPP_INFO(this->get_logger(), "Final pose: "
            "position (%.3f, %.3f, %.3f), "
            "orientation (%.3f, %.3f, %.3f, %.3f)",
            target_pose.position.x,
            target_pose.position.y,
            target_pose.position.z,
            target_pose.orientation.x,
            target_pose.orientation.y,
            target_pose.orientation.z,
            target_pose.orientation.w);
        
        RCLCPP_INFO(this->get_logger(), "Movement sequence completed");
        rclcpp::shutdown();
    }

    void resetSpeedAndMove() {
        if (!is_moving) {
            current_velocity = 0.1;
            current_acceleration = 0.1;
            is_moving = true;
            RCLCPP_INFO(this->get_logger(), "Resuming movement");
        } else if (current_velocity < 1.0) {
            current_velocity = std::min(1.0, current_velocity + 0.5);
            current_acceleration = std::min(1.0, current_acceleration + 0.01);
        }
        moveInDirection(0.0005);
    }

    void moveToHome() {
        std::vector<double> homejoints = {-1.64, -2.27, 1.92, -1.22, -1.57, 1.57};
        planAndExecute("Home", [&]() {
            move_group->setJointValueTarget(homejoints);
        }, 0.5, 0.5);
    }

    void moveToPose0() {
        planAndExecute("Pose 0", [&]() {
            move_group->setPoseTarget(pose0);
        }, 0.2, 0.2);
    }

    void moveToPose666() {
        planAndExecute("Pose 666", [&]() {
            move_group->setPoseTarget(pose666);
        }, 0.1, 0.1);
        
        // 等待2秒
        RCLCPP_INFO(this->get_logger(), "Reached Pose666, waiting for 2 seconds...");
        std::this_thread::sleep_for(std::chrono::seconds(5));
        RCLCPP_INFO(this->get_logger(), "Wait completed, proceeding to Pose0");
    }

    geometry_msgs::msg::Pose createPose(double x, double y, double z, double qx, double qy, double qz, double qw) {
        geometry_msgs::msg::Pose pose;
        pose.position.x = x;
        pose.position.y = y;
        pose.position.z = z;
        pose.orientation.x = qx;
        pose.orientation.y = qy;
        pose.orientation.z = qz;
        pose.orientation.w = qw;
        return pose;
    }

    void planAndExecute(const std::string& position_name, 
                       const std::function<void()>& setTarget, 
                       double velocity_factor, 
                       double acceleration_factor) {
        move_group->setMaxVelocityScalingFactor(velocity_factor);
        move_group->setMaxAccelerationScalingFactor(acceleration_factor);
        
        setTarget();
        
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = false;
        int attempts = 0;
        const int max_attempts = 10;
        
        while (!success && attempts < max_attempts) {
            success = (move_group->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
            attempts++;
        }
        
        if (success) {
            move_group->execute(my_plan);
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to plan movement to %s after %d attempts", 
                        position_name.c_str(), max_attempts);
        }
    }

private:
    std::shared_ptr<rclcpp::Node> move_group_node;
    std::shared_ptr<rclcpp::executors::SingleThreadedExecutor> executor;
    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group;
    std::vector<double> fixed_distances;
    rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr sensor_subscriber;
    rclcpp::TimerBase::SharedPtr timer;
    tf2::Vector3 forces;
    tf2::Vector3 initial_forces;
    tf2::Vector3 move_direction;
    tf2::Vector3 direction_mask;
    geometry_msgs::msg::Pose pose666;  // 新增 pose666
    geometry_msgs::msg::Pose pose0;
    geometry_msgs::msg::Pose pose1;
    geometry_msgs::msg::Pose x_positive_pose;
    geometry_msgs::msg::Pose x_negative_pose;
    bool x_positive_recorded = false;
    bool x_negative_recorded = false;
    geometry_msgs::msg::Pose y_positive_pose;
    geometry_msgs::msg::Pose y_negative_pose;
    geometry_msgs::msg::Pose pose2;
    bool y_positive_recorded = false;
    bool y_negative_recorded = false;
    double current_velocity;
    double current_acceleration;
    double force_threshold;
    std::vector<tf2::Vector3> movement_directions;
    bool is_moving;
    bool initial_forces_set;
    size_t current_direction_index;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<UR5Control>();
    
    node->setForceThreshold(20.0);
    node->moveToHome();
    node->moveToPose666();  // 新增移動到 pose666 的步驟
    node->moveToPose0();
    node->startMovement();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
*/









/*2024/12/09
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2/LinearMath/Vector3.h>
#include <vector>

class UR5Control : public rclcpp::Node {
public:
    UR5Control() : Node("ur5_control"), 
                  current_velocity(1.0), 
                  current_acceleration(1.0),
                  force_threshold(50.0),
                  is_moving(true),
                  initial_forces_set(false),
                  current_direction_index(0) {
        setupNode();
        setupDirections();
        pose0 = createPose(0.087, -0.44, 0.3, 0.995, 0.0, 0.0, 0.096);
        RCLCPP_INFO(this->get_logger(), "UR5Control node initialized");
    }

    void setupNode() {
=======
#include <geometry_msgs/msg/pose.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <vector>
#include <cmath>

class UR5CircleControl : public rclcpp::Node
{
public:
    UR5CircleControl()
        : Node("ur5_circle_control"),
          is_moving(false),
          current_point_index(0),
          total_points(72)  // 每5度一個點，共72個點
    {
        // 初始化四個關鍵點的關節角度（下、右、上、左的順序）
        std::vector<std::vector<double>> keypoints = {
            {-1.62, -2.03, 2.04, -1.59, -1.57, 3.14},  // 下點
            {-1.76, -1.94, 1.98, -1.61, -1.57, 3.00},  // 右點
            {-1.60, -1.80, 1.88, -1.66, -1.57, 3.14},  // 上點
            {-1.46, -1.87, 1.95, -1.64, -1.57, 3.24}   // 左點
        };

        // 計算所有關節空間中的圓形軌跡點
        generateCircleTrajectory(keypoints);

        // 初始化MoveIt相關組件
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf
        move_group_node = std::make_shared<rclcpp::Node>("move_group_interface");
        executor = std::make_shared<rclcpp::executors::SingleThreadedExecutor>();
        executor->add_node(move_group_node);
        std::thread([this]() { executor->spin(); }).detach();

        move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(move_group_node, "ur_manipulator");
        move_group->setPlanningTime(10.0);

<<<<<<< HEAD
        sensor_subscriber = this->create_subscription<std_msgs::msg::Float64MultiArray>(
            "/sensor_data", 10, std::bind(&UR5Control::sensorCallback, this, std::placeholders::_1));
        
        timer = this->create_wall_timer(
            std::chrono::milliseconds(10),
            std::bind(&UR5Control::timerCallback, this));
    }

    void setupDirections() {
        movement_directions.push_back(tf2::Vector3(1.0, -1.0, -0.2));
        movement_directions.push_back(tf2::Vector3(0.0, 2.0, -0.2));
        movement_directions.push_back(tf2::Vector3(0.0, 0.0, -3.2));
        
        for (size_t i = 0; i < movement_directions.size(); ++i) {
            RCLCPP_INFO(this->get_logger(), "Direction %ld: [%.1f, %.1f, %.1f]", 
                       i, movement_directions[i].x(), 
                       movement_directions[i].y(), 
                       movement_directions[i].z());
        }
    }

    void setInitialForces() {
        initial_forces = forces;
        initial_forces_set = true;
        RCLCPP_INFO(this->get_logger(), "Initial forces set to: [%.2f, %.2f, %.2f]",
                    initial_forces.x(), initial_forces.y(), initial_forces.z());
    }

    void startMovement() {
        setInitialForces();
        setMoveDirection(movement_directions[0].x(), 
                        movement_directions[0].y(), 
                        movement_directions[0].z());
    }

    void setMoveDirection(double x, double y, double z) {
        move_direction = tf2::Vector3(x, y, z);
        move_direction.normalize();
        RCLCPP_INFO(this->get_logger(), "Set move direction to: [%.2f, %.2f, %.2f]", x, y, z);
    }

    void setForceThreshold(double threshold) {
        force_threshold = threshold;
        RCLCPP_INFO(this->get_logger(), "Force threshold set to: %.2f", force_threshold);
    }

    void sensorCallback(const std_msgs::msg::Float64MultiArray::SharedPtr msg) {
        if (msg->data.size() >= 3) {
            forces = tf2::Vector3(msg->data[0], msg->data[1], msg->data[2]);
            RCLCPP_DEBUG(this->get_logger(), "Received forces: [%.2f, %.2f, %.2f]", 
                forces.x(), forces.y(), forces.z());
        }
    }

    bool switchToNextDirection() {
        current_direction_index++;
        if (current_direction_index >= movement_directions.size()) {
            RCLCPP_INFO(this->get_logger(), "All movements completed. Shutting down...");
            rclcpp::shutdown();
            return false;
        }

        const auto& new_direction = movement_directions[current_direction_index];
        setMoveDirection(new_direction.x(), new_direction.y(), new_direction.z());
        current_velocity = 1.0;
        current_acceleration = 1.0;
        is_moving = true;
        
        RCLCPP_INFO(this->get_logger(), "Switching to direction %ld: [%.1f, %.1f, %.1f]", 
                    current_direction_index,
                    new_direction.x(), new_direction.y(), new_direction.z());
        return true;
    }

    void timerCallback() {
        if (!initial_forces_set) return;

        tf2::Vector3 force_diff = forces - initial_forces;
        double total_force_diff = std::abs(force_diff.x()) + 
                                std::abs(force_diff.y()) + 
                                std::abs(force_diff.z());

        if (total_force_diff > force_threshold) {
            RCLCPP_INFO(this->get_logger(), 
                "Total force difference: %.2f (threshold: %.2f)", 
                total_force_diff, force_threshold);
            decelerateAndMove();
        } else {
            resetSpeedAndMove();
        }
    }

    void moveInDirection(double distance) {
        tf2::Vector3 current_pos(pose0.position.x, pose0.position.y, pose0.position.z);
        tf2::Vector3 new_pos = current_pos + move_direction * distance;
        
        pose0.position.x = new_pos.x();
        pose0.position.y = new_pos.y();
        pose0.position.z = new_pos.z();

        planAndExecute("Directional Movement", [&]() {
            move_group->setPoseTarget(pose0);
        }, current_velocity, current_acceleration);
    }

    void decelerateAndMove() {
        is_moving = true;
        current_velocity = std::max(0.0, current_velocity - 1.0);  // 增加減速量
        current_acceleration = std::max(0.0, current_acceleration - 1.0);

        if (current_velocity > 0.0) {
            double distance = 0.0005 * (current_velocity / 0.5);
            moveInDirection(distance);
            RCLCPP_INFO(this->get_logger(), "Decelerated to velocity: %.2f", current_velocity);
        } else {
            RCLCPP_INFO(this->get_logger(), "Stopped due to force limit");
            is_moving = false;
            initial_forces_set = false;
            if (switchToNextDirection()) {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));  // 增加等待時間
                setInitialForces();
                // 等待幾個週期確保力值穩定
                rclcpp::sleep_for(std::chrono::milliseconds(100));
                current_velocity = 0.1;  // 從低速開始
            }
        }
    }

    void resetSpeedAndMove() {
        if (!is_moving) {
            current_velocity = 0.1;
            current_acceleration = 0.1;
            is_moving = true;
            RCLCPP_INFO(this->get_logger(), "Resuming movement");
        } else if (current_velocity < 1.0) {
            current_velocity = std::min(1.0, current_velocity + 0.1);
            current_acceleration = std::min(1.0, current_acceleration + 0.1);
        }
        moveInDirection(0.005);
    }

    void moveToHome() {
        std::vector<double> homejoints = {-1.64, -2.27, 1.92, -1.22, -1.57, 1.57};
        planAndExecute("Home", [&]() {
            move_group->setJointValueTarget(homejoints);
        }, 0.5, 0.5);
    }

    void moveToPose0() {
        planAndExecute("Pose 0", [&]() {
            move_group->setPoseTarget(pose0);
        }, 0.8, 0.8);
    }

    geometry_msgs::msg::Pose createPose(double x, double y, double z, double qx, double qy, double qz, double qw) {
        geometry_msgs::msg::Pose pose;
        pose.position.x = x;
        pose.position.y = y;
        pose.position.z = z;
        pose.orientation.x = qx;
        pose.orientation.y = qy;
        pose.orientation.z = qz;
        pose.orientation.w = qw;
        return pose;
    }

    void planAndExecute(const std::string& position_name, 
                       const std::function<void()>& setTarget, 
                       double velocity_factor, 
                       double acceleration_factor) {
        move_group->setMaxVelocityScalingFactor(velocity_factor);
        move_group->setMaxAccelerationScalingFactor(acceleration_factor);
        
        setTarget();
        
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = false;
        int attempts = 0;
        const int max_attempts = 10;
        
        while (!success && attempts < max_attempts) {
            success = (move_group->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
            attempts++;
        }
        
        if (success) {
            move_group->execute(my_plan);
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to plan movement to %s after %d attempts", 
                        position_name.c_str(), max_attempts);
        }
=======
        // 設置感測器訂閱者
        sensor_subscriber = this->create_subscription<std_msgs::msg::Float64MultiArray>(
            "/sensor_data", 10, std::bind(&UR5CircleControl::sensorCallback, this, std::placeholders::_1));

        // 設置定時器 (100Hz更新頻率，提高反應速度)
        timer = this->create_wall_timer(
            std::chrono::milliseconds(10),
            std::bind(&UR5CircleControl::timerCallback, this));

        RCLCPP_INFO(this->get_logger(), "=== UR5 Circle Control Initialized ===");
    }

    void moveToHome()
    {
        RCLCPP_INFO(this->get_logger(), "Moving to home position...");
        std::vector<double> home_position = {-1.64, -2.27, 1.92, -1.22, -1.57, 3.14};
        planAndExecute("Home", home_position, 0.3, 0.3);
        RCLCPP_INFO(this->get_logger(), "Reached home position");
    }

    bool moveAlongAxis(const std::string& axis, double distance)
    {
        RCLCPP_INFO(this->get_logger(), "Moving along %s axis by %.3f meters", axis.c_str(), distance);
        
        auto current_pose = move_group->getCurrentPose().pose;
        std::vector<geometry_msgs::msg::Pose> waypoints;
        geometry_msgs::msg::Pose target_pose = current_pose;

        if (axis == "Y") {
            target_pose.position.y += distance;
        } else if (axis == "Z") {
            target_pose.position.z += distance;
        }

        waypoints.push_back(target_pose);
        moveit_msgs::msg::RobotTrajectory trajectory;
        const double jump_threshold = 0.0;
        const double eef_step = 0.01;
        
        move_group->setMaxVelocityScalingFactor(0.3);
        double fraction = move_group->computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
        
        if (fraction > 0.98) {
            move_group->execute(trajectory);
            RCLCPP_INFO(this->get_logger(), "Successfully moved along %s axis", axis.c_str());
            return true;
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to plan path along %s axis", axis.c_str());
            return false;
        }
    }

    void startCircularMotion()
    {
        RCLCPP_INFO(this->get_logger(), "Starting circular motion");
        current_point_index = 0;
        is_moving = true;
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf
    }

private:
    std::shared_ptr<rclcpp::Node> move_group_node;
    std::shared_ptr<rclcpp::executors::SingleThreadedExecutor> executor;
    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group;
    rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr sensor_subscriber;
    rclcpp::TimerBase::SharedPtr timer;
<<<<<<< HEAD
    tf2::Vector3 forces;
    tf2::Vector3 initial_forces;
    tf2::Vector3 move_direction;
    tf2::Vector3 direction_mask;
    geometry_msgs::msg::Pose pose0;
    double current_velocity;
    double current_acceleration;
    double force_threshold;
    std::vector<tf2::Vector3> movement_directions;
    bool is_moving;
    bool initial_forces_set;
    size_t current_direction_index;
=======
    
    std::vector<std::vector<double>> circle_points;  // 存儲完整圓形軌跡的關節角度
    bool is_moving;
    size_t current_point_index;
    size_t total_points;
    double fx = 0.0;

    void generateCircleTrajectory(const std::vector<std::vector<double>>& keypoints)
    {
        // 為每個關節計算圓形參數
        std::vector<double> centers(6);  // 每個關節的圓心
        std::vector<double> amplitudes(6);  // 每個關節的振幅
        std::vector<double> phases(6);  // 每個關節的相位

        // 對每個關節計算參數（包括wrist3）
        for (size_t joint = 0; joint < 6; ++joint) {
            // 找出這個關節的最大和最小值
            double max_val = keypoints[0][joint];
            double min_val = keypoints[0][joint];
            for (const auto& point : keypoints) {
                max_val = std::max(max_val, point[joint]);
                min_val = std::min(min_val, point[joint]);
            }
            
            // 計算圓心和振幅
            centers[joint] = (max_val + min_val) / 2.0;
            amplitudes[joint] = (max_val - min_val) / 2.0;
            
            // 計算相位（基於第一個點）
            phases[joint] = std::atan2(
                keypoints[0][joint] - centers[joint],
                amplitudes[joint]
            );
        }

        // 生成圓形軌跡點
        circle_points.clear();
        for (size_t i = 0; i < total_points; ++i) {
            double angle = 2.0 * M_PI * i / total_points;
            std::vector<double> point(6);
            
            // 計算所有關節的位置，包括wrist3
            for (size_t joint = 0; joint < 6; ++joint) {
                point[joint] = centers[joint] + 
                            amplitudes[joint] * std::cos(angle + phases[joint]);
            }
            circle_points.push_back(point);
        }

        // 輸出軌跡生成資訊
        RCLCPP_INFO(this->get_logger(), "Generated %zu points for circular trajectory", 
                circle_points.size());
        RCLCPP_INFO(this->get_logger(), "Joint centers: [%.3f, %.3f, %.3f, %.3f, %.3f, %.3f]",
                centers[0], centers[1], centers[2], centers[3], centers[4], centers[5]);
        RCLCPP_INFO(this->get_logger(), "Joint amplitudes: [%.3f, %.3f, %.3f, %.3f, %.3f, %.3f]",
                amplitudes[0], amplitudes[1], amplitudes[2], amplitudes[3], amplitudes[4], amplitudes[5]);
    }

    void sensorCallback(const std_msgs::msg::Float64MultiArray::SharedPtr msg)
    {
        if (!msg->data.empty()) {
            fx = msg->data[0];
            // 立即檢查力覺並停止如果超過閾值
            if (fx < -2.0 && is_moving) {
                RCLCPP_WARN(this->get_logger(), "Force threshold exceeded (%.2f N), stopping motion!", fx);
                is_moving = false;
            }
        }
    }

    void timerCallback()
    {
        if (is_moving) {
            moveToNextPoint();
        }
    }

    void moveToNextPoint()
    {
        if (current_point_index >= circle_points.size()) {
            current_point_index = 0;  // 重新開始新的一圈
            RCLCPP_INFO(this->get_logger(), "=== Completed one full circle ===");
        }

        const auto& target_point = circle_points[current_point_index];
        planAndExecute("Circle Point", target_point, 0.3, 0.3);
        
        if (current_point_index % 10 == 0) {
            RCLCPP_INFO(this->get_logger(), "Moving to point %zu/%zu, Force: %.2f N",
                       current_point_index + 1, circle_points.size(), fx);
        }

        current_point_index++;
    }

    void planAndExecute(const std::string& position_name,
                       const std::vector<double>& joint_positions,
                       double velocity_factor,
                       double acceleration_factor)
    {
        move_group->setMaxVelocityScalingFactor(velocity_factor);
        move_group->setMaxAccelerationScalingFactor(acceleration_factor);
        
        move_group->setJointValueTarget(joint_positions);
        
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = false;
        int attempts = 0;
        const int max_attempts = 5;  // 減少重試次數以提高響應速度
        
        while (!success && attempts < max_attempts) {
            success = (move_group->plan(my_plan) == 
                      moveit::core::MoveItErrorCode::SUCCESS);
            attempts++;
        }
        
        if (success) {
            move_group->execute(my_plan);
        } else {
            RCLCPP_ERROR(this->get_logger(), 
                "Failed to plan movement to %s after %d attempts",
                position_name.c_str(), max_attempts);
        }
    }
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
<<<<<<< HEAD
    auto node = std::make_shared<UR5Control>();
    
    node->setForceThreshold(50.0);
    node->moveToHome();
    node->moveToPose0();
    node->startMovement();

=======
    auto node = std::make_shared<UR5CircleControl>();
    
    RCLCPP_INFO(rclcpp::get_logger("main"), "Starting UR5 Circle Control Program...");
    
    // 1. 移動到home position
    node->moveToHome();
    rclcpp::sleep_for(std::chrono::seconds(2));
    
    // 2. 沿Y軸負向移動10cm
    node->moveAlongAxis("Y", -0.10);
    rclcpp::sleep_for(std::chrono::seconds(2));
    
    // 3. 沿Z軸負向移動10cm
    node->moveAlongAxis("Z", -0.10);
    rclcpp::sleep_for(std::chrono::seconds(2));
    
    // 4. 開始圓周運動
    node->startCircularMotion();
    
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
<<<<<<< HEAD
*/







































/*
    #include <rclcpp/rclcpp.hpp>
    #include <moveit/move_group_interface/move_group_interface.h>
    #include <moveit/planning_scene_interface/planning_scene_interface.h>
    #include <moveit_msgs/msg/display_robot_state.hpp>
    #include <moveit_msgs/msg/display_trajectory.hpp>
    #include <moveit_visual_tools/moveit_visual_tools.h>
    #include <geometry_msgs/msg/pose.hpp>
    #include <tf2/LinearMath/Quaternion.h>
    #include "std_msgs/msg/int32_multi_array.hpp"
    #include "std_msgs/msg/float64_multi_array.hpp"
    #include "std_msgs/msg/bool.hpp"
    #include <thread>
    #include <chrono>
    #include <vector>
    #include <numeric>
    #include <moveit_msgs/msg/robot_trajectory.hpp>

    static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

    class RobotControl : public rclcpp::Node
    {
    public:
        RobotControl() : Node("robot_control")
        {
            subscription_ = this->create_subscription<std_msgs::msg::Float64MultiArray>(
                "/sensor_data", 10, std::bind(&RobotControl::sensor_callback, this, std::placeholders::_1));
            
            result_publisher_ = this->create_publisher<std_msgs::msg::Bool>("force_change_result", 10);
            
            fx_values_.clear();
            current_fx_ = 0.0;
            is_recording_ = false;
        }

        void sensor_callback(const std_msgs::msg::Float64MultiArray::SharedPtr msg) {
            if (msg->data.size() >= 3) {
                tf2::Vector3 force(msg->data[0], msg->data[1], msg->data[2]);
                if (force.length() > 2.0) {
                    current_velocity_ = std::max(0.0, current_velocity_ - 0.1);
                    current_acceleration_ = std::max(0.0, current_acceleration_ - 0.1);
                    if (current_velocity_ <= 0.0) {
                        is_moving_ = false;
                    }
                }
                current_fx_ = msg->data[0];
                if (is_recording_) {
                    fx_values_.push_back(current_fx_);
                }
            }
        }

        void setupForceControl() {
            move_directions_ = {
                tf2::Vector3(1.0, -1.0, -1.0),
                tf2::Vector3(0.0, 1.0, -1.0),
                tf2::Vector3(0.0, 0.0, -1.0)
            };
            for (auto& dir : move_directions_) {
                dir.normalize();
            }
            current_direction_ = move_directions_[0];
            current_velocity_ = 1.0;
            current_acceleration_ = 1.0;
            is_moving_ = true;
            direction_index_ = 0;
        }

        bool moveToNextDirection() {
            direction_index_++;
            if (direction_index_ < move_directions_.size()) {
                current_direction_ = move_directions_[direction_index_];
                current_velocity_ = 1.0;
                current_acceleration_ = 1.0;
                is_moving_ = true;
                return true;
            }
            return false;
        }

        void start_recording()
        {
            fx_values_.clear();
            is_recording_ = true;
        }

        void stop_recording()
        {
            is_recording_ = false;
        }

        double get_average_fx()
        {
            if (fx_values_.empty())
            {
                return 0.0;
            }
            return std::accumulate(fx_values_.begin(), fx_values_.end(), 0.0) / fx_values_.size();
        }

        double get_current_fx()
        {
            return current_fx_;
        }

        void publish_result(bool result)
        {
            std_msgs::msg::Bool msg;
            msg.data = result;
            result_publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Published result: %s", result ? "TRUE" : "FALSE");
        }
        bool is_moving_;
        tf2::Vector3 current_direction_;
        double current_velocity_;
        double current_acceleration_;
    private:
        rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr subscription_;
        rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr result_publisher_;
        std::vector<double> fx_values_;
        double current_fx_;
        bool is_recording_;
        std::vector<tf2::Vector3> move_directions_;
        size_t direction_index_;
    };

    void moveWithForceControl(moveit::planning_interface::MoveGroupInterface& move_group_arm,
                            std::shared_ptr<RobotControl> robot_control) {
        robot_control->setupForceControl();
        
        while (true) {
            if (!robot_control->is_moving_) {
                if (!robot_control->moveToNextDirection()) {
                    break;
                }
                continue;
            }

            geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
            tf2::Vector3 direction = robot_control->current_direction_;
            
            geometry_msgs::msg::Pose target_pose = current_pose;
            double step = 0.01 * robot_control->current_velocity_;
            
            target_pose.position.x += direction.x() * step;
            target_pose.position.y += direction.y() * step;
            target_pose.position.z += direction.z() * step;
            
            move_group_arm.setMaxVelocityScalingFactor(robot_control->current_velocity_);
            move_group_arm.setMaxAccelerationScalingFactor(robot_control->current_acceleration_);
            move_group_arm.setPoseTarget(target_pose);
            
            moveit::planning_interface::MoveGroupInterface::Plan my_plan;
            if (move_group_arm.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS) {
                move_group_arm.execute(my_plan);
            }
            
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }

    void moveToPose(moveit::planning_interface::MoveGroupInterface& move_group_arm, const geometry_msgs::msg::Pose& target_pose) {
        move_group_arm.setPoseTarget(target_pose);
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = (move_group_arm.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
        if (success) {
            move_group_arm.execute(my_plan);
        } else {
            RCLCPP_ERROR(LOGGER, "Planning failed!");
        }
    }

    void moveToJointPosition(moveit::planning_interface::MoveGroupInterface& move_group_arm, const std::vector<double>& joint_positions) {
        move_group_arm.setJointValueTarget(joint_positions);
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = (move_group_arm.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
        if (success) {
            move_group_arm.execute(my_plan);
        } else {
            RCLCPP_ERROR(LOGGER, "Planning failed!");
        }
    }

    void controlGripper(rclcpp::Node::SharedPtr node, int width, int force) {
        auto gripper_publisher = node->create_publisher<std_msgs::msg::Int32MultiArray>("custom_gripper", 10);
        std_msgs::msg::Int32MultiArray gripper_command;
        gripper_command.data = {width, force};
        RCLCPP_INFO(LOGGER, "Publishing Gripper Command: '%d', '%d'", width, force);
        gripper_publisher->publish(gripper_command);
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    void moveAlongXAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
        std::vector<geometry_msgs::msg::Pose> waypoints;
        geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
        geometry_msgs::msg::Pose target_pose = current_pose;
        
        target_pose.position.x += distance;
        waypoints.push_back(target_pose);
        
        moveit_msgs::msg::RobotTrajectory trajectory;
        const double jump_threshold = 0.0;
        const double eef_step = 0.01;
        double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
        
        if (fraction == -1.0 || fraction < 0.9) {
            RCLCPP_ERROR(LOGGER, "Path planning for X-axis movement failed");
        } else {
            move_group_arm.execute(trajectory);
        }
    }

    void moveAlongYAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
        std::vector<geometry_msgs::msg::Pose> waypoints;
        geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
        geometry_msgs::msg::Pose target_pose = current_pose;
        
        target_pose.position.y += distance;
        waypoints.push_back(target_pose);
        
        moveit_msgs::msg::RobotTrajectory trajectory;
        const double jump_threshold = 0.0;
        const double eef_step = 0.01;
        double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
        
        if (fraction == -1.0 || fraction < 0.9) {
            RCLCPP_ERROR(LOGGER, "Path planning for Y-axis movement failed");
        } else {
            move_group_arm.execute(trajectory);
        }
    }

    void moveAlongZAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
        std::vector<geometry_msgs::msg::Pose> waypoints;
        geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
        geometry_msgs::msg::Pose target_pose = current_pose;
        
        target_pose.position.z += distance;
        waypoints.push_back(target_pose);
        
        moveit_msgs::msg::RobotTrajectory trajectory;
        const double jump_threshold = 0.0;
        const double eef_step = 0.01;
        double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
        
    if (fraction == -1.0 || fraction < 0.9) {
        RCLCPP_ERROR(LOGGER, "Path planning for Z-axis movement failed");
    } else {
        move_group_arm.execute(trajectory);
    }
}

// 新增的輔助函數，用於調整姿勢的 y 值
void adjustPosesY(std::vector<geometry_msgs::msg::Pose>& poses, double adjustment) {
    for (int i = 2; i <= 5; ++i) {
        poses[i].position.y += adjustment;
    }
}

// 封裝主要操作的函數
void performMainOperations(moveit::planning_interface::MoveGroupInterface& move_group_arm,
                         rclcpp::Node::SharedPtr move_group_node,
                         const std::vector<geometry_msgs::msg::Pose>& poses,
                         std::shared_ptr<RobotControl> robot_control_node) {
    RCLCPP_INFO(LOGGER, "Closing gripper joint position");
    controlGripper(move_group_node, 40, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose home");
        moveToPose(move_group_arm, poses[0]);

        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.1);

        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 6, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose0");
        moveToPose(move_group_arm, poses[1]);

        // Move down along Z-axis
        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.095);

        // Close gripper
        RCLCPP_INFO(LOGGER, "Closing gripper at new position");
        controlGripper(move_group_node, 40, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose home");
        moveToPose(move_group_arm, poses[0]);
        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper after pose0");
        controlGripper(move_group_node, 70, 10);

        // Move down along Z-axis
        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.105);

        RCLCPP_INFO(LOGGER, "Closing gripper at joint position");
        controlGripper(move_group_node, 40, 5);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper after pose0");
        controlGripper(move_group_node, 60, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose0");
        moveToPose(move_group_arm, poses[1]);

        ///////// Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose0");
        moveToPose(move_group_arm, poses[2]);

        // Move down along Z-axis
        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.105);

        RCLCPP_INFO(LOGGER, "Closing gripper at new joint position");
        controlGripper(move_group_node, 15, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose2");
        moveToPose(move_group_arm, poses[3]);
        RCLCPP_INFO(LOGGER, "Starting force-controlled movement");
        moveWithForceControl(move_group_arm, robot_control_node);
        RCLCPP_INFO(LOGGER, "Force-controlled movement completed");
}

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto robot_control_node = std::make_shared<RobotControl>();
    
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
    
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(robot_control_node);
    executor.add_node(move_group_node);
    std::thread([&executor]() { executor.spin(); }).detach();

    static const std::string PLANNING_GROUP_ARM = "ur_manipulator";
    moveit::planning_interface::MoveGroupInterface move_group_arm(move_group_node, PLANNING_GROUP_ARM);
    const moveit::core::JointModelGroup* joint_model_group_arm = move_group_arm.getCurrentState()->getJointModelGroup(PLANNING_GROUP_ARM);
    
    move_group_arm.setMaxVelocityScalingFactor(0.25);
    move_group_arm.setMaxAccelerationScalingFactor(0.25);

    // Get Current State
    moveit::core::RobotStatePtr current_state_arm = move_group_arm.getCurrentState(10);
    std::vector<double> joint_group_positions_arm;
    current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);

    // Go Home
    move_group_arm.setStartStateToCurrentState();
    RCLCPP_INFO(LOGGER, "Going Home");
    
    joint_group_positions_arm[0] = -1.64;  // base 
    joint_group_positions_arm[1] = -2.27;  // shoulder
    joint_group_positions_arm[2] = 1.92;   // elbow
    joint_group_positions_arm[3] = -1.22;  // Wrist 1
    joint_group_positions_arm[4] = -1.57;  // Wrist 2
    joint_group_positions_arm[5] = 1.57;   // Wrist 3

    moveToJointPosition(move_group_arm, joint_group_positions_arm);

    // Define all unique poses
    std::vector<geometry_msgs::msg::Pose> poses(7);
    
    // Pose 1 轉正後/直
    poses[0].orientation.x = -0.707;
    poses[0].orientation.y = 0.707;
    poses[0].orientation.z = 0.0;
    poses[0].orientation.w = 0.0;
    poses[0].position.x = 0.078;
    poses[0].position.y = -0.485;
    poses[0].position.z = 0.280;
    
    // Pose 2 轉正後/橫
    poses[1].orientation.x = 1.0;
    poses[1].orientation.y = 0.0;
    poses[1].orientation.z = 0.0;
    poses[1].orientation.w = 0.0;
    poses[1].position.x = 0.078;
    poses[1].position.y = -0.485;
    poses[1].position.z = 0.275;

   // Pose 3 5_degree_grip
    poses[2].orientation.x = 0.995;
    poses[2].orientation.y = 0.0;
    poses[2].orientation.z = 0.0;
    poses[2].orientation.w = 0.096;
    poses[2].position.x = 0.087;
    poses[2].position.y = -0.44;
    poses[2].position.z = 0.280;


    // Pose 4 平台/上/橫
    poses[3].orientation.x = 0.995;
    poses[3].orientation.y = 0.0;
    poses[3].orientation.z = 0.0;
    poses[3].orientation.w = 0.096;
    poses[3].position.x = 0.2;
    poses[3].position.y = -0.603;
    poses[3].position.z = 0.225;

    // Pose 5 平台/下/橫
    poses[4].orientation.x = 1.0;
    poses[4].orientation.y = 0.0;
    poses[4].orientation.z = 0.0;
    poses[4].orientation.w = 0.0;
    poses[4].position.x = 0.2;
    poses[4].position.y = -0.603;
    poses[4].position.z = 0.185;

    // Pose 6 旋轉壓積木
    poses[5].orientation.x = -0.707;
    poses[5].orientation.y = 0.707;
    poses[5].orientation.z = 0.0;
    poses[5].orientation.w = 0.0;
    poses[5].position.x = 0.2;
    poses[5].position.y = -0.603;
    poses[5].position.z = 0.195;

    // Pose 7 往x移動
    poses[6].orientation.x = 1.0;
    poses[6].orientation.y = 0.0;
    poses[6].orientation.z = 0.0;
    poses[6].orientation.w = 0.0;
    poses[6].position.x = 0.205;
    poses[6].position.y = -0.603;
    poses[6].position.z = 0.185;

    performMainOperations(move_group_arm, move_group_node, poses, robot_control_node);
    bool continue_operations = true;
    int cycle_count = 0;
    while (continue_operations) {
        RCLCPP_INFO(LOGGER, "Starting cycle %d", cycle_count + 1);

        // 執行主要操作
        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 40, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose home");
        moveToPose(move_group_arm, poses[0]);

        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.1);

        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 6, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose0");
        moveToPose(move_group_arm, poses[1]);

        // Move down along Z-axis
        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.095);

        // Close gripper
        RCLCPP_INFO(LOGGER, "Closing gripper at new position");
        controlGripper(move_group_node, 40, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose home");
        moveToPose(move_group_arm, poses[0]);
        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper after pose0");
        controlGripper(move_group_node, 70, 10);

        // Move down along Z-axis
        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.105);

        RCLCPP_INFO(LOGGER, "Closing gripper at joint position");
        controlGripper(move_group_node, 40, 5);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper after pose0");
        controlGripper(move_group_node, 60, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose0");
        moveToPose(move_group_arm, poses[1]);

        ///////// Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose0");
        moveToPose(move_group_arm, poses[2]);

        // Move down along Z-axis
        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
        moveAlongZAxis(move_group_arm, -0.105);

        RCLCPP_INFO(LOGGER, "Closing gripper at new joint position");
        controlGripper(move_group_node, 15, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose2");
        moveToPose(move_group_arm, poses[3]);

        

        // 進行力變化檢測
        bool fx_changed = false;
        do {
            // Close gripper at pose6
            RCLCPP_INFO(LOGGER, "Closing gripper at pose6");
            controlGripper(move_group_node, 6, 40);

            // Start recording fx values
            RCLCPP_INFO(LOGGER, "Recording fx values for 2 seconds");
            robot_control_node->start_recording();
            rclcpp::sleep_for(std::chrono::seconds(2));
            robot_control_node->stop_recording();

            double average_fx = robot_control_node->get_average_fx();
            RCLCPP_INFO(LOGGER, "Average fx after closing gripper: %f", average_fx);

            // Move to pose4
            RCLCPP_INFO(LOGGER, "Moving to pose4");
            moveToPose(move_group_arm, poses[5]);

            // Wait for 2 seconds after moving to pose4
            RCLCPP_INFO(LOGGER, "Waiting for 2 seconds after moving to pose4");
            rclcpp::sleep_for(std::chrono::seconds(2));

            // Get the final fx value after movement and waiting
            double final_fx = robot_control_node->get_current_fx();
            RCLCPP_INFO(LOGGER, "Final fx after movement and waiting: %f", final_fx);

            // Compare fx values
            fx_changed = (average_fx - final_fx) > 1.0;
            RCLCPP_INFO(LOGGER, fx_changed ? "Significant fx change detected (TRUE)" : "No significant fx change (FALSE)");
            RCLCPP_INFO(LOGGER, "Difference in fx: %f", average_fx - final_fx);

            // Publish the result
            robot_control_node->publish_result(fx_changed);

            if (!fx_changed) {
                // Move to pose3
                RCLCPP_INFO(LOGGER, "Moving to pose3");
                moveToPose(move_group_arm, poses[3]);

                // Move up along Y-axis
                RCLCPP_INFO(LOGGER, "Moving up along Y-axis");
                moveAlongYAxis(move_group_arm, 0.005);

                // Open gripper
                RCLCPP_INFO(LOGGER, "Opening gripper");
                controlGripper(move_group_node, 30, 10);

                // Move to pose3
                RCLCPP_INFO(LOGGER, "Moving to pose3");
                moveToPose(move_group_arm, poses[2]);

                // Close gripper
                RCLCPP_INFO(LOGGER, "Closing gripper at pose3");
                controlGripper(move_group_node, 6, 10);

                // Move to pose4
                RCLCPP_INFO(LOGGER, "Moving to pose4");
                moveToPose(move_group_arm, poses[4]);

                // Move to pose5
                RCLCPP_INFO(LOGGER, "Moving to pose5");
                moveToPose(move_group_arm, poses[2]);

                // Open gripper
                RCLCPP_INFO(LOGGER, "Opening gripper at pose5");
                controlGripper(move_group_node, 30, 10);

                // Move to pose6
                RCLCPP_INFO(LOGGER, "Moving to pose6");
                moveToPose(move_group_arm, poses[3]);
            }
        } while (!fx_changed);

        if (fx_changed) {
        RCLCPP_INFO(LOGGER, "Starting force-controlled movement sequence");
        moveWithForceControl(move_group_arm, robot_control_node);
        RCLCPP_INFO(LOGGER, "Force-controlled movement completed");

        // Move to pose3
        RCLCPP_INFO(LOGGER, "Moving to pose3");
        moveToPose(move_group_arm, poses[3]);

        // 打開夾爪
        RCLCPP_INFO(LOGGER, "Opening gripper");
        controlGripper(move_group_node, 40, 10);
        RCLCPP_INFO(LOGGER, "Waiting for gripper to open");
        rclcpp::sleep_for(std::chrono::seconds(2));

        // 移動到 "Going Home" 位置
        RCLCPP_INFO(LOGGER, "Moving to Going Home position");
        moveToJointPosition(move_group_arm, joint_group_positions_arm);

        // 調整 poses[2] 到 poses[5] 的 y 值
        for (int i = 2; i <= 5; ++i) {
            poses[i].position.y += 0.048;
        }
        RCLCPP_INFO(LOGGER, "Adjusted y values for poses 2 to 5");

        cycle_count++;
        }
    }

    RCLCPP_INFO(LOGGER, "All operations completed.");

    rclcpp::shutdown();
    return 0;
}
*/








































=======
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf

























































/*
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include "std_msgs/msg/int32_multi_array.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "std_msgs/msg/bool.hpp"
#include <thread>
#include <chrono>
#include <vector>
#include <numeric>
#include <moveit_msgs/msg/robot_trajectory.hpp>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

class RobotControl : public rclcpp::Node
{
public:
    RobotControl() : Node("robot_control")
    {
        subscription_ = this->create_subscription<std_msgs::msg::Float64MultiArray>(
            "/sensor_data", 10, std::bind(&RobotControl::sensor_callback, this, std::placeholders::_1));
        
        result_publisher_ = this->create_publisher<std_msgs::msg::Bool>("force_change_result", 10);
        
        fx_values_.clear();
        current_fx_ = 0.0;
        is_recording_ = false;
    }

    void sensor_callback(const std_msgs::msg::Float64MultiArray::SharedPtr msg)
    {
        if (msg->data.size() >= 1)
        {
            current_fx_ = msg->data[0];
            if (is_recording_)
            {
                fx_values_.push_back(current_fx_);
            }
        }
    }

    void start_recording()
    {
        fx_values_.clear();
        is_recording_ = true;
    }

    void stop_recording()
    {
        is_recording_ = false;
    }

    double get_average_fx()
    {
        if (fx_values_.empty())
        {
            return 0.0;
        }
        return std::accumulate(fx_values_.begin(), fx_values_.end(), 0.0) / fx_values_.size();
    }

    double get_current_fx()
    {
        return current_fx_;
    }

    void publish_result(bool result)
    {
        std_msgs::msg::Bool msg;
        msg.data = result;
        result_publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Published result: %s", result ? "TRUE" : "FALSE");
    }

private:
    rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr result_publisher_;
    std::vector<double> fx_values_;
    double current_fx_;
    bool is_recording_;
};

void moveToPose(moveit::planning_interface::MoveGroupInterface& move_group_arm, const geometry_msgs::msg::Pose& target_pose) {
    move_group_arm.setPoseTarget(target_pose);
    moveit::planning_interface::MoveGroupInterface::Plan my_plan;
    bool success = (move_group_arm.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
    if (success) {
        move_group_arm.execute(my_plan);
    } else {
        RCLCPP_ERROR(LOGGER, "Planning failed!");
    }
}

void moveToJointPosition(moveit::planning_interface::MoveGroupInterface& move_group_arm, const std::vector<double>& joint_positions) {
    move_group_arm.setJointValueTarget(joint_positions);
    moveit::planning_interface::MoveGroupInterface::Plan my_plan;
    bool success = (move_group_arm.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
    if (success) {
        move_group_arm.execute(my_plan);
    } else {
        RCLCPP_ERROR(LOGGER, "Planning failed!");
    }
}

void controlGripper(rclcpp::Node::SharedPtr node, int width, int force) {
    auto gripper_publisher = node->create_publisher<std_msgs::msg::Int32MultiArray>("custom_gripper", 10);
    std_msgs::msg::Int32MultiArray gripper_command;
    gripper_command.data = {width, force};
    RCLCPP_INFO(LOGGER, "Publishing Gripper Command: '%d', '%d'", width, force);
    gripper_publisher->publish(gripper_command);
    std::this_thread::sleep_for(std::chrono::seconds(5));
}

void moveAlongXAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
    std::vector<geometry_msgs::msg::Pose> waypoints;
    geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
    geometry_msgs::msg::Pose target_pose = current_pose;
    
    target_pose.position.x += distance;
    waypoints.push_back(target_pose);
    
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
    
    if (fraction == -1.0 || fraction < 0.9) {
        RCLCPP_ERROR(LOGGER, "Path planning for X-axis movement failed");
    } else {
        move_group_arm.execute(trajectory);
    }
}

void moveAlongYAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
    std::vector<geometry_msgs::msg::Pose> waypoints;
    geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
    geometry_msgs::msg::Pose target_pose = current_pose;
    
    target_pose.position.y += distance;
    waypoints.push_back(target_pose);
    
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
    
    if (fraction == -1.0 || fraction < 0.9) {
        RCLCPP_ERROR(LOGGER, "Path planning for Y-axis movement failed");
    } else {
        move_group_arm.execute(trajectory);
    }
}

void moveAlongZAxis(moveit::planning_interface::MoveGroupInterface& move_group_arm, double distance) {
    std::vector<geometry_msgs::msg::Pose> waypoints;
    geometry_msgs::msg::Pose current_pose = move_group_arm.getCurrentPose().pose;
    geometry_msgs::msg::Pose target_pose = current_pose;
    
    target_pose.position.z += distance;
    waypoints.push_back(target_pose);
    
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group_arm.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
    
    if (fraction == -1.0 || fraction < 0.9) {
        RCLCPP_ERROR(LOGGER, "Path planning for Z-axis movement failed");
    } else {
        move_group_arm.execute(trajectory);
    }
}

// 新增的輔助函數，用於調整姿勢的 y 值
void adjustPosesY(std::vector<geometry_msgs::msg::Pose>& poses, double adjustment) {
    for (int i = 2; i <= 5; ++i) {
        poses[i].position.y += adjustment;
    }
}

// 封裝主要操作的函數
void performMainOperations(moveit::planning_interface::MoveGroupInterface& move_group_arm, 
                           rclcpp::Node::SharedPtr move_group_node,
                           const std::vector<geometry_msgs::msg::Pose>& poses) {
    RCLCPP_INFO(LOGGER, "Closing gripper joint position");
    controlGripper(move_group_node, 40, 10);

    // Move to pose1
    RCLCPP_INFO(LOGGER, "Moving to pose home");
    moveToPose(move_group_arm, poses[0]);

    RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
    moveAlongZAxis(move_group_arm, -0.11);

    RCLCPP_INFO(LOGGER, "Closing gripper joint position");
    controlGripper(move_group_node, 6, 10);

    RCLCPP_INFO(LOGGER, "Closing gripper joint position");
    controlGripper(move_group_node, 30, 10);

    // Move to pose1
    RCLCPP_INFO(LOGGER, "Moving to pose0");
    moveToPose(move_group_arm, poses[1]);

    // Open gripper
    RCLCPP_INFO(LOGGER, "Opening gripper after pose0");
    controlGripper(move_group_node, 60, 10);

    // Move down along Z-axis
    RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
    moveAlongZAxis(move_group_arm, -0.11);

    // Close gripper
    RCLCPP_INFO(LOGGER, "Closing gripper at new position");
    controlGripper(move_group_node, 30, 10);

    // Open gripper
    RCLCPP_INFO(LOGGER, "Opening gripper after new joint position");
    controlGripper(move_group_node, 60, 10);

    // Move up along Z-axis
    RCLCPP_INFO(LOGGER, "Moving up along Z-axis");
    moveAlongZAxis(move_group_arm, 0.11);

    RCLCPP_INFO(LOGGER, "Closing gripper at joint position");
    controlGripper(move_group_node, 30, 10);

    RCLCPP_INFO(LOGGER, "Moving to pose home");
    moveToPose(move_group_arm, poses[0]);

    RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
    moveAlongZAxis(move_group_arm, -0.11);

    // Close gripper
    RCLCPP_INFO(LOGGER, "Closing gripper at new joint position");
    controlGripper(move_group_node, 6, 10);
}

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto robot_control_node = std::make_shared<RobotControl>();
    
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
    
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(robot_control_node);
    executor.add_node(move_group_node);
    std::thread([&executor]() { executor.spin(); }).detach();

    static const std::string PLANNING_GROUP_ARM = "ur_manipulator";
    moveit::planning_interface::MoveGroupInterface move_group_arm(move_group_node, PLANNING_GROUP_ARM);
    const moveit::core::JointModelGroup* joint_model_group_arm = move_group_arm.getCurrentState()->getJointModelGroup(PLANNING_GROUP_ARM);
    
    move_group_arm.setMaxVelocityScalingFactor(0.25);
    move_group_arm.setMaxAccelerationScalingFactor(0.25);

    // Get Current State
    moveit::core::RobotStatePtr current_state_arm = move_group_arm.getCurrentState(10);
    std::vector<double> joint_group_positions_arm;
    current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);

    // Go Home
    move_group_arm.setStartStateToCurrentState();
    RCLCPP_INFO(LOGGER, "Going Home");
    
    joint_group_positions_arm[0] = -1.64;  // base 
    joint_group_positions_arm[1] = -2.27;  // shoulder
    joint_group_positions_arm[2] = 1.92;   // elbow
    joint_group_positions_arm[3] = -1.22;  // Wrist 1
    joint_group_positions_arm[4] = -1.57;  // Wrist 2
    joint_group_positions_arm[5] = 1.57;   // Wrist 3

    moveToJointPosition(move_group_arm, joint_group_positions_arm);

    // Define all unique poses
    std::vector<geometry_msgs::msg::Pose> poses(6);
    
    // Pose 1 轉正後/直
    poses[0].orientation.x = -0.707;
    poses[0].orientation.y = 0.707;
    poses[0].orientation.z = 0.0;
    poses[0].orientation.w = 0.0;
    poses[0].position.x = 0.078;
    poses[0].position.y = -0.485;
<<<<<<< HEAD
    poses[0].position.z = 0.280;
=======
    poses[0].position.z = 0.295;
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf
    
    // Pose 2 轉正後/橫
    poses[1].orientation.x = 1.0;
    poses[1].orientation.y = 0.0;
    poses[1].orientation.z = 0.0;
    poses[1].orientation.w = 0.0;
    poses[1].position.x = 0.078;
    poses[1].position.y = -0.485;
<<<<<<< HEAD
    poses[1].position.z = 0.275;
=======
    poses[1].position.z = 0.285;
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf

    // Pose 3 平台/上/橫
    poses[2].orientation.x = 1.0;
    poses[2].orientation.y = 0.0;
    poses[2].orientation.z = 0.0;
    poses[2].orientation.w = 0.0;
    poses[2].position.x = 0.2;
    poses[2].position.y = -0.603;
    poses[2].position.z = 0.225;

    // Pose 4 平台/下/橫
    poses[3].orientation.x = 1.0;
    poses[3].orientation.y = 0.0;
    poses[3].orientation.z = 0.0;
    poses[3].orientation.w = 0.0;
    poses[3].position.x = 0.2;
    poses[3].position.y = -0.603;
    poses[3].position.z = 0.185;

    // Pose 5 旋轉壓積木
<<<<<<< HEAD
    poses[4].orientation.x = -0.707;
    poses[4].orientation.y = 0.707;
=======
    poses[4].orientation.x = 0.707;
    poses[4].orientation.y = -0.707;
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf
    poses[4].orientation.z = 0.0;
    poses[4].orientation.w = 0.0;
    poses[4].position.x = 0.2;
    poses[4].position.y = -0.603;
<<<<<<< HEAD
    poses[4].position.z = 0.195;
=======
    poses[4].position.z = 0.19;
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf

    // Pose 6 往x移動
    poses[5].orientation.x = 1.0;
    poses[5].orientation.y = 0.0;
    poses[5].orientation.z = 0.0;
    poses[5].orientation.w = 0.0;
    poses[5].position.x = 0.205;
    poses[5].position.y = -0.603;
    poses[5].position.z = 0.185;

    bool continue_operations = true;
    int cycle_count = 0;
    while (continue_operations) {
        RCLCPP_INFO(LOGGER, "Starting cycle %d", cycle_count + 1);

        // 執行主要操作
        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 40, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose home");
        moveToPose(move_group_arm, poses[0]);

        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
<<<<<<< HEAD
        moveAlongZAxis(move_group_arm, -0.1);
=======
        moveAlongZAxis(move_group_arm, -0.11);
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf

        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 6, 10);

        RCLCPP_INFO(LOGGER, "Closing gripper joint position");
        controlGripper(move_group_node, 30, 10);

        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose0");
        moveToPose(move_group_arm, poses[1]);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper after pose0");
        controlGripper(move_group_node, 60, 10);

        // Move down along Z-axis
        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
<<<<<<< HEAD
        moveAlongZAxis(move_group_arm, -0.1);
=======
        moveAlongZAxis(move_group_arm, -0.11);
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf

        // Close gripper
        RCLCPP_INFO(LOGGER, "Closing gripper at new position");
        controlGripper(move_group_node, 30, 10);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper after new joint position");
        controlGripper(move_group_node, 60, 10);

        // Move up along Z-axis
        RCLCPP_INFO(LOGGER, "Moving up along Z-axis");
<<<<<<< HEAD
        moveAlongZAxis(move_group_arm, 0.1);
=======
        moveAlongZAxis(move_group_arm, 0.11);
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf

        RCLCPP_INFO(LOGGER, "Closing gripper at joint position");
        controlGripper(move_group_node, 30, 10);

        RCLCPP_INFO(LOGGER, "Moving to pose home");
        moveToPose(move_group_arm, poses[0]);

        RCLCPP_INFO(LOGGER, "Moving down along Z-axis");
<<<<<<< HEAD
        moveAlongZAxis(move_group_arm, -0.1);
=======
        moveAlongZAxis(move_group_arm, -0.11);
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf

        // Close gripper
        RCLCPP_INFO(LOGGER, "Closing gripper at new joint position");
        controlGripper(move_group_node, 10, 10);



///////////組裝平台




        // Move to pose1
        RCLCPP_INFO(LOGGER, "Moving to pose1");
        moveToPose(move_group_arm, poses[2]);

        // Move to pose2
        RCLCPP_INFO(LOGGER, "Moving to pose2");
        moveToPose(move_group_arm, poses[3]);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper at pose2");
        controlGripper(move_group_node, 30, 10);

        // Move to pose3
        RCLCPP_INFO(LOGGER, "Moving to pose3");
        moveToPose(move_group_arm, poses[2]);

        // Close gripper
        RCLCPP_INFO(LOGGER, "Closing gripper at pose3");
<<<<<<< HEAD
        controlGripper(move_group_node, 10, 10);
=======
        controlGripper(move_group_node, 6, 10);
>>>>>>> 486f333f442fd9f602a52c008d070af087fb37bf

        // Move to pose4
        RCLCPP_INFO(LOGGER, "Moving to pose4");
        moveToPose(move_group_arm, poses[4]);

        // Move to pose5
        RCLCPP_INFO(LOGGER, "Moving to pose5");
        moveToPose(move_group_arm, poses[2]);

        // Open gripper
        RCLCPP_INFO(LOGGER, "Opening gripper at pose5");
        controlGripper(move_group_node, 30, 10);

        // Move to pose6
        RCLCPP_INFO(LOGGER, "Moving to pose6");
        moveToPose(move_group_arm, poses[3]);

        // 進行力變化檢測
        bool fx_changed = false;
        do {
            // Close gripper at pose6
            RCLCPP_INFO(LOGGER, "Closing gripper at pose6");
            controlGripper(move_group_node, 6, 40);

            // Start recording fx values
            RCLCPP_INFO(LOGGER, "Recording fx values for 2 seconds");
            robot_control_node->start_recording();
            rclcpp::sleep_for(std::chrono::seconds(2));
            robot_control_node->stop_recording();

            double average_fx = robot_control_node->get_average_fx();
            RCLCPP_INFO(LOGGER, "Average fx after closing gripper: %f", average_fx);

            // Move to pose4
            RCLCPP_INFO(LOGGER, "Moving to pose4");
            moveToPose(move_group_arm, poses[5]);

            // Wait for 2 seconds after moving to pose4
            RCLCPP_INFO(LOGGER, "Waiting for 2 seconds after moving to pose4");
            rclcpp::sleep_for(std::chrono::seconds(2));

            // Get the final fx value after movement and waiting
            double final_fx = robot_control_node->get_current_fx();
            RCLCPP_INFO(LOGGER, "Final fx after movement and waiting: %f", final_fx);

            // Compare fx values
            fx_changed = (average_fx - final_fx) > 1.0;
            RCLCPP_INFO(LOGGER, fx_changed ? "Significant fx change detected (TRUE)" : "No significant fx change (FALSE)");
            RCLCPP_INFO(LOGGER, "Difference in fx: %f", average_fx - final_fx);

            // Publish the result
            robot_control_node->publish_result(fx_changed);

            if (!fx_changed) {
                // Move to pose3
                RCLCPP_INFO(LOGGER, "Moving to pose3");
                moveToPose(move_group_arm, poses[3]);

                // Move up along Y-axis
                RCLCPP_INFO(LOGGER, "Moving up along Y-axis");
                moveAlongYAxis(move_group_arm, 0.005);

                // Open gripper
                RCLCPP_INFO(LOGGER, "Opening gripper");
                controlGripper(move_group_node, 30, 10);

                // Move to pose3
                RCLCPP_INFO(LOGGER, "Moving to pose3");
                moveToPose(move_group_arm, poses[2]);

                // Close gripper
                RCLCPP_INFO(LOGGER, "Closing gripper at pose3");
                controlGripper(move_group_node, 6, 10);

                // Move to pose4
                RCLCPP_INFO(LOGGER, "Moving to pose4");
                moveToPose(move_group_arm, poses[4]);

                // Move to pose5
                RCLCPP_INFO(LOGGER, "Moving to pose5");
                moveToPose(move_group_arm, poses[2]);

                // Open gripper
                RCLCPP_INFO(LOGGER, "Opening gripper at pose5");
                controlGripper(move_group_node, 30, 10);

                // Move to pose6
                RCLCPP_INFO(LOGGER, "Moving to pose6");
                moveToPose(move_group_arm, poses[3]);
            }
        } while (!fx_changed);

        if (fx_changed) {
            RCLCPP_INFO(LOGGER, "Significant force change detected. Preparing for next cycle.");

            // Move to pose3
            RCLCPP_INFO(LOGGER, "Moving to pose3");
            moveToPose(move_group_arm, poses[3]);

            // 打開夾爪
            RCLCPP_INFO(LOGGER, "Opening gripper");
            controlGripper(move_group_node, 40, 10);
            RCLCPP_INFO(LOGGER, "Waiting for gripper to open");
            rclcpp::sleep_for(std::chrono::seconds(2));

            // 移動到 "Going Home" 位置
            RCLCPP_INFO(LOGGER, "Moving to Going Home position");
            moveToJointPosition(move_group_arm, joint_group_positions_arm);

            // 調整 poses[2] 到 poses[5] 的 y 值
            for (int i = 2; i <= 5; ++i) {
                poses[i].position.y += 0.048;
            }
            RCLCPP_INFO(LOGGER, "Adjusted y values for poses 2 to 5");

            cycle_count++;
        }
    }

    RCLCPP_INFO(LOGGER, "All operations completed.");

    rclcpp::shutdown();
    return 0;
}
*/













































/*
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <control_msgs/msg/joint_jog.hpp>
#include <tf2/LinearMath/Transform.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <mutex>

class RobotControl : public rclcpp::Node
{
public:
    RobotControl() : Node("robot_control"), FORCE_THRESHOLD(5.0), FORCE_CONTROL_RATE(100.0)
    {
        RCLCPP_INFO(this->get_logger(), "Initializing RobotControl node");

        move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
            std::shared_ptr<rclcpp::Node>(this), "ur_manipulator");

        sensor_subscription_ = this->create_subscription<std_msgs::msg::Float64MultiArray>(
            "/sensor_data", 10, std::bind(&RobotControl::sensorCallback, this, std::placeholders::_1));

        joint_state_subscriber_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states", 10, std::bind(&RobotControl::jointStateCallback, this, std::placeholders::_1));

        joint_jog_publisher_ = this->create_publisher<control_msgs::msg::JointJog>("/joint_jog", 10);

        // 初始化时钟
        clock_ = this->get_clock();

        // 定義位置
        home_joints_ = {-1.64, -2.27, 1.92, -1.22, -1.57, 1.57};
        poses_.push_back(createPose(0.2, -0.5, 0.3, 1.0, 0.0, 0.0, 0.0)); // pose[0]
        poses_.push_back(createPose(0.1, -0.5, 0.3, 1.0, 0.0, 0.0, 0.0)); // pose[1]

        // 開始執行任務
        this->performTask();
    }

private:
    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;
    rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr sensor_subscription_;
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_subscriber_;
    rclcpp::Publisher<control_msgs::msg::JointJog>::SharedPtr joint_jog_publisher_;
    std::vector<double> home_joints_;
    std::vector<geometry_msgs::msg::Pose> poses_;
    double current_fx_ = 0.0;
    const double FORCE_THRESHOLD;
    const double FORCE_CONTROL_RATE;
    rclcpp::Time last_joint_state_time_;
    std::mutex joint_state_mutex_;
    sensor_msgs::msg::JointState latest_joint_state_;
    rclcpp::Clock::SharedPtr clock_;

    void sensorCallback(const std_msgs::msg::Float64MultiArray::SharedPtr msg)
    {
        if (!msg->data.empty())
        {
            current_fx_ = msg->data[0];
            RCLCPP_DEBUG(this->get_logger(), "Current fx: %.3f", current_fx_);
        }
    }

    void jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(joint_state_mutex_);
        latest_joint_state_ = *msg;
        last_joint_state_time_ = clock_->now();
        RCLCPP_DEBUG(this->get_logger(), "Received joint state update");
    }

    geometry_msgs::msg::Pose createPose(double x, double y, double z, 
                                        double qx, double qy, double qz, double qw)
    {
        geometry_msgs::msg::Pose pose;
        pose.position.x = x;
        pose.position.y = y;
        pose.position.z = z;
        pose.orientation.x = qx;
        pose.orientation.y = qy;
        pose.orientation.z = qz;
        pose.orientation.w = qw;
        return pose;
    }

    bool waitForJointStateUpdate(double timeout_seconds)
    {
        rclcpp::Time start_time = clock_->now();
        rclcpp::Rate rate(10);  // 10 Hz
        while (rclcpp::ok())
        {
            {
                std::lock_guard<std::mutex> lock(joint_state_mutex_);
                if ((clock_->now() - last_joint_state_time_).seconds() < 1.0)
                {
                    return true;
                }
            }
            if ((clock_->now() - start_time).seconds() > timeout_seconds)
            {
                RCLCPP_ERROR(this->get_logger(), "Timeout waiting for joint state update");
                return false;
            }
            rate.sleep();
            rclcpp::spin_some(this->get_node_base_interface());
        }
        return false;
    }

    void moveToJointPosition(const std::vector<double>& joint_positions, double speed_factor)
    {
        RCLCPP_INFO(this->get_logger(), "Moving to joint position with speed factor: %.3f", speed_factor);
        move_group_->setMaxVelocityScalingFactor(speed_factor);
        move_group_->setJointValueTarget(joint_positions);
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = (move_group_->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
        if (success)
        {
            move_group_->execute(my_plan);
            RCLCPP_INFO(this->get_logger(), "Moved to target joint position successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Joint position planning failed");
        }
    }

    void moveToPose(const geometry_msgs::msg::Pose& target_pose, double speed_factor)
    {
        RCLCPP_INFO(this->get_logger(), "Moving to pose with speed factor: %.3f", speed_factor);
        move_group_->setMaxVelocityScalingFactor(speed_factor);
        move_group_->setPoseTarget(target_pose);
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = (move_group_->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
        if (success)
        {
            move_group_->execute(my_plan);
            RCLCPP_INFO(this->get_logger(), "Moved to target pose successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Pose planning failed");
        }
    }

    void moveToPoseWithForceControl(const geometry_msgs::msg::Pose& target_pose, double speed_factor)
    {
        RCLCPP_INFO(this->get_logger(), "Moving to pose with force control, speed factor: %.3f", speed_factor);
        
        if (!waitForJointStateUpdate(10.0))  // 等待最多10秒
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to get current robot state");
            return;
        }

        move_group_->setMaxVelocityScalingFactor(speed_factor);
        move_group_->setPoseTarget(target_pose);
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = (move_group_->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);
        if (success)
        {
            executePlanWithForceControl(my_plan);
            RCLCPP_INFO(this->get_logger(), "Completed move to target pose with force control");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Pose planning failed");
        }
    }

    void executePlanWithForceControl(const moveit::planning_interface::MoveGroupInterface::Plan& plan)
    {
        RCLCPP_INFO(this->get_logger(), "Executing plan with force control");
        rclcpp::Rate rate(FORCE_CONTROL_RATE);
        auto trajectory = plan.trajectory_.joint_trajectory;
        size_t num_points = trajectory.points.size();

        for (size_t i = 0; i < num_points; ++i)
        {
            auto& point = trajectory.points[i];
            move_group_->setJointValueTarget(point.positions);

            if (!waitForJointStateUpdate(1.0))  // 每个点等待最多1秒
            {
                RCLCPP_WARN(this->get_logger(), "Failed to get current robot state, skipping this point");
                continue;
            }

            // 獲取當前末端執行器位置
            geometry_msgs::msg::PoseStamped current_pose = move_group_->getCurrentPose();

            // 計算力控制調整
            double force_error = FORCE_THRESHOLD - current_fx_;
            if (std::abs(force_error) > 0.1)  // 小誤差忽略
            {
                // 將力誤差轉換為x方向的位置調整
                double position_adjustment = force_error * 0.0001;  // 調整係數

                // 計算新的目標位置
                geometry_msgs::msg::Pose target_pose = current_pose.pose;
                target_pose.position.x += position_adjustment;

                // 使用逆運動學計算關節角度
                std::vector<double> joint_values;
                bool found_ik = move_group_->setPositionTarget(
                    target_pose.position.x, target_pose.position.y, target_pose.position.z);

                if (found_ik)
                {
                    move_group_->getJointValueTarget(joint_values);

                    // 創建一個joint_jog消息來調整所有關節
                    control_msgs::msg::JointJog jog_msg;
                    jog_msg.joint_names = move_group_->getJointNames();
                    jog_msg.velocities.resize(jog_msg.joint_names.size());

                    for (size_t j = 0; j < joint_values.size(); ++j)
                    {
                        jog_msg.velocities[j] = (joint_values[j] - point.positions[j]) / 0.1;  // 0.1秒內完成調整
                    }

                    jog_msg.duration = 0.1;
                    joint_jog_publisher_->publish(jog_msg);
                    RCLCPP_DEBUG(this->get_logger(), "Published joint jog message");
                }
                else
                {
                    RCLCPP_WARN(this->get_logger(), "Failed to find IK solution for force control adjustment");
                }
            }

            rate.sleep();
            rclcpp::spin_some(this->get_node_base_interface());
        }
    }

    void performTask()
    {
        // 移動到 home 位置（關節空間），速度為 0.8
        RCLCPP_INFO(this->get_logger(), "Moving to home position");
        move_group_->setStartStateToCurrentState();
        moveToJointPosition(home_joints_, 0.8);
        rclcpp::sleep_for(std::chrono::seconds(2));

        // 移動到 poses[0]，速度為 0.5
        RCLCPP_INFO(this->get_logger(), "Moving to poses[0]");
        moveToPose(poses_[0], 0.5);
        rclcpp::sleep_for(std::chrono::seconds(2));

        // 移動到 poses[1]，使用力控制，速度為 0.5
        RCLCPP_INFO(this->get_logger(), "Moving to poses[1] with force control");
        moveToPoseWithForceControl(poses_[1], 0.5);
        rclcpp::sleep_for(std::chrono::seconds(2));

        RCLCPP_INFO(this->get_logger(), "Task completed");
    }
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotControl>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
*/




















































/*
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

  //設定移動速度（0.1是預設，1.0最快）（不建議調太快，很危險
  move_group_arm.setMaxVelocityScalingFactor(0.05);
  move_group_arm.setMaxAccelerationScalingFactor(0.05); //設定移動加速度（0.1是預設，1.0最快）（不建議調太快，很危險

  // Get Current State
  moveit::core::RobotStatePtr current_state_arm = move_group_arm.getCurrentState(10); //需要10 seconds来获取最新的状态信息, 这意味着如果在10秒内无法获取状态信息, 函数将返回一个nullptr
  std::vector<double> joint_group_positions_arm;
  current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);

  // Go Home //joint控制
  move_group_arm.setStartStateToCurrentState();
  RCLCPP_INFO(LOGGER, "Going Home");
  
  // joint control特定格式
  // 都是弧度
  joint_group_positions_arm[0] = -1.64;  // base 
  joint_group_positions_arm[1] = -2.27;  // shoulder
  joint_group_positions_arm[2] = 1.92;  // elbow
  joint_group_positions_arm[3] = -1.22;  // Wrist 1
  joint_group_positions_arm[4] = -1.57;  // Wrist 2
  joint_group_positions_arm[5] = 1.57;  // Wrist 3

  move_group_arm.setPlanningTime(10.0); // increase the planning time from the default 5 seconds to be sure the planner has enough time to succeed.
  move_group_arm.setJointValueTarget(joint_group_positions_arm);//設定目標 指令
  moveit::planning_interface::MoveGroupInterface::Plan my_plan_arm; //声明了一个变量my_plan_arm//這行寫一次就行
  bool success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);//規劃路徑 指令(my_plan_arm名稱為自取)>並且確認planning 是否 successful //bool寫一次就行

  // Execute
  int attempts1 = 0;
  int max_attempts =10;
  if (success_arm == true){
    move_group_arm.execute(my_plan_arm);
  }
  else {
    while(success_arm == false && attempts1 < max_attempts){
      success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
      attempts1++;
    }
    move_group_arm.execute(my_plan_arm);
  }
  

  
  // Pregrasp
  RCLCPP_INFO(LOGGER, "Pregrasp Position");
  current_state_arm = move_group_arm.getCurrentState(10);
  current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);
  // pose control特定格式, orientation都是Quaternion
  
  //可用這兩行將euler angle轉成quaternion, 
  //ref1: https://wiki.ros.org/tf2/Tutorials/Quaternions
  //ref2: https://wiki.ros.org/tf2/Tutorials/Quaternions
  //tf2::Quaternion quaternion; // 
  //quaternion.setRPY(roll, pitch, yaw); //再搭配下面的四行

  geometry_msgs::msg::Pose target_pose1; 
*/
/*
  target_pose1.orientation.x = 0.707;
  target_pose1.orientation.y = -0.707;
  target_pose1.orientation.z = 0.0;
  target_pose1.orientation.w = 0.0;
  target_pose1.position.x = 0.21;
  target_pose1.position.y = -0.6;
  target_pose1.position.z = 0.2;
*/
/*
  target_pose1.orientation.x = 1.0;
  target_pose1.orientation.y = 0.0;
  target_pose1.orientation.z = 0.0;
  target_pose1.orientation.w = 0.0;
  target_pose1.position.x = 0.2;
  target_pose1.position.y = -0.6;
  target_pose1.position.z = 0.2;

  move_group_arm.setPoseTarget(target_pose1);//設定目標 指令
  success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
 
  // Execute
  int attempts2 = 0;
  if (success_arm == true) { 
  move_group_arm.execute(my_plan_arm);
  }
  else {
    while(success_arm == false && attempts2 < max_attempts){
    success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
    attempts2++;
    }
    move_group_arm.execute(my_plan_arm);
  }



  // Approach
  RCLCPP_INFO(LOGGER, "Approach to object!");
  std::vector<geometry_msgs::msg::Pose> approach_waypoints;
  geometry_msgs::msg::Pose target_pose2 = target_pose1;

  //依照編寫順序執行或同時執行
  
  target_pose2.position.z += 0.0;//  (4.768 , 1.575)
  target_pose2.position.y -= 0.0;
  approach_waypoints.push_back(target_pose2); //push_back是特定語法
  

  target_pose2.position.x -= 0.0;
  approach_waypoints.push_back(target_pose2); //push_back是特定語法


  moveit_msgs::msg::RobotTrajectory trajectory_approach;
  const double jump_threshold = 0.0;
  //jump_threshold是在计算机器人臂执行笛卡尔路径（Cartesian Path）时使用的一个参数，
  //特别是在MoveIt中，这个参数用于控制路径规划时关节空间（joint space）中的最大跳跃
  //当设置为 0.0 时，意味着禁用了跳跃检测
  const double eef_step = 0.01; //We want the Cartesian path to be interpolated at a resolution of 1 cm which is why we will specify 0.01 as the max step in Cartesian translation
  double fraction = move_group_arm.computeCartesianPath(approach_waypoints, eef_step, jump_threshold, trajectory_approach);
  //fraction这个返回值表示函数尝试按照你指定的路径（通过一系列的目标位姿）进行规划，成功规划的部分占你期望的整个路径的比例。
  RCLCPP_INFO(LOGGER, "Path planned for %f of the total path.", fraction);
  
  // Execute 
  if(fraction != -1.0){ //滿足要求
  move_group_arm.execute(trajectory_approach);
  }

  

  rclcpp::shutdown();
  return 0;
}
*/
















































/*
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include "std_msgs/msg/int32_multi_array.hpp"

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
  
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(move_group_node);
  std::thread([&executor]() { executor.spin(); }).detach();

  static const std::string PLANNING_GROUP_ARM = "ur_manipulator";
  moveit::planning_interface::MoveGroupInterface move_group_arm(move_group_node, PLANNING_GROUP_ARM);
  const moveit::core::JointModelGroup *joint_model_group_arm = move_group_arm.getCurrentState()->getJointModelGroup(PLANNING_GROUP_ARM);

  move_group_arm.setMaxVelocityScalingFactor(0.1);
  move_group_arm.setMaxAccelerationScalingFactor(0.1);

  moveit::core::RobotStatePtr current_state_arm = move_group_arm.getCurrentState(10);
  std::vector<double> joint_group_positions_arm;
  current_state_arm->copyJointGroupPositions(joint_model_group_arm, joint_group_positions_arm);


//   std::vector<double> home1 = {-1.64, -1.43, 2.06, -2.22, -1.57, 1.45}; // -94.00 , -82.0 , 118.00 , -127.00 , -90.00 , -83.000 (old-down)

//   std::vector<double> home1 = {-1.69, -1.48, 1.92, -1.92, -1.48, -0.05}; // -97.00 , -85.0 , 110.00 , -110.00 , -85.00 , -3.000 (中繼站)
// std::vector<double> home3 = {-1.64, -1.5, 1.99, -2.08, -1.57, 1.64};  // (-97,-118,130,-130,-86,-3)(中繼站)
// std::vector<double> home1 = {-1.64, -1.5, 1.99, -2.08, -1.57, 1.64}; // -94.00 , -86.0 , 114.00 , -119.00 , -90.00 , -94.000    (new-top)
// std::vector<double> home1 = {-1.64, -1.44, 2.06, -2.03, -1.57, 1.64}; // -93.97 , -82.76 , 116.81 , -124.31 , -59.95 , 85.94   (new-down)error
// std::vector<double> home1 = {-1.64, -1.45, 2.04, -2.19, -1.57, 1.64}; // -94 , -82.83 , 117.16 , -125.55 , -90 , -94   (new-down)
*/
/*
// 定義三個家的位置-side-1 
  std::vector<double> home1 = {-1.69, -1.43, 2.69, -3.56, -1.5, -0.05}; // -97.00 , -82.0 , 154.00 , -204.00 , -86.00 , -3.000
  std::vector<double> home2 = {-1.69, -1.54, 2.65, -3.67, -1.31, 2.09};
  std::vector<double> home3 = {-1.7, -1.38, 2.73, -3.69, -1.5, 3.08};   // -97.03 , -78.8 , 156.63 , -211.59 , -86.03 , 176.39


  moveToPosition(home1, "Home 1");
  controlGripper(30, 10);  // 夾取
  moveToPosition(home2, "Home 2");
  moveToPosition(home3, "Home 3");
  controlGripper(70, 10);  // 打開夾爪
*/

/*
// 定義三個家的位置-side-2
  std::vector<double> home1 = {-1.64, -0.82, 1.2,  -1.17, -1.55, -0.1}; // -93.00 , -37.49 , 57.68 , -54.640 , -91.49 , -3.000
  std::vector<double> home2 = {-1.69, -1.54, 2.65, -3.67, -1.31, 2.09};
  std::vector<double> home3 = {-1.69, -1.43, 2.69, -3.56, -1.5, -0.05}; // -97.00 , -82.0 , 154.00 , -204.00 , -86.00 , -3.000


  moveToPosition(home1, "Home 1");
  controlGripper(30, 10);  // 夾取
  moveToPosition(home2, "Home 2");
  moveToPosition(home3, "Home 3");
  controlGripper(70, 10);  // 打開夾爪
*/ //-1.69, -1.43, 2.69, -3.56, -1.5, -0.05

/*
// 定義三個家的位置-back
  std::vector<double> home1 = {-1.64, -2.27, 1.92, -1.22, -1.57, 1.57};
  std::vector<double> home2 = {-1.69, -1.43, 2.69, -3.56, -1.5, -0.05}; // -97.00 , -82.0 , 154.00 , -204.00 , -86.00 , -3.000
  std::vector<double> home3 = {-1.73, -1.62, 2.04,  -2.46, -1.26, -0.98};
  std::vector<double> home4 = {-1.64, -0.82, 1.2,  -1.17, -1.55, -0.1};
  std::vector<double> home5 = {-1.69, -1.43, 2.69, -3.56, -1.5, -0.05}; // -97.00 , -82.0 , 154.00 , -204.00 , -86.00 , -3.000
  std::vector<double> home6 = {-1.7, -1.38, 2.73, -3.69, -1.5, 3.08};
 

  moveToPosition(home1, "Home 1");
  moveToPosition(home2, "Home 2");
  controlGripper(30, 10);  // 打開夾爪
  moveToPosition(home3, "Home 3");
  moveToPosition(home4, "Home 4");
  controlGripper(70, 10);  // 放開夾爪
  moveToPosition(home5, "Home 5");
  controlGripper(30, 10);  // 夾取
  moveToPosition(home6, "Home 6");
  controlGripper(70, 10);  // 放開夾爪
*/
/*
  // 創建夾爪發布器
  auto gripper_publisher = move_group_node->create_publisher<std_msgs::msg::Int32MultiArray>("custom_gripper", 10);

  // 函數：移動到指定位置
  auto moveToPosition = [&](const std::vector<double>& target_position, const std::string& position_name) {
    RCLCPP_INFO(LOGGER, "Moving to %s", position_name.c_str());
    move_group_arm.setStartStateToCurrentState();
    move_group_arm.setJointValueTarget(target_position);
    move_group_arm.setPlanningTime(10.0);
    moveit::planning_interface::MoveGroupInterface::Plan my_plan_arm;
    bool success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
    int attempts = 0;
    int max_attempts = 10;
    if (success_arm) {
      move_group_arm.execute(my_plan_arm);
    } else {
      while (!success_arm && attempts < max_attempts) {
        success_arm = (move_group_arm.plan(my_plan_arm) == moveit::core::MoveItErrorCode::SUCCESS);
        attempts++;
      }
      if (success_arm) {
        move_group_arm.execute(my_plan_arm);
      } else {
        RCLCPP_ERROR(LOGGER, "Failed to plan and execute movement to %s after %d attempts", position_name.c_str(), max_attempts);
      }
    }
    rclcpp::sleep_for(std::chrono::seconds(2));  // 短暫停頓
  };

  // 函數：控制夾爪
  auto controlGripper = [&](int width, int force) {
    std_msgs::msg::Int32MultiArray gripper_command;
    gripper_command.data = {width, force};
    RCLCPP_INFO(LOGGER, "Publishing Gripper Command: width=%d, force=%d", width, force);
    gripper_publisher->publish(gripper_command);
    rclcpp::sleep_for(std::chrono::seconds(2));  // 等待夾爪動作完成
  };
*/
/*
  // 執行流程
  moveToPosition(home1, "Home 1");
  moveToPosition(home2, "Home 2");
  controlGripper(30, 10);  // 打開夾爪
  moveToPosition(home3, "Home 3");
  moveToPosition(home4, "Home 4");
  controlGripper(70, 10);  // 放開夾爪
  moveToPosition(home5, "Home 5");
  controlGripper(30, 10);  // 夾取
  moveToPosition(home6, "Home 6");
  controlGripper(70, 10);  // 放開夾爪
*/
/*
  RCLCPP_INFO(LOGGER, "All movements and gripper operations completed");
  rclcpp::shutdown();
  return 0;
}
*/