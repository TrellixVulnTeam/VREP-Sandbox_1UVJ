// Generated by gencpp from file map_msgs/GetMapROIRequest.msg
// DO NOT EDIT!


#ifndef MAP_MSGS_MESSAGE_GETMAPROIREQUEST_H
#define MAP_MSGS_MESSAGE_GETMAPROIREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace map_msgs
{
template <class ContainerAllocator>
struct GetMapROIRequest_
{
  typedef GetMapROIRequest_<ContainerAllocator> Type;

  GetMapROIRequest_()
    : x(0.0)
    , y(0.0)
    , l_x(0.0)
    , l_y(0.0)  {
    }
  GetMapROIRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , l_x(0.0)
    , l_y(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _l_x_type;
  _l_x_type l_x;

   typedef double _l_y_type;
  _l_y_type l_y;





  typedef boost::shared_ptr< ::map_msgs::GetMapROIRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_msgs::GetMapROIRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetMapROIRequest_

typedef ::map_msgs::GetMapROIRequest_<std::allocator<void> > GetMapROIRequest;

typedef boost::shared_ptr< ::map_msgs::GetMapROIRequest > GetMapROIRequestPtr;
typedef boost::shared_ptr< ::map_msgs::GetMapROIRequest const> GetMapROIRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_msgs::GetMapROIRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'map_msgs': ['/tmp/binarydeb/ros-melodic-map-msgs-1.13.0/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::GetMapROIRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::GetMapROIRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::GetMapROIRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "43c2ff8f45af555c0eaf070c401e9a47";
  }

  static const char* value(const ::map_msgs::GetMapROIRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x43c2ff8f45af555cULL;
  static const uint64_t static_value2 = 0x0eaf070c401e9a47ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_msgs/GetMapROIRequest";
  }

  static const char* value(const ::map_msgs::GetMapROIRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 l_x\n"
"float64 l_y\n"
;
  }

  static const char* value(const ::map_msgs::GetMapROIRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.l_x);
      stream.next(m.l_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMapROIRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_msgs::GetMapROIRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_msgs::GetMapROIRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "l_x: ";
    Printer<double>::stream(s, indent + "  ", v.l_x);
    s << indent << "l_y: ";
    Printer<double>::stream(s, indent + "  ", v.l_y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_MSGS_MESSAGE_GETMAPROIREQUEST_H
