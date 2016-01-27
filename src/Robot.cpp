#include "Robot.h"
#include "Autons.h"
#include "Variables.h"
#include "WPILib.h"
#include "Robot.h"
#include <iostream>
//
using namespace std;
	void Robot::SetEncoders(){
		DriveEnc[LEFT]->SetDistancePerPulse(SDPP);
		DriveEnc[RIGHT]->SetDistancePerPulse(SDPP);
	}
	void Robot::RobotInit()//ChoosingAutons
	{
		defense->AddDefault(nothing, (void*)&snothing);
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
		//AdaptiveAuton(DefenseSelection);
		enum string_code
		{
		    eNothing,
		    ePortCullis,
		    eChevalDeFrise,
		    eMoat,
			eRamparts,
			eDrawbridge,
			eSallyPort,
			eRockWall,
			eRoughTerrain,
		}
		string_code hashit (std::string const& inString)
		{
		    if (inString == "Nothing") return eNothing;
		    if (inString == "PortCullis") return ePortCullis;
		    if (inString == "ChevalDeFrise") return eChevalDeFrise;
		    if (inString == "Moat") return eMoat;
		    if (inString == "Ramparts") return eRamparts;
		    if (inString == "Drawbridge") return eDrawbridge;
		    if (inString == "SallyPort") return eSallyPort;
		    if (inString == "RockWall") return eRockWall;
		    if (inString == "RoughTerrain") return eRoughTerrain;
		}
		switch (hashit(stringValue))
		    {
		    	case eNothing:
		    		break;
		    	case ePortCullis:
		    		void Robot::PortCullis();
		    		break;
		    	case eChevalDeFrise:
		    		void Robot::ChevalDeFrise();
		    		break;
		    	case eMoat:
		    		void Robot::Moat();
		    		break;
		    	case eRamparts:
		    		void Robot::Ramparts();
		    		break;
		    	case eDrawbridge:
		    		void Robot::Drawbridge();
		    		break;
		    	case eSallyPort:
		    		void Robot::SallyPort();
		    		break;
		    	case eRockWall:
		    		void Robot::RockWall();
		    		break;
		    	case eRoughTerrain:
		    		void Robot::RoughTerrain();
		    		break;
		    }


	void Robot::OperatorControl()//Teleop
	{
		myRobot->SetSafetyEnabled(true);
		while (IsOperatorControl() && IsEnabled())
		{
			myRobot->TankDrive(sticks[LEFT]->GetY(), sticks[RIGHT]->GetY());
			if(gamepad->GetRawButton(0) == true){
				arms[LEFT]->Set(1.0);
				arms[RIGHT]->Set(1.0);
			}
			else if(gamepad->GetRawButton(1) == true){
				arms[LEFT]->Set(-1.0);
				arms[RIGHT]->Set(-1.0);
			}
		}
	}




