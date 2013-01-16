#ifndef WHEEL_H
#define WHEEL_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Nyle
 */
class Wheel: public PIDSubsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// set the P, I, and D constants here
	static const double Kp = 0.0;//TODO: Put values in these
	static const double Ki = 0.0;
	static const double Kd = 0.0;
	
	Talon *motor;
	Encoder *encoder;
public:
	Wheel();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void SetSpeed(double speed);
	void Stop();
};

#endif
