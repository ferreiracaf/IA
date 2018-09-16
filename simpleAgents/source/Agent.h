#ifndef AGENT_H
#define AGENT_H

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include "defs.h"
#include "Environment.h"
#include "Perception.h"
#include "Action.h"

using namespace std;

class Agent
{
private:
	Perception * perception;
	vector <Action *> actions;
	Environment * env;

public:
	Agent(Perception * _p = nullptr, Action * _a = nullptr, Environment* _e = nullptr);
	Perception* getPerception();
	void setPerception(Perception* _p);
	vector<Action*> getActionVector();
	Action* getAction(string s);
	void setAction(Action* _a);
	Environment* getEnvironment();
	void setEnvironment(Environment* e);
	~Agent();
};

#endif //AGENT_H