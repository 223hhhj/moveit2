# generated from rosidl_generator_py/resource/_idl.py.em
# with input from grasping_msgs:action/FindGraspableObjects.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FindGraspableObjects_Goal(type):
    """Metaclass of message 'FindGraspableObjects_Goal'."""

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
                'grasping_msgs.action.FindGraspableObjects_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__find_graspable_objects__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__find_graspable_objects__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__find_graspable_objects__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__find_graspable_objects__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__find_graspable_objects__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FindGraspableObjects_Goal(metaclass=Metaclass_FindGraspableObjects_Goal):
    """Message class 'FindGraspableObjects_Goal'."""

    __slots__ = [
        '_plan_grasps',
    ]

    _fields_and_field_types = {
        'plan_grasps': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.plan_grasps = kwargs.get('plan_grasps', bool())

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
        if self.plan_grasps != other.plan_grasps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def plan_grasps(self):
        """Message field 'plan_grasps'."""
        return self._plan_grasps

    @plan_grasps.setter
    def plan_grasps(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plan_grasps' field must be of type 'bool'"
        self._plan_grasps = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FindGraspableObjects_Result(type):
    """Metaclass of message 'FindGraspableObjects_Result'."""

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
                'grasping_msgs.action.FindGraspableObjects_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__find_graspable_objects__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__find_graspable_objects__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__find_graspable_objects__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__find_graspable_objects__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__find_graspable_objects__result

            from grasping_msgs.msg import GraspableObject
            if GraspableObject.__class__._TYPE_SUPPORT is None:
                GraspableObject.__class__.__import_type_support__()

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


class FindGraspableObjects_Result(metaclass=Metaclass_FindGraspableObjects_Result):
    """Message class 'FindGraspableObjects_Result'."""

    __slots__ = [
        '_objects',
        '_support_surfaces',
    ]

    _fields_and_field_types = {
        'objects': 'sequence<grasping_msgs/GraspableObject>',
        'support_surfaces': 'sequence<grasping_msgs/Object>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['grasping_msgs', 'msg'], 'GraspableObject')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['grasping_msgs', 'msg'], 'Object')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.objects = kwargs.get('objects', [])
        self.support_surfaces = kwargs.get('support_surfaces', [])

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
        if self.objects != other.objects:
            return False
        if self.support_surfaces != other.support_surfaces:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def objects(self):
        """Message field 'objects'."""
        return self._objects

    @objects.setter
    def objects(self, value):
        if __debug__:
            from grasping_msgs.msg import GraspableObject
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
                 all(isinstance(v, GraspableObject) for v in value) and
                 True), \
                "The 'objects' field must be a set or sequence and each value of type 'GraspableObject'"
        self._objects = value

    @property
    def support_surfaces(self):
        """Message field 'support_surfaces'."""
        return self._support_surfaces

    @support_surfaces.setter
    def support_surfaces(self, value):
        if __debug__:
            from grasping_msgs.msg import Object
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
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'support_surfaces' field must be a set or sequence and each value of type 'Object'"
        self._support_surfaces = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FindGraspableObjects_Feedback(type):
    """Metaclass of message 'FindGraspableObjects_Feedback'."""

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
                'grasping_msgs.action.FindGraspableObjects_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__find_graspable_objects__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__find_graspable_objects__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__find_graspable_objects__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__find_graspable_objects__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__find_graspable_objects__feedback

            from grasping_msgs.msg import GraspableObject
            if GraspableObject.__class__._TYPE_SUPPORT is None:
                GraspableObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FindGraspableObjects_Feedback(metaclass=Metaclass_FindGraspableObjects_Feedback):
    """Message class 'FindGraspableObjects_Feedback'."""

    __slots__ = [
        '_object',
    ]

    _fields_and_field_types = {
        'object': 'grasping_msgs/GraspableObject',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['grasping_msgs', 'msg'], 'GraspableObject'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from grasping_msgs.msg import GraspableObject
        self.object = kwargs.get('object', GraspableObject())

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
            from grasping_msgs.msg import GraspableObject
            assert \
                isinstance(value, GraspableObject), \
                "The 'object' field must be a sub message of type 'GraspableObject'"
        self._object = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FindGraspableObjects_SendGoal_Request(type):
    """Metaclass of message 'FindGraspableObjects_SendGoal_Request'."""

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
                'grasping_msgs.action.FindGraspableObjects_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__find_graspable_objects__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__find_graspable_objects__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__find_graspable_objects__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__find_graspable_objects__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__find_graspable_objects__send_goal__request

            from grasping_msgs.action import FindGraspableObjects
            if FindGraspableObjects.Goal.__class__._TYPE_SUPPORT is None:
                FindGraspableObjects.Goal.__class__.__import_type_support__()

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


class FindGraspableObjects_SendGoal_Request(metaclass=Metaclass_FindGraspableObjects_SendGoal_Request):
    """Message class 'FindGraspableObjects_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'grasping_msgs/FindGraspableObjects_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grasping_msgs', 'action'], 'FindGraspableObjects_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Goal
        self.goal = kwargs.get('goal', FindGraspableObjects_Goal())

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
            from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Goal
            assert \
                isinstance(value, FindGraspableObjects_Goal), \
                "The 'goal' field must be a sub message of type 'FindGraspableObjects_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FindGraspableObjects_SendGoal_Response(type):
    """Metaclass of message 'FindGraspableObjects_SendGoal_Response'."""

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
                'grasping_msgs.action.FindGraspableObjects_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__find_graspable_objects__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__find_graspable_objects__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__find_graspable_objects__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__find_graspable_objects__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__find_graspable_objects__send_goal__response

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


class FindGraspableObjects_SendGoal_Response(metaclass=Metaclass_FindGraspableObjects_SendGoal_Response):
    """Message class 'FindGraspableObjects_SendGoal_Response'."""

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


class Metaclass_FindGraspableObjects_SendGoal(type):
    """Metaclass of service 'FindGraspableObjects_SendGoal'."""

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
                'grasping_msgs.action.FindGraspableObjects_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__find_graspable_objects__send_goal

            from grasping_msgs.action import _find_graspable_objects
            if _find_graspable_objects.Metaclass_FindGraspableObjects_SendGoal_Request._TYPE_SUPPORT is None:
                _find_graspable_objects.Metaclass_FindGraspableObjects_SendGoal_Request.__import_type_support__()
            if _find_graspable_objects.Metaclass_FindGraspableObjects_SendGoal_Response._TYPE_SUPPORT is None:
                _find_graspable_objects.Metaclass_FindGraspableObjects_SendGoal_Response.__import_type_support__()


class FindGraspableObjects_SendGoal(metaclass=Metaclass_FindGraspableObjects_SendGoal):
    from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_SendGoal_Request as Request
    from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FindGraspableObjects_GetResult_Request(type):
    """Metaclass of message 'FindGraspableObjects_GetResult_Request'."""

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
                'grasping_msgs.action.FindGraspableObjects_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__find_graspable_objects__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__find_graspable_objects__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__find_graspable_objects__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__find_graspable_objects__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__find_graspable_objects__get_result__request

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


class FindGraspableObjects_GetResult_Request(metaclass=Metaclass_FindGraspableObjects_GetResult_Request):
    """Message class 'FindGraspableObjects_GetResult_Request'."""

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


class Metaclass_FindGraspableObjects_GetResult_Response(type):
    """Metaclass of message 'FindGraspableObjects_GetResult_Response'."""

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
                'grasping_msgs.action.FindGraspableObjects_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__find_graspable_objects__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__find_graspable_objects__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__find_graspable_objects__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__find_graspable_objects__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__find_graspable_objects__get_result__response

            from grasping_msgs.action import FindGraspableObjects
            if FindGraspableObjects.Result.__class__._TYPE_SUPPORT is None:
                FindGraspableObjects.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FindGraspableObjects_GetResult_Response(metaclass=Metaclass_FindGraspableObjects_GetResult_Response):
    """Message class 'FindGraspableObjects_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'grasping_msgs/FindGraspableObjects_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grasping_msgs', 'action'], 'FindGraspableObjects_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Result
        self.result = kwargs.get('result', FindGraspableObjects_Result())

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
            from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Result
            assert \
                isinstance(value, FindGraspableObjects_Result), \
                "The 'result' field must be a sub message of type 'FindGraspableObjects_Result'"
        self._result = value


class Metaclass_FindGraspableObjects_GetResult(type):
    """Metaclass of service 'FindGraspableObjects_GetResult'."""

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
                'grasping_msgs.action.FindGraspableObjects_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__find_graspable_objects__get_result

            from grasping_msgs.action import _find_graspable_objects
            if _find_graspable_objects.Metaclass_FindGraspableObjects_GetResult_Request._TYPE_SUPPORT is None:
                _find_graspable_objects.Metaclass_FindGraspableObjects_GetResult_Request.__import_type_support__()
            if _find_graspable_objects.Metaclass_FindGraspableObjects_GetResult_Response._TYPE_SUPPORT is None:
                _find_graspable_objects.Metaclass_FindGraspableObjects_GetResult_Response.__import_type_support__()


class FindGraspableObjects_GetResult(metaclass=Metaclass_FindGraspableObjects_GetResult):
    from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_GetResult_Request as Request
    from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FindGraspableObjects_FeedbackMessage(type):
    """Metaclass of message 'FindGraspableObjects_FeedbackMessage'."""

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
                'grasping_msgs.action.FindGraspableObjects_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__find_graspable_objects__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__find_graspable_objects__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__find_graspable_objects__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__find_graspable_objects__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__find_graspable_objects__feedback_message

            from grasping_msgs.action import FindGraspableObjects
            if FindGraspableObjects.Feedback.__class__._TYPE_SUPPORT is None:
                FindGraspableObjects.Feedback.__class__.__import_type_support__()

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


class FindGraspableObjects_FeedbackMessage(metaclass=Metaclass_FindGraspableObjects_FeedbackMessage):
    """Message class 'FindGraspableObjects_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'grasping_msgs/FindGraspableObjects_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grasping_msgs', 'action'], 'FindGraspableObjects_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Feedback
        self.feedback = kwargs.get('feedback', FindGraspableObjects_Feedback())

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
            from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Feedback
            assert \
                isinstance(value, FindGraspableObjects_Feedback), \
                "The 'feedback' field must be a sub message of type 'FindGraspableObjects_Feedback'"
        self._feedback = value


class Metaclass_FindGraspableObjects(type):
    """Metaclass of action 'FindGraspableObjects'."""

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
                'grasping_msgs.action.FindGraspableObjects')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__find_graspable_objects

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from grasping_msgs.action import _find_graspable_objects
            if _find_graspable_objects.Metaclass_FindGraspableObjects_SendGoal._TYPE_SUPPORT is None:
                _find_graspable_objects.Metaclass_FindGraspableObjects_SendGoal.__import_type_support__()
            if _find_graspable_objects.Metaclass_FindGraspableObjects_GetResult._TYPE_SUPPORT is None:
                _find_graspable_objects.Metaclass_FindGraspableObjects_GetResult.__import_type_support__()
            if _find_graspable_objects.Metaclass_FindGraspableObjects_FeedbackMessage._TYPE_SUPPORT is None:
                _find_graspable_objects.Metaclass_FindGraspableObjects_FeedbackMessage.__import_type_support__()


class FindGraspableObjects(metaclass=Metaclass_FindGraspableObjects):

    # The goal message defined in the action definition.
    from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Goal as Goal
    # The result message defined in the action definition.
    from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Result as Result
    # The feedback message defined in the action definition.
    from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from grasping_msgs.action._find_graspable_objects import FindGraspableObjects_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
