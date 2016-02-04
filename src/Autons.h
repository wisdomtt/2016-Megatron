#ifndef AUTON_H
#define AUTON_H
#include "Robot.h"
using namespace std;
void Robot::AdaptiveAuton(string defense)
{
	if(defense == "PortCullis"){
		PortCullis();
	} else if (defense == "Cheval de Frise"){
		ChevalDeFrise();
	}else if (defense == "Drawbridge"){
		Drawbridge();
	}else if(defense == "Moat"){
		Moat();
	}else if (defense=="Ramparts"){
		Ramparts();
	}else if (defense == "Drawbridge"){
		Drawbridge();
	}else if (defense == "Sallyport"){
		SallyPort();
	}
	else if(defense == "Rockwall"){
		RockWall();
	}else if (defense == "Routh Terrain"){
		RoughTerrain();
	}
	//Function handles all Auton's
}
void Robot::PortCullis()
{
	myRobot->TankDrive(1.0, 1.0);
	threshold(DriveEnc[LEFT], 4.0, 5.0);
}
void Robot::ChevalDeFrise()
{
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Drawbridge()
{
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Moat()
{
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Ramparts()
{
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::RockWall()
{
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::RoughTerrain()
{
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::SallyPort()
{
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Hanging(){

}
#endif
