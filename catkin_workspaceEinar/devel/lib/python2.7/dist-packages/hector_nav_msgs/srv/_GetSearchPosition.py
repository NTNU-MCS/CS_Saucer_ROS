# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from hector_nav_msgs/GetSearchPositionRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class GetSearchPositionRequest(genpy.Message):
  _md5sum = "a579e8b989d066f6c17946ab060a6ff9"
  _type = "hector_nav_msgs/GetSearchPositionRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """

geometry_msgs/PoseStamped ooi_pose
float32 distance

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

"""
  __slots__ = ['ooi_pose','distance']
  _slot_types = ['geometry_msgs/PoseStamped','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ooi_pose,distance

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetSearchPositionRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.ooi_pose is None:
        self.ooi_pose = geometry_msgs.msg.PoseStamped()
      if self.distance is None:
        self.distance = 0.
    else:
      self.ooi_pose = geometry_msgs.msg.PoseStamped()
      self.distance = 0.

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
      buff.write(_struct_3I.pack(_x.ooi_pose.header.seq, _x.ooi_pose.header.stamp.secs, _x.ooi_pose.header.stamp.nsecs))
      _x = self.ooi_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7df.pack(_x.ooi_pose.pose.position.x, _x.ooi_pose.pose.position.y, _x.ooi_pose.pose.position.z, _x.ooi_pose.pose.orientation.x, _x.ooi_pose.pose.orientation.y, _x.ooi_pose.pose.orientation.z, _x.ooi_pose.pose.orientation.w, _x.distance))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.ooi_pose is None:
        self.ooi_pose = geometry_msgs.msg.PoseStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.ooi_pose.header.seq, _x.ooi_pose.header.stamp.secs, _x.ooi_pose.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.ooi_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.ooi_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 60
      (_x.ooi_pose.pose.position.x, _x.ooi_pose.pose.position.y, _x.ooi_pose.pose.position.z, _x.ooi_pose.pose.orientation.x, _x.ooi_pose.pose.orientation.y, _x.ooi_pose.pose.orientation.z, _x.ooi_pose.pose.orientation.w, _x.distance,) = _struct_7df.unpack(str[start:end])
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
      buff.write(_struct_3I.pack(_x.ooi_pose.header.seq, _x.ooi_pose.header.stamp.secs, _x.ooi_pose.header.stamp.nsecs))
      _x = self.ooi_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7df.pack(_x.ooi_pose.pose.position.x, _x.ooi_pose.pose.position.y, _x.ooi_pose.pose.position.z, _x.ooi_pose.pose.orientation.x, _x.ooi_pose.pose.orientation.y, _x.ooi_pose.pose.orientation.z, _x.ooi_pose.pose.orientation.w, _x.distance))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.ooi_pose is None:
        self.ooi_pose = geometry_msgs.msg.PoseStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.ooi_pose.header.seq, _x.ooi_pose.header.stamp.secs, _x.ooi_pose.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.ooi_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.ooi_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 60
      (_x.ooi_pose.pose.position.x, _x.ooi_pose.pose.position.y, _x.ooi_pose.pose.position.z, _x.ooi_pose.pose.orientation.x, _x.ooi_pose.pose.orientation.y, _x.ooi_pose.pose.orientation.z, _x.ooi_pose.pose.orientation.w, _x.distance,) = _struct_7df.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_7df = struct.Struct("<7df")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from hector_nav_msgs/GetSearchPositionResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class GetSearchPositionResponse(genpy.Message):
  _md5sum = "6cc90c22cc49490b4dd1ef4798491231"
  _type = "hector_nav_msgs/GetSearchPositionResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/PoseStamped search_pose



================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

"""
  __slots__ = ['search_pose']
  _slot_types = ['geometry_msgs/PoseStamped']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       search_pose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetSearchPositionResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.search_pose is None:
        self.search_pose = geometry_msgs.msg.PoseStamped()
    else:
      self.search_pose = geometry_msgs.msg.PoseStamped()

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
      buff.write(_struct_3I.pack(_x.search_pose.header.seq, _x.search_pose.header.stamp.secs, _x.search_pose.header.stamp.nsecs))
      _x = self.search_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.search_pose.pose.position.x, _x.search_pose.pose.position.y, _x.search_pose.pose.position.z, _x.search_pose.pose.orientation.x, _x.search_pose.pose.orientation.y, _x.search_pose.pose.orientation.z, _x.search_pose.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.search_pose is None:
        self.search_pose = geometry_msgs.msg.PoseStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.search_pose.header.seq, _x.search_pose.header.stamp.secs, _x.search_pose.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.search_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.search_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.search_pose.pose.position.x, _x.search_pose.pose.position.y, _x.search_pose.pose.position.z, _x.search_pose.pose.orientation.x, _x.search_pose.pose.orientation.y, _x.search_pose.pose.orientation.z, _x.search_pose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
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
      buff.write(_struct_3I.pack(_x.search_pose.header.seq, _x.search_pose.header.stamp.secs, _x.search_pose.header.stamp.nsecs))
      _x = self.search_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.search_pose.pose.position.x, _x.search_pose.pose.position.y, _x.search_pose.pose.position.z, _x.search_pose.pose.orientation.x, _x.search_pose.pose.orientation.y, _x.search_pose.pose.orientation.z, _x.search_pose.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.search_pose is None:
        self.search_pose = geometry_msgs.msg.PoseStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.search_pose.header.seq, _x.search_pose.header.stamp.secs, _x.search_pose.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.search_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.search_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.search_pose.pose.position.x, _x.search_pose.pose.position.y, _x.search_pose.pose.position.z, _x.search_pose.pose.orientation.x, _x.search_pose.pose.orientation.y, _x.search_pose.pose.orientation.z, _x.search_pose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_7d = struct.Struct("<7d")
class GetSearchPosition(object):
  _type          = 'hector_nav_msgs/GetSearchPosition'
  _md5sum = 'a28d7c2840927c12082b304156df4111'
  _request_class  = GetSearchPositionRequest
  _response_class = GetSearchPositionResponse
