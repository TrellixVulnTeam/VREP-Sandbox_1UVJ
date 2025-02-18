// Generated by gencpp from file actionlib/TestFeedback.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_MESSAGE_TESTFEEDBACK_H
#define ACTIONLIB_MESSAGE_TESTFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib
{
template <class ContainerAllocator>
struct TestFeedback_
{
  typedef TestFeedback_<ContainerAllocator> Type;

  TestFeedback_()
    : feedback(0)  {
    }
  TestFeedback_(const ContainerAllocator& _alloc)
    : feedback(0)  {
  (void)_alloc;
    }



   typedef int32_t _feedback_type;
  _feedback_type feedback;





  typedef boost::shared_ptr< ::actionlib::TestFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib::TestFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct TestFeedback_

typedef ::actionlib::TestFeedback_<std::allocator<void> > TestFeedback;

typedef boost::shared_ptr< ::actionlib::TestFeedback > TestFeedbackPtr;
typedef boost::shared_ptr< ::actionlib::TestFeedback const> TestFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib::TestFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib::TestFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib': ['/tmp/binarydeb/ros-melodic-actionlib-1.11.13/obj-x86_64-linux-gnu/devel/share/actionlib/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TestFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TestFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TestFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TestFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TestFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TestFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib::TestFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "49ceb5b32ea3af22073ede4a0328249e";
  }

  static const char* value(const ::actionlib::TestFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x49ceb5b32ea3af22ULL;
  static const uint64_t static_value2 = 0x073ede4a0328249eULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib::TestFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib/TestFeedback";
  }

  static const char* value(const ::actionlib::TestFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib::TestFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"int32 feedback\n"
"\n"
;
  }

  static const char* value(const ::actionlib::TestFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib::TestFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib::TestFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib::TestFeedback_<ContainerAllocator>& v)
  {
    s << indent << "feedback: ";
    Printer<int32_t>::stream(s, indent + "  ", v.feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_MESSAGE_TESTFEEDBACK_H
