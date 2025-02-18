// Generated by gencpp from file nav_msgs/MapMetaData.msg
// DO NOT EDIT!


#ifndef NAV_MSGS_MESSAGE_MAPMETADATA_H
#define NAV_MSGS_MESSAGE_MAPMETADATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace nav_msgs
{
template <class ContainerAllocator>
struct MapMetaData_
{
  typedef MapMetaData_<ContainerAllocator> Type;

  MapMetaData_()
    : map_load_time()
    , resolution(0.0)
    , width(0)
    , height(0)
    , origin()  {
    }
  MapMetaData_(const ContainerAllocator& _alloc)
    : map_load_time()
    , resolution(0.0)
    , width(0)
    , height(0)
    , origin(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _map_load_time_type;
  _map_load_time_type map_load_time;

   typedef float _resolution_type;
  _resolution_type resolution;

   typedef uint32_t _width_type;
  _width_type width;

   typedef uint32_t _height_type;
  _height_type height;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _origin_type;
  _origin_type origin;





  typedef boost::shared_ptr< ::nav_msgs::MapMetaData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_msgs::MapMetaData_<ContainerAllocator> const> ConstPtr;

}; // struct MapMetaData_

typedef ::nav_msgs::MapMetaData_<std::allocator<void> > MapMetaData;

typedef boost::shared_ptr< ::nav_msgs::MapMetaData > MapMetaDataPtr;
typedef boost::shared_ptr< ::nav_msgs::MapMetaData const> MapMetaDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_msgs::MapMetaData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_msgs::MapMetaData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nav_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/tmp/binarydeb/ros-melodic-nav-msgs-1.12.7/msg', '/tmp/binarydeb/ros-melodic-nav-msgs-1.12.7/obj-x86_64-linux-gnu/devel/share/nav_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::MapMetaData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::MapMetaData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::MapMetaData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::MapMetaData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::MapMetaData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::MapMetaData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_msgs::MapMetaData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "10cfc8a2818024d3248802c00c95f11b";
  }

  static const char* value(const ::nav_msgs::MapMetaData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x10cfc8a2818024d3ULL;
  static const uint64_t static_value2 = 0x248802c00c95f11bULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_msgs::MapMetaData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/MapMetaData";
  }

  static const char* value(const ::nav_msgs::MapMetaData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_msgs::MapMetaData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This hold basic information about the characterists of the OccupancyGrid\n"
"\n"
"# The time at which the map was loaded\n"
"time map_load_time\n"
"# The map resolution [m/cell]\n"
"float32 resolution\n"
"# Map width [cells]\n"
"uint32 width\n"
"# Map height [cells]\n"
"uint32 height\n"
"# The origin of the map [m, m, rad].  This is the real-world pose of the\n"
"# cell (0,0) in the map.\n"
"geometry_msgs/Pose origin\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::nav_msgs::MapMetaData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_msgs::MapMetaData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map_load_time);
      stream.next(m.resolution);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.origin);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapMetaData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_msgs::MapMetaData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_msgs::MapMetaData_<ContainerAllocator>& v)
  {
    s << indent << "map_load_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.map_load_time);
    s << indent << "resolution: ";
    Printer<float>::stream(s, indent + "  ", v.resolution);
    s << indent << "width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.height);
    s << indent << "origin: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.origin);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_MSGS_MESSAGE_MAPMETADATA_H
