// Generated by gencpp from file dynamic_reconfigure/Config.msg
// DO NOT EDIT!


#ifndef DYNAMIC_RECONFIGURE_MESSAGE_CONFIG_H
#define DYNAMIC_RECONFIGURE_MESSAGE_CONFIG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dynamic_reconfigure/BoolParameter.h>
#include <dynamic_reconfigure/IntParameter.h>
#include <dynamic_reconfigure/StrParameter.h>
#include <dynamic_reconfigure/DoubleParameter.h>
#include <dynamic_reconfigure/GroupState.h>

namespace dynamic_reconfigure
{
template <class ContainerAllocator>
struct Config_
{
  typedef Config_<ContainerAllocator> Type;

  Config_()
    : bools()
    , ints()
    , strs()
    , doubles()
    , groups()  {
    }
  Config_(const ContainerAllocator& _alloc)
    : bools(_alloc)
    , ints(_alloc)
    , strs(_alloc)
    , doubles(_alloc)
    , groups(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >::other >  _bools_type;
  _bools_type bools;

   typedef std::vector< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >::other >  _ints_type;
  _ints_type ints;

   typedef std::vector< ::dynamic_reconfigure::StrParameter_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dynamic_reconfigure::StrParameter_<ContainerAllocator> >::other >  _strs_type;
  _strs_type strs;

   typedef std::vector< ::dynamic_reconfigure::DoubleParameter_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dynamic_reconfigure::DoubleParameter_<ContainerAllocator> >::other >  _doubles_type;
  _doubles_type doubles;

   typedef std::vector< ::dynamic_reconfigure::GroupState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dynamic_reconfigure::GroupState_<ContainerAllocator> >::other >  _groups_type;
  _groups_type groups;





  typedef boost::shared_ptr< ::dynamic_reconfigure::Config_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_reconfigure::Config_<ContainerAllocator> const> ConstPtr;

}; // struct Config_

typedef ::dynamic_reconfigure::Config_<std::allocator<void> > Config;

typedef boost::shared_ptr< ::dynamic_reconfigure::Config > ConfigPtr;
typedef boost::shared_ptr< ::dynamic_reconfigure::Config const> ConfigConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamic_reconfigure::Config_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamic_reconfigure::Config_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dynamic_reconfigure

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dynamic_reconfigure': ['/tmp/binarydeb/ros-melodic-dynamic-reconfigure-1.6.0/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::Config_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::Config_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::Config_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::Config_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::Config_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::Config_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamic_reconfigure::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "958f16a05573709014982821e6822580";
  }

  static const char* value(const ::dynamic_reconfigure::Config_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x958f16a055737090ULL;
  static const uint64_t static_value2 = 0x14982821e6822580ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_reconfigure::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamic_reconfigure/Config";
  }

  static const char* value(const ::dynamic_reconfigure::Config_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamic_reconfigure::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "BoolParameter[] bools\n"
"IntParameter[] ints\n"
"StrParameter[] strs\n"
"DoubleParameter[] doubles\n"
"GroupState[] groups\n"
"\n"
"================================================================================\n"
"MSG: dynamic_reconfigure/BoolParameter\n"
"string name\n"
"bool value\n"
"\n"
"================================================================================\n"
"MSG: dynamic_reconfigure/IntParameter\n"
"string name\n"
"int32 value\n"
"\n"
"================================================================================\n"
"MSG: dynamic_reconfigure/StrParameter\n"
"string name\n"
"string value\n"
"\n"
"================================================================================\n"
"MSG: dynamic_reconfigure/DoubleParameter\n"
"string name\n"
"float64 value\n"
"\n"
"================================================================================\n"
"MSG: dynamic_reconfigure/GroupState\n"
"string name\n"
"bool state\n"
"int32 id\n"
"int32 parent\n"
;
  }

  static const char* value(const ::dynamic_reconfigure::Config_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamic_reconfigure::Config_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bools);
      stream.next(m.ints);
      stream.next(m.strs);
      stream.next(m.doubles);
      stream.next(m.groups);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Config_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_reconfigure::Config_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamic_reconfigure::Config_<ContainerAllocator>& v)
  {
    s << indent << "bools[]" << std::endl;
    for (size_t i = 0; i < v.bools.size(); ++i)
    {
      s << indent << "  bools[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_reconfigure::BoolParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.bools[i]);
    }
    s << indent << "ints[]" << std::endl;
    for (size_t i = 0; i < v.ints.size(); ++i)
    {
      s << indent << "  ints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.ints[i]);
    }
    s << indent << "strs[]" << std::endl;
    for (size_t i = 0; i < v.strs.size(); ++i)
    {
      s << indent << "  strs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_reconfigure::StrParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.strs[i]);
    }
    s << indent << "doubles[]" << std::endl;
    for (size_t i = 0; i < v.doubles.size(); ++i)
    {
      s << indent << "  doubles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_reconfigure::DoubleParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.doubles[i]);
    }
    s << indent << "groups[]" << std::endl;
    for (size_t i = 0; i < v.groups.size(); ++i)
    {
      s << indent << "  groups[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_reconfigure::GroupState_<ContainerAllocator> >::stream(s, indent + "    ", v.groups[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_RECONFIGURE_MESSAGE_CONFIG_H
