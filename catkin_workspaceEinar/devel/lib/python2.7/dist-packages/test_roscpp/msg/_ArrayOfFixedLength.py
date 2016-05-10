# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_roscpp/ArrayOfFixedLength.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import test_roscpp.msg

class ArrayOfFixedLength(genpy.Message):
  _md5sum = "770e15962592d1fbea70b6b820ba16d9"
  _type = "test_roscpp/ArrayOfFixedLength"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# This comment has "quotes" in it
FixedLength[4] a
================================================================================
MSG: test_roscpp/FixedLength
uint32 a
float32 b

"""
  __slots__ = ['a']
  _slot_types = ['test_roscpp/FixedLength[4]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       a

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ArrayOfFixedLength, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.a is None:
        self.a = [test_roscpp.msg.FixedLength(),test_roscpp.msg.FixedLength(),test_roscpp.msg.FixedLength(),test_roscpp.msg.FixedLength()]
    else:
      self.a = [test_roscpp.msg.FixedLength(),test_roscpp.msg.FixedLength(),test_roscpp.msg.FixedLength(),test_roscpp.msg.FixedLength()]

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
      for val1 in self.a:
        _x = val1
        buff.write(_struct_If.pack(_x.a, _x.b))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.a is None:
        self.a = None
      end = 0
      self.a = []
      for i in range(0, 4):
        val1 = test_roscpp.msg.FixedLength()
        _x = val1
        start = end
        end += 8
        (_x.a, _x.b,) = _struct_If.unpack(str[start:end])
        self.a.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      for val1 in self.a:
        _x = val1
        buff.write(_struct_If.pack(_x.a, _x.b))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.a is None:
        self.a = None
      end = 0
      self.a = []
      for i in range(0, 4):
        val1 = test_roscpp.msg.FixedLength()
        _x = val1
        start = end
        end += 8
        (_x.a, _x.b,) = _struct_If.unpack(str[start:end])
        self.a.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_If = struct.Struct("<If")
