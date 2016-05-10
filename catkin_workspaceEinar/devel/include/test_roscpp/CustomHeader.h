// Generated by gencpp from file test_roscpp/CustomHeader.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_CUSTOMHEADER_H
#define TEST_ROSCPP_MESSAGE_CUSTOMHEADER_H


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
struct CustomHeader_
{
  typedef CustomHeader_<ContainerAllocator> Type;

  CustomHeader_()
    : a(0)  {
    }
  CustomHeader_(const ContainerAllocator& _alloc)
    : a(0)  {
    }



   typedef uint32_t _a_type;
  _a_type a;




  typedef boost::shared_ptr< ::test_roscpp::CustomHeader_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::CustomHeader_<ContainerAllocator> const> ConstPtr;

}; // struct CustomHeader_

typedef ::test_roscpp::CustomHeader_<std::allocator<void> > CustomHeader;

typedef boost::shared_ptr< ::test_roscpp::CustomHeader > CustomHeaderPtr;
typedef boost::shared_ptr< ::test_roscpp::CustomHeader const> CustomHeaderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::CustomHeader_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::CustomHeader_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/indigo/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/einar/catkin_ws/src/ros_comm/test/test_roscpp/test/msg', '/home/einar/catkin_ws/src/ros_comm/test/test_roscpp/test_serialization/msg', '/home/einar/catkin_ws/src/ros_comm/test/test_roscpp/perf/msg', '/home/einar/catkin_ws/src/ros_comm/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::CustomHeader_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::CustomHeader_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::CustomHeader_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::CustomHeader_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::CustomHeader_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::CustomHeader_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::CustomHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a5233fa4f3f6e00d1d85da1779d19d1e";
  }

  static const char* value(const ::test_roscpp::CustomHeader_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa5233fa4f3f6e00dULL;
  static const uint64_t static_value2 = 0x1d85da1779d19d1eULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::CustomHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/CustomHeader";
  }

  static const char* value(const ::test_roscpp::CustomHeader_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::CustomHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 a\n\
";
  }

  static const char* value(const ::test_roscpp::CustomHeader_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::CustomHeader_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CustomHeader_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::CustomHeader_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::CustomHeader_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.a);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_CUSTOMHEADER_H
