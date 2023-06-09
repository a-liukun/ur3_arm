// Generated by gencpp from file odom_pub/motor_msg.msg
// DO NOT EDIT!


#ifndef ODOM_PUB_MESSAGE_MOTOR_MSG_H
#define ODOM_PUB_MESSAGE_MOTOR_MSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace odom_pub
{
template <class ContainerAllocator>
struct motor_msg_
{
  typedef motor_msg_<ContainerAllocator> Type;

  motor_msg_()
    : driver_motor_01(0.0)
    , driver_motor_02(0.0)
    , driver_motor_03(0.0)
    , driver_motor_04(0.0)
    , steer_motor_01(0.0)
    , steer_motor_02(0.0)
    , steer_motor_03(0.0)
    , steer_motor_04(0.0)  {
    }
  motor_msg_(const ContainerAllocator& _alloc)
    : driver_motor_01(0.0)
    , driver_motor_02(0.0)
    , driver_motor_03(0.0)
    , driver_motor_04(0.0)
    , steer_motor_01(0.0)
    , steer_motor_02(0.0)
    , steer_motor_03(0.0)
    , steer_motor_04(0.0)  {
  (void)_alloc;
    }



   typedef double _driver_motor_01_type;
  _driver_motor_01_type driver_motor_01;

   typedef double _driver_motor_02_type;
  _driver_motor_02_type driver_motor_02;

   typedef double _driver_motor_03_type;
  _driver_motor_03_type driver_motor_03;

   typedef double _driver_motor_04_type;
  _driver_motor_04_type driver_motor_04;

   typedef double _steer_motor_01_type;
  _steer_motor_01_type steer_motor_01;

   typedef double _steer_motor_02_type;
  _steer_motor_02_type steer_motor_02;

   typedef double _steer_motor_03_type;
  _steer_motor_03_type steer_motor_03;

   typedef double _steer_motor_04_type;
  _steer_motor_04_type steer_motor_04;





  typedef boost::shared_ptr< ::odom_pub::motor_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::odom_pub::motor_msg_<ContainerAllocator> const> ConstPtr;

}; // struct motor_msg_

typedef ::odom_pub::motor_msg_<std::allocator<void> > motor_msg;

typedef boost::shared_ptr< ::odom_pub::motor_msg > motor_msgPtr;
typedef boost::shared_ptr< ::odom_pub::motor_msg const> motor_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::odom_pub::motor_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::odom_pub::motor_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::odom_pub::motor_msg_<ContainerAllocator1> & lhs, const ::odom_pub::motor_msg_<ContainerAllocator2> & rhs)
{
  return lhs.driver_motor_01 == rhs.driver_motor_01 &&
    lhs.driver_motor_02 == rhs.driver_motor_02 &&
    lhs.driver_motor_03 == rhs.driver_motor_03 &&
    lhs.driver_motor_04 == rhs.driver_motor_04 &&
    lhs.steer_motor_01 == rhs.steer_motor_01 &&
    lhs.steer_motor_02 == rhs.steer_motor_02 &&
    lhs.steer_motor_03 == rhs.steer_motor_03 &&
    lhs.steer_motor_04 == rhs.steer_motor_04;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::odom_pub::motor_msg_<ContainerAllocator1> & lhs, const ::odom_pub::motor_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace odom_pub

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::odom_pub::motor_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::odom_pub::motor_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::odom_pub::motor_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::odom_pub::motor_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::odom_pub::motor_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::odom_pub::motor_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::odom_pub::motor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0e4c0fdbf8c8204c136aa0e02d2bf289";
  }

  static const char* value(const ::odom_pub::motor_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0e4c0fdbf8c8204cULL;
  static const uint64_t static_value2 = 0x136aa0e02d2bf289ULL;
};

template<class ContainerAllocator>
struct DataType< ::odom_pub::motor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "odom_pub/motor_msg";
  }

  static const char* value(const ::odom_pub::motor_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::odom_pub::motor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 driver_motor_01     \n"
"float64 driver_motor_02\n"
"float64 driver_motor_03\n"
"float64 driver_motor_04\n"
"\n"
"float64 steer_motor_01\n"
"float64 steer_motor_02\n"
"float64 steer_motor_03\n"
"float64 steer_motor_04\n"
"\n"
;
  }

  static const char* value(const ::odom_pub::motor_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::odom_pub::motor_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.driver_motor_01);
      stream.next(m.driver_motor_02);
      stream.next(m.driver_motor_03);
      stream.next(m.driver_motor_04);
      stream.next(m.steer_motor_01);
      stream.next(m.steer_motor_02);
      stream.next(m.steer_motor_03);
      stream.next(m.steer_motor_04);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct motor_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::odom_pub::motor_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::odom_pub::motor_msg_<ContainerAllocator>& v)
  {
    s << indent << "driver_motor_01: ";
    Printer<double>::stream(s, indent + "  ", v.driver_motor_01);
    s << indent << "driver_motor_02: ";
    Printer<double>::stream(s, indent + "  ", v.driver_motor_02);
    s << indent << "driver_motor_03: ";
    Printer<double>::stream(s, indent + "  ", v.driver_motor_03);
    s << indent << "driver_motor_04: ";
    Printer<double>::stream(s, indent + "  ", v.driver_motor_04);
    s << indent << "steer_motor_01: ";
    Printer<double>::stream(s, indent + "  ", v.steer_motor_01);
    s << indent << "steer_motor_02: ";
    Printer<double>::stream(s, indent + "  ", v.steer_motor_02);
    s << indent << "steer_motor_03: ";
    Printer<double>::stream(s, indent + "  ", v.steer_motor_03);
    s << indent << "steer_motor_04: ";
    Printer<double>::stream(s, indent + "  ", v.steer_motor_04);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ODOM_PUB_MESSAGE_MOTOR_MSG_H
