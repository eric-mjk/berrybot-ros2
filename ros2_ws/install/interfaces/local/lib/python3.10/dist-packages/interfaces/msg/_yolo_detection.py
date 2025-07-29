# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/YoloDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YoloDetection(type):
    """Metaclass of message 'YoloDetection'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.YoloDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yolo_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yolo_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yolo_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yolo_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yolo_detection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class YoloDetection(metaclass=Metaclass_YoloDetection):
    """Message class 'YoloDetection'."""

    __slots__ = [
        '_x',
        '_y',
        '_w',
        '_h',
        '_conf',
        '_x1',
        '_y1',
        '_conf1',
        '_x2',
        '_y2',
        '_conf2',
        '_x3',
        '_y3',
        '_conf3',
    ]

    _fields_and_field_types = {
        'x': 'float',
        'y': 'float',
        'w': 'float',
        'h': 'float',
        'conf': 'float',
        'x1': 'float',
        'y1': 'float',
        'conf1': 'float',
        'x2': 'float',
        'y2': 'float',
        'conf2': 'float',
        'x3': 'float',
        'y3': 'float',
        'conf3': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.w = kwargs.get('w', float())
        self.h = kwargs.get('h', float())
        self.conf = kwargs.get('conf', float())
        self.x1 = kwargs.get('x1', float())
        self.y1 = kwargs.get('y1', float())
        self.conf1 = kwargs.get('conf1', float())
        self.x2 = kwargs.get('x2', float())
        self.y2 = kwargs.get('y2', float())
        self.conf2 = kwargs.get('conf2', float())
        self.x3 = kwargs.get('x3', float())
        self.y3 = kwargs.get('y3', float())
        self.conf3 = kwargs.get('conf3', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.w != other.w:
            return False
        if self.h != other.h:
            return False
        if self.conf != other.conf:
            return False
        if self.x1 != other.x1:
            return False
        if self.y1 != other.y1:
            return False
        if self.conf1 != other.conf1:
            return False
        if self.x2 != other.x2:
            return False
        if self.y2 != other.y2:
            return False
        if self.conf2 != other.conf2:
            return False
        if self.x3 != other.x3:
            return False
        if self.y3 != other.y3:
            return False
        if self.conf3 != other.conf3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def w(self):
        """Message field 'w'."""
        return self._w

    @w.setter
    def w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'w' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._w = value

    @builtins.property
    def h(self):
        """Message field 'h'."""
        return self._h

    @h.setter
    def h(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'h' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._h = value

    @builtins.property
    def conf(self):
        """Message field 'conf'."""
        return self._conf

    @conf.setter
    def conf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'conf' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'conf' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._conf = value

    @builtins.property
    def x1(self):
        """Message field 'x1'."""
        return self._x1

    @x1.setter
    def x1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x1 = value

    @builtins.property
    def y1(self):
        """Message field 'y1'."""
        return self._y1

    @y1.setter
    def y1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y1 = value

    @builtins.property
    def conf1(self):
        """Message field 'conf1'."""
        return self._conf1

    @conf1.setter
    def conf1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'conf1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'conf1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._conf1 = value

    @builtins.property
    def x2(self):
        """Message field 'x2'."""
        return self._x2

    @x2.setter
    def x2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x2 = value

    @builtins.property
    def y2(self):
        """Message field 'y2'."""
        return self._y2

    @y2.setter
    def y2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y2 = value

    @builtins.property
    def conf2(self):
        """Message field 'conf2'."""
        return self._conf2

    @conf2.setter
    def conf2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'conf2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'conf2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._conf2 = value

    @builtins.property
    def x3(self):
        """Message field 'x3'."""
        return self._x3

    @x3.setter
    def x3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x3 = value

    @builtins.property
    def y3(self):
        """Message field 'y3'."""
        return self._y3

    @y3.setter
    def y3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y3 = value

    @builtins.property
    def conf3(self):
        """Message field 'conf3'."""
        return self._conf3

    @conf3.setter
    def conf3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'conf3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'conf3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._conf3 = value
