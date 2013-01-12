#include "DriveFromJoysticks.h"

DriveFromJoysticks::DriveFromJoysticks() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void DriveFromJoysticks::Initialize() {
	shooter->driveFromJoysticks(oi->getJoystick0(), oi->getJoystick1());
}

// Called repeatedly when this Command is scheduled to run
void DriveFromJoysticks::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool DriveFromJoysticks::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveFromJoysticks::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveFromJoysticks::Interrupted() {
}
