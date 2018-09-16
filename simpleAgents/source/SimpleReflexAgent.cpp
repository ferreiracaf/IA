#include "SimpleReflexAgent.h"

SimpleReflexAgent::SimpleReflexAgent(Perception * _p, Action * _a, Environment* _e):
		Agent(_p, _a, _e){}
SimpleReflexAgent::~SimpleReflexAgent(){}

Action* SimpleReflexAgent::chooseAction(){
    Action* chosen;
    Perception* perc = this->getPerception();
    Environment* envir = this->getEnvironment();
    perc->updatePerception(envir);
    DIRTY x  = perc->getIsDirty();
    if(x == Clean){
        if(perc->getLocation() == A){
            chosen = this->getAction("right");
        }
        if(perc->getLocation() == B){
            chosen = this->getAction("left");
        }
    }
    else{
        chosen = this->getAction("aspire");
    }
    return chosen;
}
void SimpleReflexAgent::takeAction(){
    Action* toDo = this->chooseAction();
    string name = toDo->getName();
    Environment* envir = this->getEnvironment(); 
    LOCATION loc = envir->getAgentLocation();
    if(name == "aspire"){
        cout << "doing action: " << name << " on ";
        if(loc == A){
            cout << "A" << endl;
            envir->setIsDirtyA(Clean);
        }
        if(loc == B){
            cout << "B" << endl;
            envir->setIsDirtyB(Clean);
        }
    }
    else{
        cout << "doing action: go to ";
        if(name == "right"){
            cout << name << "." << endl;
            envir->setAgentLocation(B);
        }
        else{
            if(name == "left"){
                cout << name << "." << endl;
                envir->setAgentLocation(A);
            }
            else{
                cout << "Incapaz de executar ação!" << endl;
            }
        }
    }
    cout << "done action: " << name << "." << endl;
    cout << "----------" << endl;
}