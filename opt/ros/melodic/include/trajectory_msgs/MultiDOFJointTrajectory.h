// Generated by gencpp from file trajectory_msgs/MultiDOFJointTrajectory.msg
// DO NOT EDIT!


#ifndef TRAJECTORY_MSGS_MESSAGE_MULTIDOFJOINTTRAJECTORY_H
#define TRAJECTORY_MSGS_MESSAGE_MULTIDOFJOINTTRAJECTORY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <trajectory_msgs/MultiDOFJointTrajectoryPoint.h>

namespace trajectory_msgs
{
template <class ContainerAllocator>
struct MultiDOFJointTrajectory_
{
  typedef MultiDOFJointTrajectory_<ContainerAllocator> Type;

  MultiDOFJointTrajectory_()
    : header()
    , joint_names()
    , points()  {
    }
  MultiDOFJointTrajectory_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , joint_names(_alloc)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >::other >  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> const> ConstPtr;

}; // struct MultiDOFJointTrajectory_

typedef ::trajectory_msgs::MultiDOFJointTrajectory_<std::allocator<void> > MultiDOFJointTrajectory;

typedef boost::shared_ptr< ::trajectory_msgs::MultiDOFJointTrajectory > MultiDOFJointTrajectoryPtr;
typedef boost::shared_ptr< ::trajectory_msgs::MultiDOFJointTrajectory const> MultiDOFJointTrajectoryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace trajectory_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'trajectory_msgs': ['/tmp/binarydeb/ros-melodic-trajectory-msgs-1.12.7/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef145a45a5f47b77b7f5cdde4b16c942";
  }

  static const char* value(const ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef145a45a5f47b77ULL;
  static const uint64_t static_value2 = 0xb7f5cdde4b16c942ULL;
};

template<class ContainerAllocator>
struct DataType< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "trajectory_msgs/MultiDOFJointTrajectory";
  }

  static const char* value(const ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The header is used to specify the coordinate frame and the reference time for the trajectory durations\n"
"Header header\n"
"\n"
"# A representation of a multi-dof joint trajectory (each point is a transformation)\n"
"# Each point along the trajectory will include an array of positions/velocities/accelerations\n"
"# that has the same length as the array of joint names, and has the same order of joints as \n"
"# the joint names array.\n"
"\n"
"string[] joint_names\n"
"MultiDOFJointTrajectoryPoint[] points\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/MultiDOFJointTrajectoryPoint\n"
"# Each multi-dof joint can specify a transform (up to 6 DOF)\n"
"geometry_msgs/Transform[] transforms\n"
"\n"
"# There can be a velocity specified for the origin of the joint \n"
"geometry_msgs/Twist[] velocities\n"
"\n"
"# There can be an acceleration specified for the origin of the joint \n"
"geometry_msgs/Twist[] accelerations\n"
"\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
;
  }

  static const char* value(const ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.joint_names);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MultiDOFJointTrajectory_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::trajectory_msgs::MultiDOFJointTrajectory_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRAJECTORY_MSGS_MESSAGE_MULTIDOFJOINTTRAJECTORY_H
