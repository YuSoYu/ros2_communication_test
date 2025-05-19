import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/usou/dev_ws/ros2_comu_test/ros2_communication_test/install/roscar_comm_py'
