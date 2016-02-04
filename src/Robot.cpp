#include "Robot.h"
#include "Autons.h"
#include "Variables.h"
#include "WPILib.h"
#include "Robot.h"
#include <iostream>
using namespace std;
	void Robot::SetEncoders(){
		DriveEnc[LEFT]->SetDistancePerPulse(SDPP);
		DriveEnc[RIGHT]->SetDistancePerPulse(SDPP);
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
		SetEncoders();
		string DefenseSelection = *((string*)defense->GetSelected());
		AdaptiveAuton(DefenseSelection);
	}


	void Robot::OperatorControl()//Teleop
	{
		myRobot->SetSafetyEnabled(true);
		while (IsOperatorControl() && IsEnabled())
		{
			myRobot->TankDrive(sticks[LEFT]->GetY(), sticks[RIGHT]->GetY());
			if(sticks[LEFT]->GetTrigger()){
				arms[LEFT]->Set(1.0);
			}
			else if (sticks[RIGHT]->GetTrigger()){
				arms[RIGHT]->Set(-1.0);
			}
			intakes[LEFT] = gamepad->GetY(GenericHID::kLeftHand);
			intakes[RIGHT] = gamepad->GetY(GenericHID::kRightHand);
			if(gamepad->GetRawButton(6)){
				Hanging();
			}
		}
	}




