// Generated by gencpp from file shape_msgs/MeshTriangle.msg
// DO NOT EDIT!


#ifndef SHAPE_MSGS_MESSAGE_MESHTRIANGLE_H
#define SHAPE_MSGS_MESSAGE_MESHTRIANGLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace shape_msgs
{
template <class ContainerAllocator>
struct MeshTriangle_
{
  typedef MeshTriangle_<ContainerAllocator> Type;

  MeshTriangle_()
    : vertex_indices()  {
      vertex_indices.assign(0);
  }
  MeshTriangle_(const ContainerAllocator& _alloc)
    : vertex_indices()  {
  (void)_alloc;
      vertex_indices.assign(0);
  }



   typedef boost::array<uint32_t, 3>  _vertex_indices_type;
  _vertex_indices_type vertex_indices;





  typedef boost::shared_ptr< ::shape_msgs::MeshTriangle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::shape_msgs::MeshTriangle_<ContainerAllocator> const> ConstPtr;

}; // struct MeshTriangle_

typedef ::shape_msgs::MeshTriangle_<std::allocator<void> > MeshTriangle;

typedef boost::shared_ptr< ::shape_msgs::MeshTriangle > MeshTrianglePtr;
typedef boost::shared_ptr< ::shape_msgs::MeshTriangle const> MeshTriangleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::shape_msgs::MeshTriangle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::shape_msgs::MeshTriangle_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace shape_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'shape_msgs': ['/tmp/binarydeb/ros-melodic-shape-msgs-1.12.7/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::shape_msgs::MeshTriangle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::shape_msgs::MeshTriangle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shape_msgs::MeshTriangle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shape_msgs::MeshTriangle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shape_msgs::MeshTriangle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shape_msgs::MeshTriangle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::shape_msgs::MeshTriangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23688b2e6d2de3d32fe8af104a903253";
  }

  static const char* value(const ::shape_msgs::MeshTriangle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23688b2e6d2de3d3ULL;
  static const uint64_t static_value2 = 0x2fe8af104a903253ULL;
};

template<class ContainerAllocator>
struct DataType< ::shape_msgs::MeshTriangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "shape_msgs/MeshTriangle";
  }

  static const char* value(const ::shape_msgs::MeshTriangle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::shape_msgs::MeshTriangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of a triangle's vertices\n"
"uint32[3] vertex_indices\n"
;
  }

  static const char* value(const ::shape_msgs::MeshTriangle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::shape_msgs::MeshTriangle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vertex_indices);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MeshTriangle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::shape_msgs::MeshTriangle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::shape_msgs::MeshTriangle_<ContainerAllocator>& v)
  {
    s << indent << "vertex_indices[]" << std::endl;
    for (size_t i = 0; i < v.vertex_indices.size(); ++i)
    {
      s << indent << "  vertex_indices[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.vertex_indices[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SHAPE_MSGS_MESSAGE_MESHTRIANGLE_H
