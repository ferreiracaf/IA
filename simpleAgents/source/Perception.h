#ifndef PERCEPTION_H
#define PERCEPTION_H

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include "defs.h"
#include "Environment.h"

using namespace std;

class Perception
{
private:
	LOCATION location;
	DIRTY isDirty;

public:
	Perception(LOCATION loc, DIRTY dirt);
	~Perception();
	LOCATION getLocation();
	void setLocation(LOCATION loc);
	DIRTY getIsDirty();
	void setIsDirty(DIRTY dirty);
	LOCATION locateAgent(Environment* Env);
	DIRTY seeEnvironment(Environment* Env);
	void updatePerception(Environment* Env);
};

#endif //PERCEPTION_H