# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_rostopic/Simple.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Simple(genpy.Message):
  _md5sum = "c9940b1313e61fed87cd22c50742578f"
  _type = "test_rostopic/Simple"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# for rostopic tests
byte b
int16 int16
int32 int32
int64 int64
char c
uint16 uint16
uint32 uint32
uint64 uint64
string str

"""
  __slots__ = ['b','int16','int32','int64','c','uint16','uint32','uint64','str']
  _slot_types = ['byte','int16','int32','int64','char','uint16','uint32','uint64','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       b,int16,int32,int64,c,uint16,uint32,uint64,str

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Simple, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.b is None:
        self.b = 0
      if self.int16 is None:
        self.int16 = 0
      if self.int32 is None:
        self.int32 = 0
      if self.int64 is None:
        self.int64 = 0
      if self.c is None:
        self.c = 0
      if self.uint16 is None:
        self.uint16 = 0
      if self.uint32 is None:
        self.uint32 = 0
      if self.uint64 is None:
        self.uint64 = 0
      if self.str is None:
        self.str = ''
    else:
      self.b = 0
      self.int16 = 0
      self.int32 = 0
      self.int64 = 0
      self.c = 0
      self.uint16 = 0
      self.uint32 = 0
      self.uint64 = 0
      self.str = ''

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
      _x = self
      buff.write(_struct_bhiqBHIQ.pack(_x.b, _x.int16, _x.int32, _x.int64, _x.c, _x.uint16, _x.uint32, _x.uint64))
      _x = self.str
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 30
      (_x.b, _x.int16, _x.int32, _x.int64, _x.c, _x.uint16, _x.uint32, _x.uint64,) = _struct_bhiqBHIQ.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.str = str[start:end].decode('utf-8')
      else:
        self.str = str[start:end]
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
      _x = self
      buff.write(_struct_bhiqBHIQ.pack(_x.b, _x.int16, _x.int32, _x.int64, _x.c, _x.uint16, _x.uint32, _x.uint64))
      _x = self.str
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 30
      (_x.b, _x.int16, _x.int32, _x.int64, _x.c, _x.uint16, _x.uint32, _x.uint64,) = _struct_bhiqBHIQ.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.str = str[start:end].decode('utf-8')
      else:
        self.str = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_bhiqBHIQ = struct.Struct("<bhiqBHIQ")
