#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

from cv_bridge import CvBridge

from sensor_msgs.msg import Image
from interfaces.action import Perception  # Replace with your actual package
from interfaces.msg import YoloDetection
"""
# Goal definition
bool run
---
# Result definition
YoloDetection yolo_result
---
# Feedback definition
string status
"""
"""
YoloDetection
float32 x
float32 y
float32 w
float32 h
float32 conf
float32 x1
float32 y1
float32 conf1
float32 x2
float32 y2
float32 conf2
float32 x3
float32 y3
float32 conf3
"""


class PerceptionNode(Node):
    def __init__(self):
        super().__init__('perception_node')

        self.bridge = CvBridge()
        self.latest_image = None

        # Image subscriber
        self.subscription = self.create_subscription(
            Image,
            'image',
            self.image_callback,
            10
        )

        # Action server
        self.action_server = ActionServer(
            self,
            Perception,
            'perception',
            self.execute_callback
        )

        self.get_logger().info("Perception node initialized.")

    def image_callback(self, msg):
        self.latest_image = msg
        self.get_logger().debug("Image received.")

    async def execute_callback(self, goal_handle):
        self.get_logger().info("Received perception goal.")

        if self.latest_image is None:
            self.get_logger().warn("No image available yet.")
            goal_handle.abort()
            return Perception.Result()

        # Convert to OpenCV image
        try:
            cv_image = self.bridge.imgmsg_to_cv2(image_msg, desired_encoding='bgr8')
        except Exception as e:
            self.get_logger().error(f"cv_bridge error: {e}")
            goal_handle.abort()
            return Perception.Result()

        # Placeholder processing function (res is type msg : YoloDetection)
        res: YoloDetection = self.process_image(cv_image)
        result = Perception.Result(res)
        goal_handle.succeed()

        return result

    def process_image(self, cv_image) -> YoloDetection:

        # TODO: Replace with actual perception logic
        self.get_logger().info("Processing image...")
        return "Perception result placeholder"






def main(args=None):
    rclpy.init(args=args)
    node = PerceptionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down.")
    finally:
        node.destroy_node()
        rclpy.shutdown()
