#include "ros/ros.h"
#include "nav_msgs/OccupancyGrid.h"

void MapCB(const nav_msgs::OccupancyGrid::ConstPtr& msg) {
	ROS_INFO("x: %f", msg->info.origin.position.x);
}

int main(int argc, char** argv) {
	ros::init(argc, argv, "location_monitor");
	ros::NodeHandle nh;
	ros::Subscriber sub = nh.subscribe("map", 10, MapCB);
	ros::spin();
	return 0;
}