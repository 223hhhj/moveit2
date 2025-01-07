# generated from rosidl_generator_py/resource/_idl.py.em
# with input from grasping_msgs:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

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
                'grasping_msgs.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from grasping_msgs.msg import ObjectProperty
            if ObjectProperty.__class__._TYPE_SUPPORT is None:
                ObjectProperty.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

            from shape_msgs.msg import Mesh
            if Mesh.__class__._TYPE_SUPPORT is None:
                Mesh.__class__.__import_type_support__()

            from shape_msgs.msg import Plane
            if Plane.__class__._TYPE_SUPPORT is None:
                Plane.__class__.__import_type_support__()

            from shape_msgs.msg import SolidPrimitive
            if SolidPrimitive.__class__._TYPE_SUPPORT is None:
                SolidPrimitive.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Object(metaclass=Metaclass_Object):
    """Message class 'Object'."""

    __slots__ = [
        '_header',
        '_name',
        '_support_surface',
        '_properties',
        '_point_cluster',
        '_primitives',
        '_primitive_poses',
        '_meshes',
        '_mesh_poses',
        '_surface',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'name': 'string',
        'support_surface': 'string',
        'properties': 'sequence<grasping_msgs/ObjectProperty>',
        'point_cluster': 'sensor_msgs/PointCloud2',
        'primitives': 'sequence<shape_msgs/SolidPrimitive>',
        'primitive_poses': 'sequence<geometry_msgs/Pose>',
        'meshes': 'sequence<shape_msgs/Mesh>',
        'mesh_poses': 'sequence<geometry_msgs/Pose>',
        'surface': 'shape_msgs/Plane',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['grasping_msgs', 'msg'], 'ObjectProperty')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'SolidPrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'Mesh')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'Plane'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.name = kwargs.get('name', str())
        self.support_surface = kwargs.get('support_surface', str())
        self.properties = kwargs.get('properties', [])
        from sensor_msgs.msg import PointCloud2
        self.point_cluster = kwargs.get('point_cluster', PointCloud2())
        self.primitives = kwargs.get('primitives', [])
        self.primitive_poses = kwargs.get('primitive_poses', [])
        self.meshes = kwargs.get('meshes', [])
        self.mesh_poses = kwargs.get('mesh_poses', [])
        from shape_msgs.msg import Plane
        self.surface = kwargs.get('surface', Plane())

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
        if self.header != other.header:
            return False
        if self.name != other.name:
            return False
        if self.support_surface != other.support_surface:
            return False
        if self.properties != other.properties:
            return False
        if self.point_cluster != other.point_cluster:
            return False
        if self.primitives != other.primitives:
            return False
        if self.primitive_poses != other.primitive_poses:
            return False
        if self.meshes != other.meshes:
            return False
        if self.mesh_poses != other.mesh_poses:
            return False
        if self.surface != other.surface:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def support_surface(self):
        """Message field 'support_surface'."""
        return self._support_surface

    @support_surface.setter
    def support_surface(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'support_surface' field must be of type 'str'"
        self._support_surface = value

    @property
    def properties(self):
        """Message field 'properties'."""
        return self._properties

    @properties.setter
    def properties(self, value):
        if __debug__:
            from grasping_msgs.msg import ObjectProperty
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
                 all(isinstance(v, ObjectProperty) for v in value) and
                 True), \
                "The 'properties' field must be a set or sequence and each value of type 'ObjectProperty'"
        self._properties = value

    @property
    def point_cluster(self):
        """Message field 'point_cluster'."""
        return self._point_cluster

    @point_cluster.setter
    def point_cluster(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'point_cluster' field must be a sub message of type 'PointCloud2'"
        self._point_cluster = value

    @property
    def primitives(self):
        """Message field 'primitives'."""
        return self._primitives

    @primitives.setter
    def primitives(self, value):
        if __debug__:
            from shape_msgs.msg import SolidPrimitive
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
                 all(isinstance(v, SolidPrimitive) for v in value) and
                 True), \
                "The 'primitives' field must be a set or sequence and each value of type 'SolidPrimitive'"
        self._primitives = value

    @property
    def primitive_poses(self):
        """Message field 'primitive_poses'."""
        return self._primitive_poses

    @primitive_poses.setter
    def primitive_poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'primitive_poses' field must be a set or sequence and each value of type 'Pose'"
        self._primitive_poses = value

    @property
    def meshes(self):
        """Message field 'meshes'."""
        return self._meshes

    @meshes.setter
    def meshes(self, value):
        if __debug__:
            from shape_msgs.msg import Mesh
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
                 all(isinstance(v, Mesh) for v in value) and
                 True), \
                "The 'meshes' field must be a set or sequence and each value of type 'Mesh'"
        self._meshes = value

    @property
    def mesh_poses(self):
        """Message field 'mesh_poses'."""
        return self._mesh_poses

    @mesh_poses.setter
    def mesh_poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'mesh_poses' field must be a set or sequence and each value of type 'Pose'"
        self._mesh_poses = value

    @property
    def surface(self):
        """Message field 'surface'."""
        return self._surface

    @surface.setter
    def surface(self, value):
        if __debug__:
            from shape_msgs.msg import Plane
            assert \
                isinstance(value, Plane), \
                "The 'surface' field must be a sub message of type 'Plane'"
        self._surface = value
