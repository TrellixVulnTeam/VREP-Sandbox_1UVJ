// Generated by gencpp from file std_msgs/UInt8.msg
// DO NOT EDIT!


#ifndef STD_MSGS_MESSAGE_UINT8_H
#define STD_MSGS_MESSAGE_UINT8_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace std_msgs
{
template <class ContainerAllocator>
struct UInt8_
{
  typedef UInt8_<ContainerAllocator> Type;

  UInt8_()
    : data(0)  {
    }
  UInt8_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef uint8_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::std_msgs::UInt8_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::std_msgs::UInt8_<ContainerAllocator> const> ConstPtr;

}; // struct UInt8_

typedef ::std_msgs::UInt8_<std::allocator<void> > UInt8;

typedef boost::shared_ptr< ::std_msgs::UInt8 > UInt8Ptr;
typedef boost::shared_ptr< ::std_msgs::UInt8 const> UInt8ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::std_msgs::UInt8_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::std_msgs::UInt8_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace std_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/tmp/binarydeb/ros-melodic-std-msgs-0.5.12/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::std_msgs::UInt8_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::std_msgs::UInt8_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::std_msgs::UInt8_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::std_msgs::UInt8_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::std_msgs::UInt8_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::std_msgs::UInt8_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::std_msgs::UInt8_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c8164229e7d2c17eb95e9231617fdee";
  }

  static const char* value(const ::std_msgs::UInt8_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c8164229e7d2c17ULL;
  static const uint64_t static_value2 = 0xeb95e9231617fdeeULL;
};

template<class ContainerAllocator>
struct DataType< ::std_msgs::UInt8_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/UInt8";
  }

  static const char* value(const ::std_msgs::UInt8_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::std_msgs::UInt8_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 data\n"
;
  }

  static const char* value(const ::std_msgs::UInt8_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::std_msgs::UInt8_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UInt8_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::std_msgs::UInt8_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::std_msgs::UInt8_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STD_MSGS_MESSAGE_UINT8_H
