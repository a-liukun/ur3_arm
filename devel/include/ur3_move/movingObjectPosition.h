// Generated by gencpp from file ur3_move/movingObjectPosition.msg
// DO NOT EDIT!


#ifndef UR3_MOVE_MESSAGE_MOVINGOBJECTPOSITION_H
#define UR3_MOVE_MESSAGE_MOVINGOBJECTPOSITION_H

#include <ros/service_traits.h>


#include <ur3_move/movingObjectPositionRequest.h>
#include <ur3_move/movingObjectPositionResponse.h>


namespace ur3_move
{

struct movingObjectPosition
{

typedef movingObjectPositionRequest Request;
typedef movingObjectPositionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct movingObjectPosition
} // namespace ur3_move


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ur3_move::movingObjectPosition > {
  static const char* value()
  {
    return "05475c87257688fa5ef65958faf092d7";
  }

  static const char* value(const ::ur3_move::movingObjectPosition&) { return value(); }
};

template<>
struct DataType< ::ur3_move::movingObjectPosition > {
  static const char* value()
  {
    return "ur3_move/movingObjectPosition";
  }

  static const char* value(const ::ur3_move::movingObjectPosition&) { return value(); }
};


// service_traits::MD5Sum< ::ur3_move::movingObjectPositionRequest> should match
// service_traits::MD5Sum< ::ur3_move::movingObjectPosition >
template<>
struct MD5Sum< ::ur3_move::movingObjectPositionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ur3_move::movingObjectPosition >::value();
  }
  static const char* value(const ::ur3_move::movingObjectPositionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur3_move::movingObjectPositionRequest> should match
// service_traits::DataType< ::ur3_move::movingObjectPosition >
template<>
struct DataType< ::ur3_move::movingObjectPositionRequest>
{
  static const char* value()
  {
    return DataType< ::ur3_move::movingObjectPosition >::value();
  }
  static const char* value(const ::ur3_move::movingObjectPositionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ur3_move::movingObjectPositionResponse> should match
// service_traits::MD5Sum< ::ur3_move::movingObjectPosition >
template<>
struct MD5Sum< ::ur3_move::movingObjectPositionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ur3_move::movingObjectPosition >::value();
  }
  static const char* value(const ::ur3_move::movingObjectPositionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur3_move::movingObjectPositionResponse> should match
// service_traits::DataType< ::ur3_move::movingObjectPosition >
template<>
struct DataType< ::ur3_move::movingObjectPositionResponse>
{
  static const char* value()
  {
    return DataType< ::ur3_move::movingObjectPosition >::value();
  }
  static const char* value(const ::ur3_move::movingObjectPositionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UR3_MOVE_MESSAGE_MOVINGOBJECTPOSITION_H