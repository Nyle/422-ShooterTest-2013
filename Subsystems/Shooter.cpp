#include "Shooter.h"
#include "../Robotmap.h"
#include "../Commands/DriveFromJoysticks.h"

Shooter::Shooter() : 
Subsystem("Shooter") {
	motor0 = new Talon(MOTOR_0);
	motor1 = new Talon(MOTOR_1);
}
    
void Shooter::InitDefaultCommand() {
	SetDefaultCommand(new DriveFromJoysticks());
}

void Shooter::driveFromJoysticks(Joystick *joystick0, Joystick *joystick1) {
	motor0->Set(joystick0->GetY());
	motor1->Set(joystick1->GetY());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
