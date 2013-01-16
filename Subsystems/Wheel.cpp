#include "Wheel.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"

Wheel::Wheel(int motorPort, int encoderAPort, int encoderBPort) : PIDSubsystem("Wheel", Kp, Ki, Kd) {
	motor = new Tallon(motorPort);
	encoder = new Encoder(encoderAPort, encoderBPort);
	encoder->SetDistancePerPulse(ENCODER_DISTANCE_PER_PULSE);
	setSetpoint(0);
	enable();
}

double Wheel::ReturnPIDInput() {
	return encoder->GetRate();
}

void Wheel::UsePIDOutput(double output) {
	motor->set(output);
}

void Wheel::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}

void Wheel::SetSpeed(double speed) {
	setSetpoint(speed);
}

void Wheel::Stop() {
	setSetpoint(0);
}
