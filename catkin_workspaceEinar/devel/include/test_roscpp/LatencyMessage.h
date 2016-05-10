// Generated by gencpp from file test_roscpp/LatencyMessage.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_LATENCYMESSAGE_H
#define TEST_ROSCPP_MESSAGE_LATENCYMESSAGE_H


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
struct LatencyMessage_
{
  typedef LatencyMessage_<ContainerAllocator> Type;

  LatencyMessage_()
    : publish_time(0.0)
    , receipt_time(0.0)
    , count(0)
    , thread_index(0)
    , array()  {
    }
  LatencyMessage_(const ContainerAllocator& _alloc)
    : publish_time(0.0)
    , receipt_time(0.0)
    , count(0)
    , thread_index(0)
    , array(_alloc)  {
    }



   typedef double _publish_time_type;
  _publish_time_type publish_time;

   typedef double _receipt_time_type;
  _receipt_time_type receipt_time;

   typedef uint64_t _count_type;
  _count_type count;

   typedef uint32_t _thread_index_type;
  _thread_index_type thread_index;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _array_type;
  _array_type array;




  typedef boost::shared_ptr< ::test_roscpp::LatencyMessage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::LatencyMessage_<ContainerAllocator> const> ConstPtr;

}; // struct LatencyMessage_

typedef ::test_roscpp::LatencyMessage_<std::allocator<void> > LatencyMessage;

typedef boost::shared_ptr< ::test_roscpp::LatencyMessage > LatencyMessagePtr;
typedef boost::shared_ptr< ::test_roscpp::LatencyMessage const> LatencyMessageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::LatencyMessage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::LatencyMessage_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test_roscpp::LatencyMessage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::LatencyMessage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::LatencyMessage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::LatencyMessage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::LatencyMessage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::LatencyMessage_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::LatencyMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be90d117303321f392404ed7edeb7c8c";
  }

  static const char* value(const ::test_roscpp::LatencyMessage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe90d117303321f3ULL;
  static const uint64_t static_value2 = 0x92404ed7edeb7c8cULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::LatencyMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/LatencyMessage";
  }

  static const char* value(const ::test_roscpp::LatencyMessage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::LatencyMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 publish_time\n\
float64 receipt_time\n\
uint64 count\n\
uint32 thread_index\n\
uint8[] array\n\
\n\
";
  }

  static const char* value(const ::test_roscpp::LatencyMessage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::LatencyMessage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.publish_time);
      stream.next(m.receipt_time);
      stream.next(m.count);
      stream.next(m.thread_index);
      stream.next(m.array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LatencyMessage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::LatencyMessage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::LatencyMessage_<ContainerAllocator>& v)
  {
    s << indent << "publish_time: ";
    Printer<double>::stream(s, indent + "  ", v.publish_time);
    s << indent << "receipt_time: ";
    Printer<double>::stream(s, indent + "  ", v.receipt_time);
    s << indent << "count: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.count);
    s << indent << "thread_index: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.thread_index);
    s << indent << "array[]" << std::endl;
    for (size_t i = 0; i < v.array.size(); ++i)
    {
      s << indent << "  array[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.array[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_LATENCYMESSAGE_H
