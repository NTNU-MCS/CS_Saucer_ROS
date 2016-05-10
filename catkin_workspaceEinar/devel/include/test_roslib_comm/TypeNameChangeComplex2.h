// Generated by gencpp from file test_roslib_comm/TypeNameChangeComplex2.msg
// DO NOT EDIT!


#ifndef TEST_ROSLIB_COMM_MESSAGE_TYPENAMECHANGECOMPLEX2_H
#define TEST_ROSLIB_COMM_MESSAGE_TYPENAMECHANGECOMPLEX2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_roslib_comm/SameSubMsg2.h>
#include <test_roslib_comm/SameSubMsg3.h>

namespace test_roslib_comm
{
template <class ContainerAllocator>
struct TypeNameChangeComplex2_
{
  typedef TypeNameChangeComplex2_<ContainerAllocator> Type;

  TypeNameChangeComplex2_()
    : a()
    , b()  {
    }
  TypeNameChangeComplex2_(const ContainerAllocator& _alloc)
    : a(_alloc)
    , b()  {
      b.assign( ::test_roslib_comm::SameSubMsg3_<ContainerAllocator> (_alloc));
  }



   typedef std::vector< ::test_roslib_comm::SameSubMsg2_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::test_roslib_comm::SameSubMsg2_<ContainerAllocator> >::other >  _a_type;
  _a_type a;

   typedef boost::array< ::test_roslib_comm::SameSubMsg3_<ContainerAllocator> , 10>  _b_type;
  _b_type b;




  typedef boost::shared_ptr< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> const> ConstPtr;

}; // struct TypeNameChangeComplex2_

typedef ::test_roslib_comm::TypeNameChangeComplex2_<std::allocator<void> > TypeNameChangeComplex2;

typedef boost::shared_ptr< ::test_roslib_comm::TypeNameChangeComplex2 > TypeNameChangeComplex2Ptr;
typedef boost::shared_ptr< ::test_roslib_comm::TypeNameChangeComplex2 const> TypeNameChangeComplex2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a01688a0991b9d7d9facf6d94b993e93";
  }

  static const char* value(const ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa01688a0991b9d7dULL;
  static const uint64_t static_value2 = 0x9facf6d94b993e93ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roslib_comm/TypeNameChangeComplex2";
  }

  static const char* value(const ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SameSubMsg2[] a\n\
SameSubMsg3[10] b\n\
\n\
================================================================================\n\
MSG: test_roslib_comm/SameSubMsg2\n\
int32 a\n\
float32 b\n\
string c\n\
uint64[10] d\n\
float64[] e\n\
================================================================================\n\
MSG: test_roslib_comm/SameSubMsg3\n\
\n\
# Lots of comments\n\
int32 a  #And more comments\n\
float32 b\n\
string c\n\
# And also some white space\n\
\n\
\n\
uint64[10] d\n\
 float64[] e\n\
\n\
";
  }

  static const char* value(const ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TypeNameChangeComplex2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roslib_comm::TypeNameChangeComplex2_<ContainerAllocator>& v)
  {
    s << indent << "a[]" << std::endl;
    for (size_t i = 0; i < v.a.size(); ++i)
    {
      s << indent << "  a[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_roslib_comm::SameSubMsg2_<ContainerAllocator> >::stream(s, indent + "    ", v.a[i]);
    }
    s << indent << "b[]" << std::endl;
    for (size_t i = 0; i < v.b.size(); ++i)
    {
      s << indent << "  b[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_roslib_comm::SameSubMsg3_<ContainerAllocator> >::stream(s, indent + "    ", v.b[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSLIB_COMM_MESSAGE_TYPENAMECHANGECOMPLEX2_H
