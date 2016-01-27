#ifndef AUTON_H
#define AUTON_H
#include "Robot.h"
using namespace std;
void AdaptiveAuton(string defense)
{
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
#endif
