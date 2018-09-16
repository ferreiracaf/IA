#ifndef TABLEDRIVENAGENT_H
#define TABLEDRIVENAGENT_H

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

class TableDrivenAgent : public Agent
{
private:
	list<Perception*> perceptions;
	map <list < Perception* > , Action* > table;

public:
	TableDrivenAgent(Perception * _p, Action * _a, map <list<Perception*>,
	    Action*> _table);
	~TableDrivenAgent();
	Action* chooseAction();
	void takeAction();
};

#endif //TABLEDRIVENAGENT_H