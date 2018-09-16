#include "Agent.h"

Agent::Agent(Perception * _p, Action * _a, Environment* _e){
    if(_p != nullptr)
        this->perception = _p;
    if(_a != nullptr)
        this->actions.push_back(_a);
    if(_a != nullptr)
        this->env = _e;
};
Perception* Agent::getPerception(){
    return this->perception;
}
void Agent::setPerception(Perception* _p){
    this->perception = _p;
}
vector<Action*> Agent::getActionVector(){
    return this->actions;
}
Action* Agent::getAction(string s){
    int i;
    Action* founded = nullptr;
    for(i = 0; i < (int) actions.size(); i++){
        if(actions.at(i)->getName() == s){
            founded = actions.at(i); 
            break;
        }
    }
    return founded;
}
void Agent::setAction(Action* _a){
    if(this->getAction(_a->getName()) == nullptr)
        this->actions.push_back(_a);
}
Environment* Agent::getEnvironment(){
    return this->env;
}
void Agent::setEnvironment(Environment* e){
    this->env = e;
}
Agent::~Agent(){}