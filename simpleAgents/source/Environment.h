#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include "defs.h"

using namespace std;

class Environment
{
private:
	DIRTY isDirtyA;
	DIRTY isDirtyB;
	LOCATION agentLocation;
	
public:
	Environment(DIRTY dirA, DIRTY dirB, LOCATION loc);
	DIRTY getIsDirtyA();
	void setIsDirtyA(DIRTY dirty);
	DIRTY getIsDirtyB();
	void setIsDirtyB(DIRTY dirty);
	LOCATION getAgentLocation();
	void setAgentLocation(LOCATION _location);
	~Environment();
};

#endif //ENVIRONMENT_H