// Generated by gencpp from file multimaster_msgs_fkie/LoadLaunchRequest.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_LOADLAUNCHREQUEST_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_LOADLAUNCHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multimaster_msgs_fkie
{
template <class ContainerAllocator>
struct LoadLaunchRequest_
{
  typedef LoadLaunchRequest_<ContainerAllocator> Type;

  LoadLaunchRequest_()
    : package()
    , file()
    , argv()  {
    }
  LoadLaunchRequest_(const ContainerAllocator& _alloc)
    : package(_alloc)
    , file(_alloc)
    , argv(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _package_type;
  _package_type package;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _file_type;
  _file_type file;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _argv_type;
  _argv_type argv;




  typedef boost::shared_ptr< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LoadLaunchRequest_

typedef ::multimaster_msgs_fkie::LoadLaunchRequest_<std::allocator<void> > LoadLaunchRequest;

typedef boost::shared_ptr< ::multimaster_msgs_fkie::LoadLaunchRequest > LoadLaunchRequestPtr;
typedef boost::shared_ptr< ::multimaster_msgs_fkie::LoadLaunchRequest const> LoadLaunchRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multimaster_msgs_fkie

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'multimaster_msgs_fkie': ['/home/einar/catkin_ws/src/multimaster_fkie/multimaster_msgs_fkie/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7cc67269dc4de0d6d7a3648f287878b";
  }

  static const char* value(const ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7cc67269dc4de0dULL;
  static const uint64_t static_value2 = 0x6d7a3648f287878bULL;
};

template<class ContainerAllocator>
struct DataType< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/LoadLaunchRequest";
  }

  static const char* value(const ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string package\n\
string file\n\
string argv\n\
";
  }

  static const char* value(const ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.package);
      stream.next(m.file);
      stream.next(m.argv);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LoadLaunchRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multimaster_msgs_fkie::LoadLaunchRequest_<ContainerAllocator>& v)
  {
    s << indent << "package: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.package);
    s << indent << "file: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.file);
    s << indent << "argv: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.argv);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_LOADLAUNCHREQUEST_H
