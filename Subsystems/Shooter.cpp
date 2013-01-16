#include "Shooter.h"
#include "../Robotmap.h"
#include "../Commands/DriveFromJoysticks.h"

Shooter::Shooter() : 
Subsystem("Shooter") {
	wheel0 = new Talon(MOTOR_0, ENCODER_0_A, ENCODER_0_B);
	wheel1 = new Wheel(MOTOR_1, ENCODER_1_A, ENCODER_1_B);
}
    
void Shooter::InitDefaultCommand() {
	SetDefaultCommand(new DriveFromJoysticks());
}

void Shooter::driveFromJoysticks(Joystick *joystick0, Joystick *joystick1) {
	wheel0->SetSpeed(joystick0->GetY());
	wheel1->SetSpeed(joystick1->GetY());
}
