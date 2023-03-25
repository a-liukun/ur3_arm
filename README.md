如果重新编译的话,先catkin_make -DCATKIN_WHITELIST_PACKAGES="ur3_move", 因为ur3_move中定义了srv,必须先生成.h,所以强制先编译这个
然后再catkin_make -DCATKIN_WHITELIST_PACKAGES=''

如果重新编译的话，依次：
	catkin_make -DCATKIN_WHITELIST_PACKAGES="ur_msgs"
	catkin_make -DCATKIN_WHITELIST_PACKAGES="household_objects_database_msgs"
	catkin_make -DCATKIN_WHITELIST_PACKAGES="manipulation_msgs"
	catkin_make -DCATKIN_WHITELIST_PACKAGES="ur3_move"
	catkin_make -DCATKIN_WHITELIST_PACKAGES=''
	catkin_make 
	
追踪banana
	roslaunch openni2_launch openni2.launch	
	roslaunch ur3_move realUR3Cartesian.launch
	rosrun image_process detectMoveBanana
	rosrun ur3_move trackBanana



roslaunch openni2_launch openni2.launch报错
解决：sudo apt-get install  ros-noetic-openni2-*


roslaunch ur3_move realUR3Cartesian.launch报错：
解决：sudo apt-get install ros*controller*


手眼标定：
	roslaunch openni2_launch openni2.launch
	roslaunch ur3_move realUR3Cartesian.launch
	roslaunch easy_handeye ur3_xtion_calibration.launch
	rosrun rqt_gui rqt_gui 然后选菜单栏的plugins->visulization->image view,、topic选择/aruco_signal/result
	移动机械臂（先看看移动后tf能不能更新），保证相机都能看到码，然后采点，师兄采了30组好像，最后计算
	
git@github.com:a-liukun/Arm.git
