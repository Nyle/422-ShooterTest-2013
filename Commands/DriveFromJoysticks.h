#ifndef DRIVEFROMJOYSTICKS_H
#define DRIVEFROMJOYSTICKS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Nyle
 */
class DriveFromJoysticks : public CommandBase {
public:
	DriveFromJoysticks();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
