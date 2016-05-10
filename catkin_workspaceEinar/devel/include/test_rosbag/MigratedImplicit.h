// Generated by gencpp from file test_rosbag/MigratedImplicit.msg
// DO NOT EDIT!


#ifndef TEST_ROSBAG_MESSAGE_MIGRATEDIMPLICIT_H
#define TEST_ROSBAG_MESSAGE_MIGRATEDIMPLICIT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <test_rosbag/MigratedExplicit.h>

namespace test_rosbag
{
template <class ContainerAllocator>
struct MigratedImplicit_
{
  typedef MigratedImplicit_<ContainerAllocator> Type;

  MigratedImplicit_()
    : header()
    , field4()
    , field3()
    , field2(0.0)
    , field1(0)  {
    }
  MigratedImplicit_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , field4(_alloc)
    , field3(_alloc)
    , field2(0.0)
    , field1(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::test_rosbag::MigratedExplicit_<ContainerAllocator>  _field4_type;
  _field4_type field4;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _field3_type;
  _field3_type field3;

   typedef float _field2_type;
  _field2_type field2;

   typedef int32_t _field1_type;
  _field1_type field1;




  typedef boost::shared_ptr< ::test_rosbag::MigratedImplicit_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosbag::MigratedImplicit_<ContainerAllocator> const> ConstPtr;

}; // struct MigratedImplicit_

typedef ::test_rosbag::MigratedImplicit_<std::allocator<void> > MigratedImplicit;

typedef boost::shared_ptr< ::test_rosbag::MigratedImplicit > MigratedImplicitPtr;
typedef boost::shared_ptr< ::test_rosbag::MigratedImplicit const> MigratedImplicitConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosbag::MigratedImplicit_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rosbag

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'rosgraph_msgs': ['/opt/ros/indigo/share/rosgraph_msgs/cmake/../msg'], 'test_rosbag': ['/home/einar/catkin_ws/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::MigratedImplicit_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::MigratedImplicit_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::MigratedImplicit_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b0df649c3321dd04be54792fdbbc874";
  }

  static const char* value(const ::test_rosbag::MigratedImplicit_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b0df649c3321dd0ULL;
  static const uint64_t static_value2 = 0x4be54792fdbbc874ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosbag/MigratedImplicit";
  }

  static const char* value(const ::test_rosbag::MigratedImplicit_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header  header\n\
MigratedExplicit field4 #(17, 58.2 \"aldfkja\", 82)\n\
string  field3 #\"kljene\"\n\
float32 field2 #16.32\n\
int32   field1 #34\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: test_rosbag/MigratedExplicit\n\
Header  header\n\
float32 afield2 #58.2\n\
string  combo_field3 #\"aldfkja 17\"\n\
int32   afield4 #82\n\
";
  }

  static const char* value(const ::test_rosbag::MigratedImplicit_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.field4);
      stream.next(m.field3);
      stream.next(m.field2);
      stream.next(m.field1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MigratedImplicit_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosbag::MigratedImplicit_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosbag::MigratedImplicit_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "field4: ";
    s << std::endl;
    Printer< ::test_rosbag::MigratedExplicit_<ContainerAllocator> >::stream(s, indent + "  ", v.field4);
    s << indent << "field3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.field3);
    s << indent << "field2: ";
    Printer<float>::stream(s, indent + "  ", v.field2);
    s << indent << "field1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.field1);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSBAG_MESSAGE_MIGRATEDIMPLICIT_H
