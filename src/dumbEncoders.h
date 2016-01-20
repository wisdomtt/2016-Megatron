
#ifndef SRC_DUMBENCODERS_H_
#define SRC_DUMBENCODERS_H_
#include "Robot.h"
bool threshold (Encoder *encoder, float distance, float timelimit){

	Timer *timer;
	timer = new Timer();
	encoder->Reset();
	while(encoder->GetDistance() < distance)
	{
		timer->Reset();
		timer->Start();
		if(timer->Get() > timelimit){
			break;
		}
		timer->Stop();
	}
	return true;

}

bool turn(bool direction, Gyro *gyro, RobotDrive *robot, float degrees, float timelimit){
	Timer *timer;
	timer = new Timer();
	switch (direction){//Used bool not float BECAUSE I CAN

		case true:{

			timer->Reset();

			robot->TankDrive(1.0,0.0);
			gyro->Reset();
			while(gyro->GetAngle() < degrees){
				if(timer->Get() > timelimit){
					break;//Safety net incase gyro broken af
				}
			}
			break;
		}


		case false:{

			timer->Reset();

			robot->TankDrive(0.0,1.0);
			gyro->Reset();
			while(gyro->GetAngle() < degrees){
				if(timer->Get() > timelimit){
					break;//Safety net incase gyro broken af
				}
			}
			break;
		}
	}
	return true;
}





#endif /* SRC_DUMBENCODERS_H_ */
