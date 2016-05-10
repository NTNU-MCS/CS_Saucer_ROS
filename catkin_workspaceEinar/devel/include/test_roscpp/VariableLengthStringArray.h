// Generated by gencpp from file test_roscpp/VariableLengthStringArray.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_VARIABLELENGTHSTRINGARRAY_H
#define TEST_ROSCPP_MESSAGE_VARIABLELENGTHSTRINGARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_roscpp
{
template <class ContainerAllocator>
struct VariableLengthStringArray_
{
  typedef VariableLengthStringArray_<ContainerAllocator> Type;

  VariableLengthStringArray_()
    : foo()  {
    }
  VariableLengthStringArray_(const ContainerAllocator& _alloc)
    : foo(_alloc)  {
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _foo_type;
  _foo_type foo;




  typedef boost::shared_ptr< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> const> ConstPtr;

}; // struct VariableLengthStringArray_

typedef ::test_roscpp::VariableLengthStringArray_<std::allocator<void> > VariableLengthStringArray;

typedef boost::shared_ptr< ::test_roscpp::VariableLengthStringArray > VariableLengthStringArrayPtr;
typedef boost::shared_ptr< ::test_roscpp::VariableLengthStringArray const> VariableLengthStringArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/indigo/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/einar/catkin_ws/src/ros_comm/test/test_roscpp/test/msg', '/home/einar/catkin_ws/src/ros_comm/test/test_roscpp/test_serialization/msg', '/home/einar/catkin_ws/src/ros_comm/test/test_roscpp/perf/msg', '/home/einar/catkin_ws/src/ros_comm/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa992b5cca963995275d2a2f3ee7615f";
  }

  static const char* value(const ::test_roscpp::VariableLengthStringArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa992b5cca963995ULL;
  static const uint64_t static_value2 = 0x275d2a2f3ee7615fULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/VariableLengthStringArray";
  }

  static const char* value(const ::test_roscpp::VariableLengthStringArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] foo\n\
";
  }

  static const char* value(const ::test_roscpp::VariableLengthStringArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.foo);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct VariableLengthStringArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::VariableLengthStringArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::VariableLengthStringArray_<ContainerAllocator>& v)
  {
    s << indent << "foo[]" << std::endl;
    for (size_t i = 0; i < v.foo.size(); ++i)
    {
      s << indent << "  foo[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.foo[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_VARIABLELENGTHSTRINGARRAY_H
