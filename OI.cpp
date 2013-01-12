#include "OI.h"

OI::OI() {
	joystick1 = new Joystick(JOYSTICK_1);
	joystick2 = new Joystick(JOYSTICK_2);
}

Joystick * OI::getJoystick1(){
	return joystick1;
}

Joystick * OI::getJoystick2(){
	return joystick2;
}
