#include "Robot.h"
#include "Autons.h"
#include "Variables.h"
using namespace std;
	void Robot::Robot() : Robot::defense(){//Constructor
		sticks[LEFT] = new Joystick(0);
		sticks[RIGHT] = new Joystick(1);
		myRobot = new RobotDrive(0,1,2,3);
		myRobot->SetExpiration(0.1);
	}
	void Robot::RobotInit()//ChoosingAutons
	{
		defense->AddDefault(snothing, (void*)&snothing);
		defense->AddObject(sportcullis, (void*)&sportcullis);
		defense->AddObject(schevaldefrise, (void*)&schevaldefrise);
		defense->AddObject(smoat, (void*)&smoat);
		defense->AddObject(sramparts, (void*)&sramparts);
		defense->AddObject(sdrawbridge, (void*)&sdrawbridge);
		defense->AddObject(ssallyport, (void*)&ssallyport);
		defense->AddObject(srockwall, (void*)&srockwall);
		defense->AddObject(sroughterrain, (void*)&sroughterrain);
		SmartDashboard::PutData("Defense:", defense);
	}

	void Robot::Autonomous()//Deploying Chosen Autons
	{
		string DefenseSelection = *((string*)defense->GetSelected());
		AdaptiveAuton(DefenseSelection);

	}

	void Robot::OperatorControl()//Teleop
	{
		myRobot->SetSafetyEnabled(true);
		while (IsOperatorControl() && IsEnabled())
		{
			myRobot->TankDrive(sticks[LEFT]->GetY(), sticks[RIGHT]->GetY());
		}
	}



