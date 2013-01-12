#include "CommandBase.h"
#include "Subsystems/Shooter.h"
#include "Commands/DriveFromJoysticks.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
Shooter* CommandBase::shooter = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	shooter = new Shooter();
	
	oi = new OI();
}
