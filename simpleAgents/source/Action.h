#ifndef ACTION_H
#define ACTION_H

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include "defs.h"

using namespace std;

class Action
{
private:
	string name;

public:
	Action(string  str);
	string getName();
	void setName(string  str);
	~Action();
};





#endif //ACTION_H