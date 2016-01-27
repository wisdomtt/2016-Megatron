#include "WPILib.h"
#include "Variables.h"
#include "dumbEncoders.h"
#ifndef ADD_H
#define ADD_H

// your declarations here

class Robot: public SampleRobot{

	public:
	RobotDrive *myRobot;
	Joystick *sticks[2];
	SendableChooser *defense;
	SendableChooser*position;
	Encoder *DriveEnc[2];
	Spark *arms[2];
	Joystick *gamepad;

	Robot():defense(), position(){
			sticks[LEFT] = new Joystick(0);
			sticks[RIGHT] = new Joystick(1);
			gamepad = new Joystick(2);
			myRobot = new RobotDrive(0,1,2,3);
			myRobot->SetExpiration(0.1);
			DriveEnc[LEFT] = new Encoder(0, 1, false, Encoder::k4X);
			DriveEnc[RIGHT] = new Encoder(1,2,false, Encoder::k4X);
			arms[LEFT] = new Spark(4);
			arms[RIGHT] = new Spark(5);
	}
	void PortCullis();
	void ChevalDeFrise();
	void Moat();
	void Ramparts();
	void Drawbridge();
	void SallyPort();
	void RockWall();
	void RoughTerrain();
	void AdaptiveAuton(string defense);
	void SetEncoders();
	void RobotInit();
	void Autonomous();
	void OperatorControl();
};
START_ROBOT_CLASS(Robot)

#endif
