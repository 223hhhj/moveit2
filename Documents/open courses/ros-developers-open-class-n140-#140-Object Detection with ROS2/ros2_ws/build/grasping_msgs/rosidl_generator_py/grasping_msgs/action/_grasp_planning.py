# generated from rosidl_generator_py/resource/_idl.py.em
# with input from grasping_msgs:action/GraspPlanning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraspPlanning_Goal(type):
    """Metaclass of message 'GraspPlanning_Goal'."""

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
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grasp_planning__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grasp_planning__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grasp_planning__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__grasp_planning__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grasp_planning__goal

            from grasping_msgs.msg import Object
            if Object.__class__._TYPE_SUPPORT is None:
                Object.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_Goal(metaclass=Metaclass_GraspPlanning_Goal):
    """Message class 'GraspPlanning_Goal'."""

    __slots__ = [
        '_object',
        '_group_name',
    ]

    _fields_and_field_types = {
        'object': 'grasping_msgs/Object',
        'group_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['grasping_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from grasping_msgs.msg import Object
        self.object = kwargs.get('object', Object())
        self.group_name = kwargs.get('group_name', str())

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
        if self.object != other.object:
            return False
        if self.group_name != other.group_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if __debug__:
            from grasping_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object' field must be a sub message of type 'Object'"
        self._object = value

    @property
    def group_name(self):
        """Message field 'group_name'."""
        return self._group_name

    @group_name.setter
    def group_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'group_name' field must be of type 'str'"
        self._group_name = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GraspPlanning_Result(type):
    """Metaclass of message 'GraspPlanning_Result'."""

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
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grasp_planning__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grasp_planning__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grasp_planning__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__grasp_planning__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grasp_planning__result

            from moveit_msgs.msg import Grasp
            if Grasp.__class__._TYPE_SUPPORT is None:
                Grasp.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_Result(metaclass=Metaclass_GraspPlanning_Result):
    """Message class 'GraspPlanning_Result'."""

    __slots__ = [
        '_grasps',
    ]

    _fields_and_field_types = {
        'grasps': 'sequence<moveit_msgs/Grasp>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Grasp')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.grasps = kwargs.get('grasps', [])

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
        if self.grasps != other.grasps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def grasps(self):
        """Message field 'grasps'."""
        return self._grasps

    @grasps.setter
    def grasps(self, value):
        if __debug__:
            from moveit_msgs.msg import Grasp
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Grasp) for v in value) and
                 True), \
                "The 'grasps' field must be a set or sequence and each value of type 'Grasp'"
        self._grasps = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GraspPlanning_Feedback(type):
    """Metaclass of message 'GraspPlanning_Feedback'."""

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
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grasp_planning__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grasp_planning__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grasp_planning__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__grasp_planning__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grasp_planning__feedback

            from moveit_msgs.msg import Grasp
            if Grasp.__class__._TYPE_SUPPORT is None:
                Grasp.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_Feedback(metaclass=Metaclass_GraspPlanning_Feedback):
    """Message class 'GraspPlanning_Feedback'."""

    __slots__ = [
        '_grasps',
    ]

    _fields_and_field_types = {
        'grasps': 'sequence<moveit_msgs/Grasp>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Grasp')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.grasps = kwargs.get('grasps', [])

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
        if self.grasps != other.grasps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def grasps(self):
        """Message field 'grasps'."""
        return self._grasps

    @grasps.setter
    def grasps(self, value):
        if __debug__:
            from moveit_msgs.msg import Grasp
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Grasp) for v in value) and
                 True), \
                "The 'grasps' field must be a set or sequence and each value of type 'Grasp'"
        self._grasps = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GraspPlanning_SendGoal_Request(type):
    """Metaclass of message 'GraspPlanning_SendGoal_Request'."""

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
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grasp_planning__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grasp_planning__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grasp_planning__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__grasp_planning__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grasp_planning__send_goal__request

            from grasping_msgs.action import GraspPlanning
            if GraspPlanning.Goal.__class__._TYPE_SUPPORT is None:
                GraspPlanning.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_SendGoal_Request(metaclass=Metaclass_GraspPlanning_SendGoal_Request):
    """Message class 'GraspPlanning_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'grasping_msgs/GraspPlanning_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grasping_msgs', 'action'], 'GraspPlanning_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grasping_msgs.action._grasp_planning import GraspPlanning_Goal
        self.goal = kwargs.get('goal', GraspPlanning_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from grasping_msgs.action._grasp_planning import GraspPlanning_Goal
            assert \
                isinstance(value, GraspPlanning_Goal), \
                "The 'goal' field must be a sub message of type 'GraspPlanning_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GraspPlanning_SendGoal_Response(type):
    """Metaclass of message 'GraspPlanning_SendGoal_Response'."""

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
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grasp_planning__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grasp_planning__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grasp_planning__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__grasp_planning__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grasp_planning__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_SendGoal_Response(metaclass=Metaclass_GraspPlanning_SendGoal_Response):
    """Message class 'GraspPlanning_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_GraspPlanning_SendGoal(type):
    """Metaclass of service 'GraspPlanning_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__grasp_planning__send_goal

            from grasping_msgs.action import _grasp_planning
            if _grasp_planning.Metaclass_GraspPlanning_SendGoal_Request._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_SendGoal_Request.__import_type_support__()
            if _grasp_planning.Metaclass_GraspPlanning_SendGoal_Response._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_SendGoal_Response.__import_type_support__()


class GraspPlanning_SendGoal(metaclass=Metaclass_GraspPlanning_SendGoal):
    from grasping_msgs.action._grasp_planning import GraspPlanning_SendGoal_Request as Request
    from grasping_msgs.action._grasp_planning import GraspPlanning_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GraspPlanning_GetResult_Request(type):
    """Metaclass of message 'GraspPlanning_GetResult_Request'."""

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
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grasp_planning__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grasp_planning__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grasp_planning__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__grasp_planning__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grasp_planning__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_GetResult_Request(metaclass=Metaclass_GraspPlanning_GetResult_Request):
    """Message class 'GraspPlanning_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GraspPlanning_GetResult_Response(type):
    """Metaclass of message 'GraspPlanning_GetResult_Response'."""

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
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grasp_planning__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grasp_planning__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grasp_planning__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__grasp_planning__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grasp_planning__get_result__response

            from grasping_msgs.action import GraspPlanning
            if GraspPlanning.Result.__class__._TYPE_SUPPORT is None:
                GraspPlanning.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_GetResult_Response(metaclass=Metaclass_GraspPlanning_GetResult_Response):
    """Message class 'GraspPlanning_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'grasping_msgs/GraspPlanning_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grasping_msgs', 'action'], 'GraspPlanning_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from grasping_msgs.action._grasp_planning import GraspPlanning_Result
        self.result = kwargs.get('result', GraspPlanning_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from grasping_msgs.action._grasp_planning import GraspPlanning_Result
            assert \
                isinstance(value, GraspPlanning_Result), \
                "The 'result' field must be a sub message of type 'GraspPlanning_Result'"
        self._result = value


class Metaclass_GraspPlanning_GetResult(type):
    """Metaclass of service 'GraspPlanning_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__grasp_planning__get_result

            from grasping_msgs.action import _grasp_planning
            if _grasp_planning.Metaclass_GraspPlanning_GetResult_Request._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_GetResult_Request.__import_type_support__()
            if _grasp_planning.Metaclass_GraspPlanning_GetResult_Response._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_GetResult_Response.__import_type_support__()


class GraspPlanning_GetResult(metaclass=Metaclass_GraspPlanning_GetResult):
    from grasping_msgs.action._grasp_planning import GraspPlanning_GetResult_Request as Request
    from grasping_msgs.action._grasp_planning import GraspPlanning_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GraspPlanning_FeedbackMessage(type):
    """Metaclass of message 'GraspPlanning_FeedbackMessage'."""

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
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__grasp_planning__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__grasp_planning__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__grasp_planning__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__grasp_planning__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__grasp_planning__feedback_message

            from grasping_msgs.action import GraspPlanning
            if GraspPlanning.Feedback.__class__._TYPE_SUPPORT is None:
                GraspPlanning.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspPlanning_FeedbackMessage(metaclass=Metaclass_GraspPlanning_FeedbackMessage):
    """Message class 'GraspPlanning_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'grasping_msgs/GraspPlanning_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grasping_msgs', 'action'], 'GraspPlanning_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grasping_msgs.action._grasp_planning import GraspPlanning_Feedback
        self.feedback = kwargs.get('feedback', GraspPlanning_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from grasping_msgs.action._grasp_planning import GraspPlanning_Feedback
            assert \
                isinstance(value, GraspPlanning_Feedback), \
                "The 'feedback' field must be a sub message of type 'GraspPlanning_Feedback'"
        self._feedback = value


class Metaclass_GraspPlanning(type):
    """Metaclass of action 'GraspPlanning'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grasping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasping_msgs.action.GraspPlanning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__grasp_planning

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from grasping_msgs.action import _grasp_planning
            if _grasp_planning.Metaclass_GraspPlanning_SendGoal._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_SendGoal.__import_type_support__()
            if _grasp_planning.Metaclass_GraspPlanning_GetResult._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_GetResult.__import_type_support__()
            if _grasp_planning.Metaclass_GraspPlanning_FeedbackMessage._TYPE_SUPPORT is None:
                _grasp_planning.Metaclass_GraspPlanning_FeedbackMessage.__import_type_support__()


class GraspPlanning(metaclass=Metaclass_GraspPlanning):

    # The goal message defined in the action definition.
    from grasping_msgs.action._grasp_planning import GraspPlanning_Goal as Goal
    # The result message defined in the action definition.
    from grasping_msgs.action._grasp_planning import GraspPlanning_Result as Result
    # The feedback message defined in the action definition.
    from grasping_msgs.action._grasp_planning import GraspPlanning_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from grasping_msgs.action._grasp_planning import GraspPlanning_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from grasping_msgs.action._grasp_planning import GraspPlanning_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from grasping_msgs.action._grasp_planning import GraspPlanning_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
