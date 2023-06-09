// Generated by gencpp from file household_objects_database_msgs/GetModelScansRequest.msg
// DO NOT EDIT!


#ifndef HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELSCANSREQUEST_H
#define HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELSCANSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace household_objects_database_msgs
{
template <class ContainerAllocator>
struct GetModelScansRequest_
{
  typedef GetModelScansRequest_<ContainerAllocator> Type;

  GetModelScansRequest_()
    : model_id(0)
    , scan_source()  {
    }
  GetModelScansRequest_(const ContainerAllocator& _alloc)
    : model_id(0)
    , scan_source(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _model_id_type;
  _model_id_type model_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _scan_source_type;
  _scan_source_type scan_source;





  typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetModelScansRequest_

typedef ::household_objects_database_msgs::GetModelScansRequest_<std::allocator<void> > GetModelScansRequest;

typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelScansRequest > GetModelScansRequestPtr;
typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelScansRequest const> GetModelScansRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator2> & rhs)
{
  return lhs.model_id == rhs.model_id &&
    lhs.scan_source == rhs.scan_source;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace household_objects_database_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f31b0f27ba251f6d1f17eafced83cb7";
  }

  static const char* value(const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f31b0f27ba251f6ULL;
  static const uint64_t static_value2 = 0xd1f17eafced83cb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "household_objects_database_msgs/GetModelScansRequest";
  }

  static const char* value(const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# retrieves a list of object scans which match a given model id and source\n"
"\n"
"# the id of the model\n"
"int32 model_id\n"
"\n"
"# the string name of the source of the scan data\n"
"string scan_source\n"
"\n"
;
  }

  static const char* value(const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_id);
      stream.next(m.scan_source);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetModelScansRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::household_objects_database_msgs::GetModelScansRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.model_id);
    s << indent << "scan_source: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.scan_source);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELSCANSREQUEST_H
