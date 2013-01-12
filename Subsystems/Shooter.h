#ifndef SHOOTER_H
#define SHOOTER_H
#include "WPILib.h"

/**
 *
 *
 * @author Nyle
 */
class Shooter : public Subsystem {
private:
	Talon *motor0;
	Talon *motor1;
public:
	Shooter();
	void InitDefaultCommand();
	void driveFromJoysticks(Joystick *joystick0, Joystick *joystick1);
};

#endif
