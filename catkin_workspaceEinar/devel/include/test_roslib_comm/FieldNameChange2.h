// Generated by gencpp from file test_roslib_comm/FieldNameChange2.msg
// DO NOT EDIT!


#ifndef TEST_ROSLIB_COMM_MESSAGE_FIELDNAMECHANGE2_H
#define TEST_ROSLIB_COMM_MESSAGE_FIELDNAMECHANGE2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_roslib_comm/SameSubMsg1.h>

namespace test_roslib_comm
{
template <class ContainerAllocator>
struct FieldNameChange2_
{
  typedef FieldNameChange2_<ContainerAllocator> Type;

  FieldNameChange2_()
    : b()  {
    }
  FieldNameChange2_(const ContainerAllocator& _alloc)
    : b(_alloc)  {
    }



   typedef  ::test_roslib_comm::SameSubMsg1_<ContainerAllocator>  _b_type;
  _b_type b;




  typedef boost::shared_ptr< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> const> ConstPtr;

}; // struct FieldNameChange2_

typedef ::test_roslib_comm::FieldNameChange2_<std::allocator<void> > FieldNameChange2;

typedef boost::shared_ptr< ::test_roslib_comm::FieldNameChange2 > FieldNameChange2Ptr;
typedef boost::shared_ptr< ::test_roslib_comm::FieldNameChange2 const> FieldNameChange2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roslib_comm

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/indigo/share/rosgraph_msgs/cmake/../msg'], 'test_roslib_comm': ['/home/einar/catkin_ws/src/ros_comm/test/test_roslib_comm/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dde34a89b93706fc183fd13c24ae090a";
  }

  static const char* value(const ::test_roslib_comm::FieldNameChange2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdde34a89b93706fcULL;
  static const uint64_t static_value2 = 0x183fd13c24ae090aULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roslib_comm/FieldNameChange2";
  }

  static const char* value(const ::test_roslib_comm::FieldNameChange2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SameSubMsg1 b\n\
================================================================================\n\
MSG: test_roslib_comm/SameSubMsg1\n\
int32 a\n\
float32 b\n\
string c\n\
uint64[10] d\n\
float64[] e\n\
";
  }

  static const char* value(const ::test_roslib_comm::FieldNameChange2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FieldNameChange2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roslib_comm::FieldNameChange2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roslib_comm::FieldNameChange2_<ContainerAllocator>& v)
  {
    s << indent << "b: ";
    s << std::endl;
    Printer< ::test_roslib_comm::SameSubMsg1_<ContainerAllocator> >::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSLIB_COMM_MESSAGE_FIELDNAMECHANGE2_H
