// Generated by gencpp from file vrep_common/simRosSetObjectParent.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETOBJECTPARENT_H
#define VREP_COMMON_MESSAGE_SIMROSSETOBJECTPARENT_H

#include <ros/service_traits.h>


#include <vrep_common/simRosSetObjectParentRequest.h>
#include <vrep_common/simRosSetObjectParentResponse.h>


namespace vrep_common
{

struct simRosSetObjectParent
{

typedef simRosSetObjectParentRequest Request;
typedef simRosSetObjectParentResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosSetObjectParent
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosSetObjectParent > {
  static const char* value()
  {
    return "3fe38263068d68ac8ee5d5462c95bf28";
  }

  static const char* value(const ::vrep_common::simRosSetObjectParent&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosSetObjectParent > {
  static const char* value()
  {
    return "vrep_common/simRosSetObjectParent";
  }

  static const char* value(const ::vrep_common::simRosSetObjectParent&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosSetObjectParentRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSetObjectParent > 
template<>
struct MD5Sum< ::vrep_common::simRosSetObjectParentRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetObjectParent >::value();
  }
  static const char* value(const ::vrep_common::simRosSetObjectParentRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetObjectParentRequest> should match 
// service_traits::DataType< ::vrep_common::simRosSetObjectParent > 
template<>
struct DataType< ::vrep_common::simRosSetObjectParentRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetObjectParent >::value();
  }
  static const char* value(const ::vrep_common::simRosSetObjectParentRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosSetObjectParentResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSetObjectParent > 
template<>
struct MD5Sum< ::vrep_common::simRosSetObjectParentResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetObjectParent >::value();
  }
  static const char* value(const ::vrep_common::simRosSetObjectParentResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetObjectParentResponse> should match 
// service_traits::DataType< ::vrep_common::simRosSetObjectParent > 
template<>
struct DataType< ::vrep_common::simRosSetObjectParentResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetObjectParent >::value();
  }
  static const char* value(const ::vrep_common::simRosSetObjectParentResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETOBJECTPARENT_H