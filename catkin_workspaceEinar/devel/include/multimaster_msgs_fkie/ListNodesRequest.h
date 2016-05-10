// Generated by gencpp from file multimaster_msgs_fkie/ListNodesRequest.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_LISTNODESREQUEST_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_LISTNODESREQUEST_H


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
struct ListNodesRequest_
{
  typedef ListNodesRequest_<ContainerAllocator> Type;

  ListNodesRequest_()
    {
    }
  ListNodesRequest_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ListNodesRequest_

typedef ::multimaster_msgs_fkie::ListNodesRequest_<std::allocator<void> > ListNodesRequest;

typedef boost::shared_ptr< ::multimaster_msgs_fkie::ListNodesRequest > ListNodesRequestPtr;
typedef boost::shared_ptr< ::multimaster_msgs_fkie::ListNodesRequest const> ListNodesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multimaster_msgs_fkie

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'multimaster_msgs_fkie': ['/home/einar/catkin_ws/src/multimaster_fkie/multimaster_msgs_fkie/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/ListNodesRequest";
  }

  static const char* value(const ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ListNodesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::multimaster_msgs_fkie::ListNodesRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_LISTNODESREQUEST_H
