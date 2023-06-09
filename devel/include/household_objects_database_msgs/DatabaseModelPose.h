// Generated by gencpp from file household_objects_database_msgs/DatabaseModelPose.msg
// DO NOT EDIT!


#ifndef HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_DATABASEMODELPOSE_H
#define HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_DATABASEMODELPOSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <object_recognition_msgs/ObjectType.h>
#include <geometry_msgs/PoseStamped.h>

namespace household_objects_database_msgs
{
template <class ContainerAllocator>
struct DatabaseModelPose_
{
  typedef DatabaseModelPose_<ContainerAllocator> Type;

  DatabaseModelPose_()
    : model_id(0)
    , type()
    , pose()
    , confidence(0.0)
    , detector_name()  {
    }
  DatabaseModelPose_(const ContainerAllocator& _alloc)
    : model_id(0)
    , type(_alloc)
    , pose(_alloc)
    , confidence(0.0)
    , detector_name(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _model_id_type;
  _model_id_type model_id;

   typedef  ::object_recognition_msgs::ObjectType_<ContainerAllocator>  _type_type;
  _type_type type;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef float _confidence_type;
  _confidence_type confidence;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _detector_name_type;
  _detector_name_type detector_name;





  typedef boost::shared_ptr< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> const> ConstPtr;

}; // struct DatabaseModelPose_

typedef ::household_objects_database_msgs::DatabaseModelPose_<std::allocator<void> > DatabaseModelPose;

typedef boost::shared_ptr< ::household_objects_database_msgs::DatabaseModelPose > DatabaseModelPosePtr;
typedef boost::shared_ptr< ::household_objects_database_msgs::DatabaseModelPose const> DatabaseModelPoseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator2> & rhs)
{
  return lhs.model_id == rhs.model_id &&
    lhs.type == rhs.type &&
    lhs.pose == rhs.pose &&
    lhs.confidence == rhs.confidence &&
    lhs.detector_name == rhs.detector_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace household_objects_database_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6bc39ef48ca57cc7d4341cfc13a5a110";
  }

  static const char* value(const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6bc39ef48ca57cc7ULL;
  static const uint64_t static_value2 = 0xd4341cfc13a5a110ULL;
};

template<class ContainerAllocator>
struct DataType< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "household_objects_database_msgs/DatabaseModelPose";
  }

  static const char* value(const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Informs that a specific model from the Model Database has been \n"
"# identified at a certain location\n"
"\n"
"# the database id of the model\n"
"int32 model_id\n"
"\n"
"# if the object was recognized by the ORK pipeline, its type will be in here\n"
"# if this is not empty, then the string in here will be converted to a household_objects_database id\n"
"# leave this empty if providing an id in the model_id field\n"
"object_recognition_msgs/ObjectType type\n"
"\n"
"# the pose that it can be found in\n"
"geometry_msgs/PoseStamped pose\n"
"\n"
"# a measure of the confidence level in this detection result\n"
"float32 confidence\n"
"\n"
"# the name of the object detector that generated this detection result\n"
"string detector_name\n"
"\n"
"================================================================================\n"
"MSG: object_recognition_msgs/ObjectType\n"
"################################################## OBJECT ID #########################################################\n"
"\n"
"# Contains information about the type of a found object. Those two sets of parameters together uniquely define an\n"
"# object\n"
"\n"
"# The key of the found object: the unique identifier in the given db\n"
"string key\n"
"\n"
"# The db parameters stored as a JSON/compressed YAML string. An object id does not make sense without the corresponding\n"
"# database. E.g., in object_recognition, it can look like: \"{'type':'CouchDB', 'root':'http://localhost'}\"\n"
"# There is no conventional format for those parameters and it's nice to keep that flexibility.\n"
"# The object_recognition_core as a generic DB type that can read those fields\n"
"# Current examples:\n"
"# For CouchDB:\n"
"#   type: 'CouchDB'\n"
"#   root: 'http://localhost:5984'\n"
"#   collection: 'object_recognition'\n"
"# For SQL household database:\n"
"#   type: 'SqlHousehold'\n"
"#   host: 'wgs36'\n"
"#   port: 5432\n"
"#   user: 'willow'\n"
"#   password: 'willow'\n"
"#   name: 'household_objects'\n"
"#   module: 'tabletop'\n"
"string db\n"
"\n"
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

  static const char* value(const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_id);
      stream.next(m.type);
      stream.next(m.pose);
      stream.next(m.confidence);
      stream.next(m.detector_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DatabaseModelPose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::household_objects_database_msgs::DatabaseModelPose_<ContainerAllocator>& v)
  {
    s << indent << "model_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.model_id);
    s << indent << "type: ";
    s << std::endl;
    Printer< ::object_recognition_msgs::ObjectType_<ContainerAllocator> >::stream(s, indent + "  ", v.type);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
    s << indent << "detector_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.detector_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_DATABASEMODELPOSE_H
