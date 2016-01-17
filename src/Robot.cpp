#include "WPILib.h"
#include <iostream>
#include "Variables.h"
#include "Autons.h"
using namespace std;
/**
 * This is a demo program showing the use of the RobotDrive class.
 * The SampleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 *
 * WARNING: While it may look like a good choice to use for your code if you're inexperienced,
 * don't. Unless you know what you are doing, complex code will be much more difficult under
 * this system. Use IterativeRobot or Command-Based instead if you're new.
 */
class Robot: public SampleRobot
{
	/*PortCullis
	 * Cheval de Frise
	 * Moat
	 * Ramparts
	 * Drawbridge
	 * Sallyport
	 * Rockwall
	 * Rough Terrain
	 */
	RobotDrive *myRobot;
	SendableChooser *defense;


public:
	Robot()
	{
		myRobot = new RobotDrive(0,1,2,3);
		myRobot->SetExpiration(0.1);
	}

	void RobotInit()
	{
		defense->AddDefault(nothing, (void*)&nothing);
		defense->AddObject(PortCullis, (void*)&PortCullis);
		defense->AddObject(ChevalDeFrise, (void*)&ChevalDeFrise);
		defense->AddObject(Moat, (void*)&Moat);
		defense->AddObject(Ramparts, (void*)&Ramparts);
		defense->AddObject(Drawbridge, (void*)&Drawbridge);
		defense->AddObject(Sallyport, (void*)&Sallyport);
		defense->AddObject(Rockwall, (void*)&Rockwall);
		defense->AddObject(RoughTerrain, (void*)&RoughTerrain);
		//defense->AddObject(autoNameCustom, (void*)&autoNameCustom);
		SmartDashboard::PutData("Defense:", defense);
	}

	void Autonomous()
	{
		string DefenseSelection = *((std::string*)defense->GetSelected());
		AdaptiveAuton(DefenseSelection);

	}

	void OperatorControl()
	{
		myRobot->SetSafetyEnabled(true);
		while (IsOperatorControl() && IsEnabled())
		{
		}
	}

};

START_ROBOT_CLASS(Robot)
