#include "OI.h"

OI::OI() {
	joystick0 = new Joystick(JOYSTICK_0);
	joystick1 = new Joystick(JOYSTICK_1);
}

Joystick * OI::getJoystick0(){
	return joystick0;
}

Joystick * OI::getJoystick1(){
	return joystick1;
}
