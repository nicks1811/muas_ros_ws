import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/nicks1811/muas_ros_workspace/install/gnc_trajectory'
