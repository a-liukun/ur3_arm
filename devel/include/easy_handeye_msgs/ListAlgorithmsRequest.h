// Generated by gencpp from file easy_handeye_msgs/ListAlgorithmsRequest.msg
// DO NOT EDIT!


#ifndef EASY_HANDEYE_MSGS_MESSAGE_LISTALGORITHMSREQUEST_H
#define EASY_HANDEYE_MSGS_MESSAGE_LISTALGORITHMSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace easy_handeye_msgs
{
template <class ContainerAllocator>
struct ListAlgorithmsRequest_
{
  typedef ListAlgorithmsRequest_<ContainerAllocator> Type;

  ListAlgorithmsRequest_()
    {
    }
  ListAlgorithmsRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ListAlgorithmsRequest_

typedef ::easy_handeye_msgs::ListAlgorithmsRequest_<std::allocator<void> > ListAlgorithmsRequest;

typedef boost::shared_ptr< ::easy_handeye_msgs::ListAlgorithmsRequest > ListAlgorithmsRequestPtr;
typedef boost::shared_ptr< ::easy_handeye_msgs::ListAlgorithmsRequest const> ListAlgorithmsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace easy_handeye_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "easy_handeye_msgs/ListAlgorithmsRequest";
  }

  static const char* value(const ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ListAlgorithmsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::easy_handeye_msgs::ListAlgorithmsRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // EASY_HANDEYE_MSGS_MESSAGE_LISTALGORITHMSREQUEST_H
