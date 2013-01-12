#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	static const UINT32 JOYSTICK_0 = 0;
	static const UINT32 JOYSTICK_1 = 1;
	
	Joystick *joystick0;
	Joystick *joystick1;
public:
	OI();
	Joystick *getJoystick0();
	Joystick *getJoystick1();
};

#endif
