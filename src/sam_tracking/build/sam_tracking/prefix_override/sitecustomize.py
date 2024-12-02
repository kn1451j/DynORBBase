import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/parallels/DynORBBase/src/sam_tracking/install/sam_tracking'
