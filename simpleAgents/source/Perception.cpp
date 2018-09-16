#include "Perception.h"

Perception::Perception(LOCATION loc, DIRTY dirt){
    this->location = loc;
    this->isDirty = dirt;
}

Perception::~Perception(){}

LOCATION Perception::getLocation(){
    return this->location;
}
void Perception::setLocation(LOCATION loc){
    this->location = loc;
}
DIRTY Perception::getIsDirty(){
    return this->isDirty;
}
void Perception::setIsDirty(DIRTY dirty){
    this->isDirty = dirty;
}
LOCATION Perception::locateAgent(Environment* Env){
    this->location = Env->getAgentLocation();
    return this->location;
}
DIRTY Perception::seeEnvironment(Environment* Env){
    LOCATION now = this->locateAgent(Env);
    if(now == A)
        this->isDirty = Env->getIsDirtyA();
    else
        if(now == B)
            this->isDirty = Env->getIsDirtyB();
    return this->isDirty;
}
void Perception::updatePerception(Environment* Env){
    LOCATION loc = Env->getAgentLocation();
    DIRTY dir;
    if(loc == A)
        dir  = Env->getIsDirtyA();
    else
        dir = Env->getIsDirtyB();
    this->location = loc;
    this->isDirty = dir;
}
