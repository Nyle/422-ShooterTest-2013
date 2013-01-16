#ifndef SHOOTER_H
#define SHOOTER_H
#include "WPILib.h"
#include "Wheel.h"

/**
 *
 *
 * @author Nyle
 */
class Shooter : public Subsystem {
private:
	Wheel *wheel0;
	Wheel *wheel1;
public:
	Shooter();
	void InitDefaultCommand();
	void driveFromJoysticks(Joystick *joystick0, Joystick *joystick1);
};

#endif
