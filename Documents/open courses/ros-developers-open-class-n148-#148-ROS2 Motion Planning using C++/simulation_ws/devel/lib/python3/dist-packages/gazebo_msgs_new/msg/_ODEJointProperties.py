# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from gazebo_msgs_new/ODEJointProperties.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ODEJointProperties(genpy.Message):
  _md5sum = "1b744c32a920af979f53afe2f9c3511f"
  _type = "gazebo_msgs_new/ODEJointProperties"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# access to low level joint properties, change these at your own risk
float64[] damping             # joint damping
float64[] hiStop              # joint limit
float64[] loStop              # joint limit
float64[] erp                 # set joint erp
float64[] cfm                 # set joint cfm
float64[] stop_erp            # set joint erp for joint limit "contact" joint
float64[] stop_cfm            # set joint cfm for joint limit "contact" joint
float64[] fudge_factor        # joint fudge_factor applied at limits, see ODE manual for info.
float64[] fmax                # ode joint param fmax
float64[] vel                 # ode joint param vel
"""
  __slots__ = ['damping','hiStop','loStop','erp','cfm','stop_erp','stop_cfm','fudge_factor','fmax','vel']
  _slot_types = ['float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       damping,hiStop,loStop,erp,cfm,stop_erp,stop_cfm,fudge_factor,fmax,vel

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ODEJointProperties, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.damping is None:
        self.damping = []
      if self.hiStop is None:
        self.hiStop = []
      if self.loStop is None:
        self.loStop = []
      if self.erp is None:
        self.erp = []
      if self.cfm is None:
        self.cfm = []
      if self.stop_erp is None:
        self.stop_erp = []
      if self.stop_cfm is None:
        self.stop_cfm = []
      if self.fudge_factor is None:
        self.fudge_factor = []
      if self.fmax is None:
        self.fmax = []
      if self.vel is None:
        self.vel = []
    else:
      self.damping = []
      self.hiStop = []
      self.loStop = []
      self.erp = []
      self.cfm = []
      self.stop_erp = []
      self.stop_cfm = []
      self.fudge_factor = []
      self.fmax = []
      self.vel = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.damping)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.damping))
      length = len(self.hiStop)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.hiStop))
      length = len(self.loStop)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.loStop))
      length = len(self.erp)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.erp))
      length = len(self.cfm)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.cfm))
      length = len(self.stop_erp)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.stop_erp))
      length = len(self.stop_cfm)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.stop_cfm))
      length = len(self.fudge_factor)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.fudge_factor))
      length = len(self.fmax)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.fmax))
      length = len(self.vel)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.vel))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.damping = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.hiStop = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.loStop = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.erp = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cfm = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.stop_erp = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.stop_cfm = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.fudge_factor = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.fmax = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.vel = s.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.damping)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.damping.tostring())
      length = len(self.hiStop)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.hiStop.tostring())
      length = len(self.loStop)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.loStop.tostring())
      length = len(self.erp)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.erp.tostring())
      length = len(self.cfm)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.cfm.tostring())
      length = len(self.stop_erp)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.stop_erp.tostring())
      length = len(self.stop_cfm)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.stop_cfm.tostring())
      length = len(self.fudge_factor)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.fudge_factor.tostring())
      length = len(self.fmax)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.fmax.tostring())
      length = len(self.vel)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.vel.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.damping = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.hiStop = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.loStop = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.erp = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cfm = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.stop_erp = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.stop_cfm = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.fudge_factor = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.fmax = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.vel = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
