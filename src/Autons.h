#ifndef AUTON_H
#define AUTON_H
#include <iostream>
#include "Robot.h"
using namespace std;
void AdaptiveAuton(string defense){
	//Function handles all Auton's

}
void Robot::PortCullis(){
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::ChevalDeFrise(){
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Drawbridge(){
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Moat(){
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Ramparts(){
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Rockwall(){
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::RoughTerrain(){
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
void Robot::Sallyport(){
	myRobot->TankDrive(1.0, 1.0);
	Wait(3.0);
	myRobot->TankDrive(0.0, 0.0);
}
#endif
