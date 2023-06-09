// Generated by gencpp from file easy_handeye_msgs/CheckStartingPoseResponse.msg
// DO NOT EDIT!


#ifndef EASY_HANDEYE_MSGS_MESSAGE_CHECKSTARTINGPOSERESPONSE_H
#define EASY_HANDEYE_MSGS_MESSAGE_CHECKSTARTINGPOSERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <easy_handeye_msgs/TargetPoseList.h>

namespace easy_handeye_msgs
{
template <class ContainerAllocator>
struct CheckStartingPoseResponse_
{
  typedef CheckStartingPoseResponse_<ContainerAllocator> Type;

  CheckStartingPoseResponse_()
    : can_calibrate(false)
    , target_poses()  {
    }
  CheckStartingPoseResponse_(const ContainerAllocator& _alloc)
    : can_calibrate(false)
    , target_poses(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _can_calibrate_type;
  _can_calibrate_type can_calibrate;

   typedef  ::easy_handeye_msgs::TargetPoseList_<ContainerAllocator>  _target_poses_type;
  _target_poses_type target_poses;





  typedef boost::shared_ptr< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CheckStartingPoseResponse_

typedef ::easy_handeye_msgs::CheckStartingPoseResponse_<std::allocator<void> > CheckStartingPoseResponse;

typedef boost::shared_ptr< ::easy_handeye_msgs::CheckStartingPoseResponse > CheckStartingPoseResponsePtr;
typedef boost::shared_ptr< ::easy_handeye_msgs::CheckStartingPoseResponse const> CheckStartingPoseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator1> & lhs, const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator2> & rhs)
{
  return lhs.can_calibrate == rhs.can_calibrate &&
    lhs.target_poses == rhs.target_poses;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator1> & lhs, const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace easy_handeye_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2e21f20435619eabca85520d8feb5839";
  }

  static const char* value(const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2e21f20435619eabULL;
  static const uint64_t static_value2 = 0xca85520d8feb5839ULL;
};

template<class ContainerAllocator>
struct DataType< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "easy_handeye_msgs/CheckStartingPoseResponse";
  }

  static const char* value(const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool can_calibrate\n"
"easy_handeye_msgs/TargetPoseList target_poses\n"
"\n"
"================================================================================\n"
"MSG: easy_handeye_msgs/TargetPoseList\n"
"geometry_msgs/PoseStamped home_pose\n"
"geometry_msgs/PoseStamped[] target_poses\n"
"int64 current_target_pose_index\n"
"# TODO: add joint poses (which are what will actually be used)\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.can_calibrate);
      stream.next(m.target_poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CheckStartingPoseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::easy_handeye_msgs::CheckStartingPoseResponse_<ContainerAllocator>& v)
  {
    s << indent << "can_calibrate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_calibrate);
    s << indent << "target_poses: ";
    s << std::endl;
    Printer< ::easy_handeye_msgs::TargetPoseList_<ContainerAllocator> >::stream(s, indent + "  ", v.target_poses);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EASY_HANDEYE_MSGS_MESSAGE_CHECKSTARTINGPOSERESPONSE_H
