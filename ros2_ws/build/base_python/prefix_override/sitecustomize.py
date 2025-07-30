import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mj/Desktop/BerryBot/git_folder/berrybot-ros2/ros2_ws/install/base_python'
