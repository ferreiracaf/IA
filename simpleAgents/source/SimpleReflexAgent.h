#ifndef SIMPLEREFLEXAGENT_H
#define SIMPLEREFLEXAGENT_H

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include "defs.h"
#include "Environment.h"
#include "Perception.h"
#include "Action.h"
#include "Agent.h"

using namespace std;

class SimpleReflexAgent : public Agent
{
private:

public:
	SimpleReflexAgent(Perception * _p = nullptr, Action * _a = nullptr, Environment* _e = nullptr);
	~SimpleReflexAgent();
	Action* chooseAction();
	void takeAction();
};

#endif //SIMPLEREFLEXAGENT_H