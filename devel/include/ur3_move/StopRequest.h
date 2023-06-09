// Generated by gencpp from file ur3_move/StopRequest.msg
// DO NOT EDIT!


#ifndef UR3_MOVE_MESSAGE_STOPREQUEST_H
#define UR3_MOVE_MESSAGE_STOPREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur3_move
{
template <class ContainerAllocator>
struct StopRequest_
{
  typedef StopRequest_<ContainerAllocator> Type;

  StopRequest_()
    : command(0)  {
    }
  StopRequest_(const ContainerAllocator& _alloc)
    : command(0)  {
  (void)_alloc;
    }



   typedef uint32_t _command_type;
  _command_type command;





  typedef boost::shared_ptr< ::ur3_move::StopRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur3_move::StopRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StopRequest_

typedef ::ur3_move::StopRequest_<std::allocator<void> > StopRequest;

typedef boost::shared_ptr< ::ur3_move::StopRequest > StopRequestPtr;
typedef boost::shared_ptr< ::ur3_move::StopRequest const> StopRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur3_move::StopRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur3_move::StopRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur3_move::StopRequest_<ContainerAllocator1> & lhs, const ::ur3_move::StopRequest_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur3_move::StopRequest_<ContainerAllocator1> & lhs, const ::ur3_move::StopRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur3_move

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ur3_move::StopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3_move::StopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3_move::StopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3_move::StopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_move::StopRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_move::StopRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur3_move::StopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ca33a29803a57039e45a94cf9bb85f5c";
  }

  static const char* value(const ::ur3_move::StopRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xca33a29803a57039ULL;
  static const uint64_t static_value2 = 0xe45a94cf9bb85f5cULL;
};

template<class ContainerAllocator>
struct DataType< ::ur3_move::StopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur3_move/StopRequest";
  }

  static const char* value(const ::ur3_move::StopRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur3_move::StopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 command\n"
"\n"
;
  }

  static const char* value(const ::ur3_move::StopRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur3_move::StopRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StopRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur3_move::StopRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur3_move::StopRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR3_MOVE_MESSAGE_STOPREQUEST_H
