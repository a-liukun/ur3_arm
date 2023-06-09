// Generated by gencpp from file ur3_move/movingObjectPositionRequest.msg
// DO NOT EDIT!


#ifndef UR3_MOVE_MESSAGE_MOVINGOBJECTPOSITIONREQUEST_H
#define UR3_MOVE_MESSAGE_MOVINGOBJECTPOSITIONREQUEST_H


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
struct movingObjectPositionRequest_
{
  typedef movingObjectPositionRequest_<ContainerAllocator> Type;

  movingObjectPositionRequest_()
    : send(false)  {
    }
  movingObjectPositionRequest_(const ContainerAllocator& _alloc)
    : send(false)  {
  (void)_alloc;
    }



   typedef uint8_t _send_type;
  _send_type send;





  typedef boost::shared_ptr< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct movingObjectPositionRequest_

typedef ::ur3_move::movingObjectPositionRequest_<std::allocator<void> > movingObjectPositionRequest;

typedef boost::shared_ptr< ::ur3_move::movingObjectPositionRequest > movingObjectPositionRequestPtr;
typedef boost::shared_ptr< ::ur3_move::movingObjectPositionRequest const> movingObjectPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator1> & lhs, const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.send == rhs.send;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator1> & lhs, const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur3_move

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "87208eaee51dca4c39db55d7a40b357d";
  }

  static const char* value(const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x87208eaee51dca4cULL;
  static const uint64_t static_value2 = 0x39db55d7a40b357dULL;
};

template<class ContainerAllocator>
struct DataType< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur3_move/movingObjectPositionRequest";
  }

  static const char* value(const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool send\n"
;
  }

  static const char* value(const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.send);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct movingObjectPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur3_move::movingObjectPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur3_move::movingObjectPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "send: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.send);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR3_MOVE_MESSAGE_MOVINGOBJECTPOSITIONREQUEST_H
