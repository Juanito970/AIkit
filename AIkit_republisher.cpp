#include <ros/ros.h>


int main(int argc, char** argv){
  ros::init(argc, argv, "AIkit_republisher");
  ros::NodeHandle n;

  ros::Rate r(50);

  while(n.ok()){
    r.sleep();
  }
}