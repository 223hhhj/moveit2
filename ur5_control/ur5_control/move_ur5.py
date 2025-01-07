import rclpy
from rclpy.node import Node
from moveit_commander import MoveGroupCommander

class UR5Controller(Node):

    def __init__(self):
        super().__init__('ur5_controller')
        self.move_group = MoveGroupCommander("ur5_manipulator")  # 使用檢查到的MoveGroup名稱

    def move_to_pose(self, pose):
        self.move_group.set_pose_target(pose)
        plan = self.move_group.go(wait=True)
        self.move_group.stop()
        self.move_group.clear_pose_targets()

def main(args=None):
    rclpy.init(args=args)
    ur5_controller = UR5Controller()

    target_pose = ur5_controller.move_group.get_current_pose().pose
    target_pose.position.x = -0.6
    target_pose.position.y = -0.27
    target_pose.position.z = 0.16
    target_pose.orientation.x = 0.3
    target_pose.orientation.y = 3.0
    target_pose.orientation.z = 0.3
    ur5_controller.move_to_pose(target_pose)

    ur5_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
