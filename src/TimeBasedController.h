#ifndef TimeBasedController_H
#define TimeBasedController_H

#include <Commands/Command.h>

class TimeBasedController : public frc::Command {
public:
	TimeBasedController();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
    
private:
    int iterationsToRun;
    int curIteration;
    double motorPower;
};

#endif  // TimeBasedController_H
