// Generated by gencpp from file household_objects_database_msgs/GetModelListResponse.msg
// DO NOT EDIT!


#ifndef HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELLISTRESPONSE_H
#define HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELLISTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <household_objects_database_msgs/DatabaseReturnCode.h>

namespace household_objects_database_msgs
{
template <class ContainerAllocator>
struct GetModelListResponse_
{
  typedef GetModelListResponse_<ContainerAllocator> Type;

  GetModelListResponse_()
    : return_code()
    , model_ids()  {
    }
  GetModelListResponse_(const ContainerAllocator& _alloc)
    : return_code(_alloc)
    , model_ids(_alloc)  {
  (void)_alloc;
    }



   typedef  ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator>  _return_code_type;
  _return_code_type return_code;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _model_ids_type;
  _model_ids_type model_ids;





  typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetModelListResponse_

typedef ::household_objects_database_msgs::GetModelListResponse_<std::allocator<void> > GetModelListResponse;

typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelListResponse > GetModelListResponsePtr;
typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelListResponse const> GetModelListResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator2> & rhs)
{
  return lhs.return_code == rhs.return_code &&
    lhs.model_ids == rhs.model_ids;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace household_objects_database_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "81fac8c5d631e612bd9183a923572d53";
  }

  static const char* value(const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x81fac8c5d631e612ULL;
  static const uint64_t static_value2 = 0xbd9183a923572d53ULL;
};

template<class ContainerAllocator>
struct DataType< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "household_objects_database_msgs/GetModelListResponse";
  }

  static const char* value(const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# the outcome of the query\n"
"DatabaseReturnCode return_code\n"
"\n"
"# the actual model ids\n"
"int32[] model_ids\n"
"\n"
"================================================================================\n"
"MSG: household_objects_database_msgs/DatabaseReturnCode\n"
"# return codes for database-related services\n"
"\n"
"int32 UNKNOWN_ERROR = 1\n"
"int32 DATABASE_NOT_CONNECTED = 2\n"
"int32 DATABASE_QUERY_ERROR = 3\n"
"int32 SUCCESS = -1\n"
"\n"
"int32 code\n"
;
  }

  static const char* value(const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.return_code);
      stream.next(m.model_ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetModelListResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::household_objects_database_msgs::GetModelListResponse_<ContainerAllocator>& v)
  {
    s << indent << "return_code: ";
    s << std::endl;
    Printer< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >::stream(s, indent + "  ", v.return_code);
    s << indent << "model_ids[]" << std::endl;
    for (size_t i = 0; i < v.model_ids.size(); ++i)
    {
      s << indent << "  model_ids[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.model_ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELLISTRESPONSE_H
