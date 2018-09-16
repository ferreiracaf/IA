#include "Environment.h"

Environment::Environment(DIRTY dirA, DIRTY dirB, LOCATION loc){
		this->isDirtyA = dirA;
		this->isDirtyB = dirB;
		this->agentLocation = loc;
}
DIRTY Environment::getIsDirtyA(){
    return this->isDirtyA;
}
void Environment::setIsDirtyA(DIRTY dirty){
    this->isDirtyA = dirty;
}
DIRTY Environment::getIsDirtyB(){
    return this->isDirtyB;
}
void Environment::setIsDirtyB(DIRTY dirty){
    this->isDirtyB = dirty;
}
LOCATION Environment::getAgentLocation(){
    return this->agentLocation;
}
void Environment::setAgentLocation(LOCATION _location){
    this->agentLocation = _location;
}
Environment::~Environment(){}