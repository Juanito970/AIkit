#include <ros/ros.h>
#include <sensor_msgs/Imu.h>


int main(int argc, char** argv){
  ros::init(argc, argv, "AIkit_republisher");
  ros::NodeHandle n;

  ros::Rate r(50);
  ros::Subscriber AIkit1_sub = n.subscribe("sensorTopic",10,AIkitCallback);
  while(n.ok()){
    r.sleep();
  }
}