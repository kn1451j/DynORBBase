# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynorb_interface:srv/FeedFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FeedFrame_Request(type):
    """Metaclass of message 'FeedFrame_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dynorb_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynorb_interface.srv.FeedFrame_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__feed_frame__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__feed_frame__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__feed_frame__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__feed_frame__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__feed_frame__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FeedFrame_Request(metaclass=Metaclass_FeedFrame_Request):
    """Message class 'FeedFrame_Request'."""

    __slots__ = [
        '_frame',
    ]

    _fields_and_field_types = {
        'frame': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.frame = kwargs.get('frame', Image())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.frame != other.frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'frame' field must be a sub message of type 'Image'"
        self._frame = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FeedFrame_Response(type):
    """Metaclass of message 'FeedFrame_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dynorb_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynorb_interface.srv.FeedFrame_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__feed_frame__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__feed_frame__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__feed_frame__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__feed_frame__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__feed_frame__response

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FeedFrame_Response(metaclass=Metaclass_FeedFrame_Response):
    """Message class 'FeedFrame_Response'."""

    __slots__ = [
        '_seg',
    ]

    _fields_and_field_types = {
        'seg': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.seg = kwargs.get('seg', Image())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.seg != other.seg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def seg(self):
        """Message field 'seg'."""
        return self._seg

    @seg.setter
    def seg(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'seg' field must be a sub message of type 'Image'"
        self._seg = value


class Metaclass_FeedFrame(type):
    """Metaclass of service 'FeedFrame'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dynorb_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynorb_interface.srv.FeedFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__feed_frame

            from dynorb_interface.srv import _feed_frame
            if _feed_frame.Metaclass_FeedFrame_Request._TYPE_SUPPORT is None:
                _feed_frame.Metaclass_FeedFrame_Request.__import_type_support__()
            if _feed_frame.Metaclass_FeedFrame_Response._TYPE_SUPPORT is None:
                _feed_frame.Metaclass_FeedFrame_Response.__import_type_support__()


class FeedFrame(metaclass=Metaclass_FeedFrame):
    from dynorb_interface.srv._feed_frame import FeedFrame_Request as Request
    from dynorb_interface.srv._feed_frame import FeedFrame_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
