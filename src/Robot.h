#include "WPILib.h"
#include "Variables.h"
#ifndef ADD_H
#define ADD_H

// your declarations here

class Robot: public SampleRobot{

	public:
	RobotDrive *myRobot;
	Joystick *sticks[2];
	SendableChooser *defense;

	void PortCullis();
	void ChevalDeFrise();
	void Moat();
	void Ramparts();
	void Drawbridge();
	void Sallyport();
	void Rockwall();
	void RoughTerrain();

	void RobotInit();
	void Autonomous();
	void OperatorControl();
};
START_ROBOT_CLASS(Robot)
#endif
