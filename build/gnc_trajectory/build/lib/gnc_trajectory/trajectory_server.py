# trajectory_server.py (rclpy)
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point, Vector3
from std_msgs.msg import Header
from gnc_msgs.msg import TrajectoryPoint
import numpy as np
import time

class TrajectoryServer(Node):
    def __init__(self):
        super().__init__('trajectory_server')
        self.pub = self.create_publisher(TrajectoryPoint, 'trajectory/reference', 10)
        timer_period = 0.02
        self.timer = self.create_timer(timer_period, self.timer_cb)
        # Precompute polynomial coeffs or simple minimum-jerk segments
        self.start_time = time.time()
        self.T = 20.0

    def sample_trajectory(self, t):
        # circular demo
        r = 2.0
        omega = 2*np.pi/self.T
        x = r*np.cos(omega*t)
        y = r*np.sin(omega*t)
        z = 1.0 + 0.5*np.sin(0.5*omega*t)
        vx = -r*omega*np.sin(omega*t)
        vy = r*omega*np.cos(omega*t)
        vz = 0.5*0.5*omega*np.cos(0.5*omega*t)
        ax = -r*(omega**2)*np.cos(omega*t)
        ay = -r*(omega**2)*np.sin(omega*t)
        az = -0.5*(0.5*omega)**2*np.sin(0.5*omega*t)
        yaw = np.arctan2(vy, vx)
        return (x,y,z), (vx,vy,vz), (ax,ay,az), yaw

    def timer_cb(self):
        now = time.time() - self.start_time
        pos, vel, acc, yaw = self.sample_trajectory(now)
        msg = TrajectoryPoint()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.position.x, msg.position.y, msg.position.z = pos
        msg.velocity.x, msg.velocity.y, msg.velocity.z = vel
        msg.acceleration.x, msg.acceleration.y, msg.acceleration.z = acc
        msg.yaw = yaw
        self.pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TrajectoryServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
