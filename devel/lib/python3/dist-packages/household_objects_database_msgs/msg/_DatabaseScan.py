# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from household_objects_database_msgs/DatabaseScan.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class DatabaseScan(genpy.Message):
  _md5sum = "7edb7abec4973143a801c25c336b4bb1"
  _type = "household_objects_database_msgs/DatabaseScan"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Contains the location of a stored point cloud scan of an object, 
# as well as additional metadata about that scan 

# the database id of the model
int32 model_id

# the location of the bag file storing the scan
string bagfile_location

# the source of the scan (e.g. simulation)
string scan_source

# the ground truth pose of the object that was scanned
geometry_msgs/PoseStamped pose

# the topic that the points in the bag are published on
string cloud_topic
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
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
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
  __slots__ = ['model_id','bagfile_location','scan_source','pose','cloud_topic']
  _slot_types = ['int32','string','string','geometry_msgs/PoseStamped','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       model_id,bagfile_location,scan_source,pose,cloud_topic

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DatabaseScan, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.model_id is None:
        self.model_id = 0
      if self.bagfile_location is None:
        self.bagfile_location = ''
      if self.scan_source is None:
        self.scan_source = ''
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseStamped()
      if self.cloud_topic is None:
        self.cloud_topic = ''
    else:
      self.model_id = 0
      self.bagfile_location = ''
      self.scan_source = ''
      self.pose = geometry_msgs.msg.PoseStamped()
      self.cloud_topic = ''

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
      _x = self.model_id
      buff.write(_get_struct_i().pack(_x))
      _x = self.bagfile_location
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.scan_source
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3I().pack(_x.pose.header.seq, _x.pose.header.stamp.secs, _x.pose.header.stamp.nsecs))
      _x = self.pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.pose.pose.position.x, _x.pose.pose.position.y, _x.pose.pose.position.z, _x.pose.pose.orientation.x, _x.pose.pose.orientation.y, _x.pose.pose.orientation.z, _x.pose.pose.orientation.w))
      _x = self.cloud_topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseStamped()
      end = 0
      start = end
      end += 4
      (self.model_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.bagfile_location = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.bagfile_location = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.scan_source = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.scan_source = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.pose.header.seq, _x.pose.header.stamp.secs, _x.pose.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pose.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.pose.pose.position.x, _x.pose.pose.position.y, _x.pose.pose.position.z, _x.pose.pose.orientation.x, _x.pose.pose.orientation.y, _x.pose.pose.orientation.z, _x.pose.pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.cloud_topic = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.cloud_topic = str[start:end]
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
      _x = self.model_id
      buff.write(_get_struct_i().pack(_x))
      _x = self.bagfile_location
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.scan_source
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3I().pack(_x.pose.header.seq, _x.pose.header.stamp.secs, _x.pose.header.stamp.nsecs))
      _x = self.pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.pose.pose.position.x, _x.pose.pose.position.y, _x.pose.pose.position.z, _x.pose.pose.orientation.x, _x.pose.pose.orientation.y, _x.pose.pose.orientation.z, _x.pose.pose.orientation.w))
      _x = self.cloud_topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseStamped()
      end = 0
      start = end
      end += 4
      (self.model_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.bagfile_location = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.bagfile_location = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.scan_source = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.scan_source = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.pose.header.seq, _x.pose.header.stamp.secs, _x.pose.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pose.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.pose.pose.position.x, _x.pose.pose.position.y, _x.pose.pose.position.z, _x.pose.pose.orientation.x, _x.pose.pose.orientation.y, _x.pose.pose.orientation.z, _x.pose.pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.cloud_topic = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.cloud_topic = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i