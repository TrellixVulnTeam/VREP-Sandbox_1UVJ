// Generated by gencpp from file sensor_msgs/TimeReference.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_MESSAGE_TIMEREFERENCE_H
#define SENSOR_MSGS_MESSAGE_TIMEREFERENCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sensor_msgs
{
template <class ContainerAllocator>
struct TimeReference_
{
  typedef TimeReference_<ContainerAllocator> Type;

  TimeReference_()
    : header()
    , time_ref()
    , source()  {
    }
  TimeReference_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time_ref()
    , source(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Time _time_ref_type;
  _time_ref_type time_ref;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _source_type;
  _source_type source;





  typedef boost::shared_ptr< ::sensor_msgs::TimeReference_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::TimeReference_<ContainerAllocator> const> ConstPtr;

}; // struct TimeReference_

typedef ::sensor_msgs::TimeReference_<std::allocator<void> > TimeReference;

typedef boost::shared_ptr< ::sensor_msgs::TimeReference > TimeReferencePtr;
typedef boost::shared_ptr< ::sensor_msgs::TimeReference const> TimeReferenceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs::TimeReference_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs::TimeReference_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/tmp/binarydeb/ros-melodic-sensor-msgs-1.12.7/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::TimeReference_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::TimeReference_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::TimeReference_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::TimeReference_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::TimeReference_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::TimeReference_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::TimeReference_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fded64a0265108ba86c3d38fb11c0c16";
  }

  static const char* value(const ::sensor_msgs::TimeReference_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfded64a0265108baULL;
  static const uint64_t static_value2 = 0x86c3d38fb11c0c16ULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::TimeReference_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/TimeReference";
  }

  static const char* value(const ::sensor_msgs::TimeReference_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::TimeReference_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Measurement from an external time source not actively synchronized with the system clock.\n"
"\n"
"Header header    # stamp is system time for which measurement was valid\n"
"                 # frame_id is not used \n"
"\n"
"time   time_ref  # corresponding time from this external source\n"
"string source    # (optional) name of time source\n"
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
;
  }

  static const char* value(const ::sensor_msgs::TimeReference_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs::TimeReference_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time_ref);
      stream.next(m.source);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TimeReference_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::TimeReference_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_msgs::TimeReference_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time_ref: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time_ref);
    s << indent << "source: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.source);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_TIMEREFERENCE_H
