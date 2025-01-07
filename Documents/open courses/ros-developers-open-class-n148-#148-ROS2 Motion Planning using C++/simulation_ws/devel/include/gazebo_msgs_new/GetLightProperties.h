// Generated by gencpp from file gazebo_msgs_new/GetLightProperties.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_NEW_MESSAGE_GETLIGHTPROPERTIES_H
#define GAZEBO_MSGS_NEW_MESSAGE_GETLIGHTPROPERTIES_H

#include <ros/service_traits.h>


#include <gazebo_msgs_new/GetLightPropertiesRequest.h>
#include <gazebo_msgs_new/GetLightPropertiesResponse.h>


namespace gazebo_msgs_new
{

struct GetLightProperties
{

typedef GetLightPropertiesRequest Request;
typedef GetLightPropertiesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetLightProperties
} // namespace gazebo_msgs_new


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gazebo_msgs_new::GetLightProperties > {
  static const char* value()
  {
    return "df2cef87e13e2e6990e81e8aaa454c19";
  }

  static const char* value(const ::gazebo_msgs_new::GetLightProperties&) { return value(); }
};

template<>
struct DataType< ::gazebo_msgs_new::GetLightProperties > {
  static const char* value()
  {
    return "gazebo_msgs_new/GetLightProperties";
  }

  static const char* value(const ::gazebo_msgs_new::GetLightProperties&) { return value(); }
};


// service_traits::MD5Sum< ::gazebo_msgs_new::GetLightPropertiesRequest> should match
// service_traits::MD5Sum< ::gazebo_msgs_new::GetLightProperties >
template<>
struct MD5Sum< ::gazebo_msgs_new::GetLightPropertiesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_msgs_new::GetLightProperties >::value();
  }
  static const char* value(const ::gazebo_msgs_new::GetLightPropertiesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_msgs_new::GetLightPropertiesRequest> should match
// service_traits::DataType< ::gazebo_msgs_new::GetLightProperties >
template<>
struct DataType< ::gazebo_msgs_new::GetLightPropertiesRequest>
{
  static const char* value()
  {
    return DataType< ::gazebo_msgs_new::GetLightProperties >::value();
  }
  static const char* value(const ::gazebo_msgs_new::GetLightPropertiesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gazebo_msgs_new::GetLightPropertiesResponse> should match
// service_traits::MD5Sum< ::gazebo_msgs_new::GetLightProperties >
template<>
struct MD5Sum< ::gazebo_msgs_new::GetLightPropertiesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_msgs_new::GetLightProperties >::value();
  }
  static const char* value(const ::gazebo_msgs_new::GetLightPropertiesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_msgs_new::GetLightPropertiesResponse> should match
// service_traits::DataType< ::gazebo_msgs_new::GetLightProperties >
template<>
struct DataType< ::gazebo_msgs_new::GetLightPropertiesResponse>
{
  static const char* value()
  {
    return DataType< ::gazebo_msgs_new::GetLightProperties >::value();
  }
  static const char* value(const ::gazebo_msgs_new::GetLightPropertiesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GAZEBO_MSGS_NEW_MESSAGE_GETLIGHTPROPERTIES_H
