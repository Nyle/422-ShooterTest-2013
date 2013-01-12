#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	static const UINT32 JOYSTICK_1 = 1;
	static const UINT32 JOYSTICK_2 = 2;
	
	Joystick *joystick1;
	Joystick *joystick2;
public:
	OI();
	Joystick *getJoystick1();
	Joystick *getJoystick2();
};

#endif
