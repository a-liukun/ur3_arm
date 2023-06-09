// Generated by gencpp from file manipulation_msgs/ManipulationResult.msg
// DO NOT EDIT!


#ifndef MANIPULATION_MSGS_MESSAGE_MANIPULATIONRESULT_H
#define MANIPULATION_MSGS_MESSAGE_MANIPULATIONRESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace manipulation_msgs
{
template <class ContainerAllocator>
struct ManipulationResult_
{
  typedef ManipulationResult_<ContainerAllocator> Type;

  ManipulationResult_()
    : value(0)  {
    }
  ManipulationResult_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef int32_t _value_type;
  _value_type value;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(UNFEASIBLE)
  #undef UNFEASIBLE
#endif
#if defined(_WIN32) && defined(FAILED)
  #undef FAILED
#endif
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif
#if defined(_WIN32) && defined(ARM_MOVEMENT_PREVENTED)
  #undef ARM_MOVEMENT_PREVENTED
#endif
#if defined(_WIN32) && defined(LIFT_FAILED)
  #undef LIFT_FAILED
#endif
#if defined(_WIN32) && defined(RETREAT_FAILED)
  #undef RETREAT_FAILED
#endif
#if defined(_WIN32) && defined(CANCELLED)
  #undef CANCELLED
#endif

  enum {
    SUCCESS = 1,
    UNFEASIBLE = -1,
    FAILED = -2,
    ERROR = -3,
    ARM_MOVEMENT_PREVENTED = -4,
    LIFT_FAILED = -5,
    RETREAT_FAILED = -6,
    CANCELLED = -7,
  };


  typedef boost::shared_ptr< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> const> ConstPtr;

}; // struct ManipulationResult_

typedef ::manipulation_msgs::ManipulationResult_<std::allocator<void> > ManipulationResult;

typedef boost::shared_ptr< ::manipulation_msgs::ManipulationResult > ManipulationResultPtr;
typedef boost::shared_ptr< ::manipulation_msgs::ManipulationResult const> ManipulationResultConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::manipulation_msgs::ManipulationResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::manipulation_msgs::ManipulationResult_<ContainerAllocator1> & lhs, const ::manipulation_msgs::ManipulationResult_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::manipulation_msgs::ManipulationResult_<ContainerAllocator1> & lhs, const ::manipulation_msgs::ManipulationResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace manipulation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85f8d010e045fcb335637fc8fc59184b";
  }

  static const char* value(const ::manipulation_msgs::ManipulationResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85f8d010e045fcb3ULL;
  static const uint64_t static_value2 = 0x35637fc8fc59184bULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manipulation_msgs/ManipulationResult";
  }

  static const char* value(const ::manipulation_msgs::ManipulationResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Result codes for manipulation tasks\n"
"\n"
"# task completed as expected\n"
"# generally means you can proceed as planned\n"
"int32 SUCCESS = 1\n"
"\n"
"# task not possible (e.g. out of reach or obstacles in the way)\n"
"# generally means that the world was not disturbed, so you can try another task\n"
"int32 UNFEASIBLE = -1\n"
"\n"
"# task was thought possible, but failed due to unexpected events during execution\n"
"# it is likely that the world was disturbed, so you are encouraged to refresh\n"
"# your sensed world model before proceeding to another task\n"
"int32 FAILED = -2\n"
"\n"
"# a lower level error prevented task completion (e.g. joint controller not responding)\n"
"# generally requires human attention\n"
"int32 ERROR = -3\n"
"\n"
"# means that at some point during execution we ended up in a state that the collision-aware\n"
"# arm navigation module will not move out of. The world was likely not disturbed, but you \n"
"# probably need a new collision map to move the arm out of the stuck position\n"
"int32 ARM_MOVEMENT_PREVENTED = -4\n"
"\n"
"# specific to grasp actions\n"
"# the object was grasped successfully, but the lift attempt could not achieve the minimum lift distance requested\n"
"# it is likely that the collision environment will see collisions between the hand/object and the support surface\n"
"int32 LIFT_FAILED = -5\n"
"\n"
"# specific to place actions\n"
"# the object was placed successfully, but the retreat attempt could not achieve the minimum retreat distance requested\n"
"# it is likely that the collision environment will see collisions between the hand and the object\n"
"int32 RETREAT_FAILED = -6\n"
"\n"
"# indicates that somewhere along the line a human said \"wait, stop, this is bad, go back and do something else\"\n"
"int32 CANCELLED = -7\n"
"\n"
"# the actual value of this error code\n"
"int32 value\n"
;
  }

  static const char* value(const ::manipulation_msgs::ManipulationResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ManipulationResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manipulation_msgs::ManipulationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::manipulation_msgs::ManipulationResult_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MANIPULATION_MSGS_MESSAGE_MANIPULATIONRESULT_H
