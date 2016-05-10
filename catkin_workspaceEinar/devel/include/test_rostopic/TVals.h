// Generated by gencpp from file test_rostopic/TVals.msg
// DO NOT EDIT!


#ifndef TEST_ROSTOPIC_MESSAGE_TVALS_H
#define TEST_ROSTOPIC_MESSAGE_TVALS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_rostopic
{
template <class ContainerAllocator>
struct TVals_
{
  typedef TVals_<ContainerAllocator> Type;

  TVals_()
    : t()
    , d()  {
    }
  TVals_(const ContainerAllocator& _alloc)
    : t()
    , d()  {
    }



   typedef ros::Time _t_type;
  _t_type t;

   typedef ros::Duration _d_type;
  _d_type d;




  typedef boost::shared_ptr< ::test_rostopic::TVals_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rostopic::TVals_<ContainerAllocator> const> ConstPtr;

}; // struct TVals_

typedef ::test_rostopic::TVals_<std::allocator<void> > TVals;

typedef boost::shared_ptr< ::test_rostopic::TVals > TValsPtr;
typedef boost::shared_ptr< ::test_rostopic::TVals const> TValsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rostopic::TVals_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rostopic::TVals_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rostopic

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'test_rostopic': ['/home/einar/catkin_ws/src/ros_comm/test/test_rostopic/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rostopic::TVals_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rostopic::TVals_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rostopic::TVals_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rostopic::TVals_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rostopic::TVals_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rostopic::TVals_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rostopic::TVals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae4d4f9600b9ab683a5dc9372c031758";
  }

  static const char* value(const ::test_rostopic::TVals_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae4d4f9600b9ab68ULL;
  static const uint64_t static_value2 = 0x3a5dc9372c031758ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rostopic::TVals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rostopic/TVals";
  }

  static const char* value(const ::test_rostopic::TVals_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rostopic::TVals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# for rostopic tests\n\
time t\n\
duration d\n\
";
  }

  static const char* value(const ::test_rostopic::TVals_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rostopic::TVals_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.t);
      stream.next(m.d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TVals_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rostopic::TVals_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rostopic::TVals_<ContainerAllocator>& v)
  {
    s << indent << "t: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.t);
    s << indent << "d: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.d);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSTOPIC_MESSAGE_TVALS_H
