#include "State.h"
// #include "Action.h"

State::State(string _name, vector<Action*>* act){
    this->name = _name;
    if(act != nullptr)
        this->neighbors = act;
}

State::~State(){}

string State::getName(){
    return this->name;
}

void State::setName(string n){
    this->name = n;
}

vector<Action*>* State::getNeighbors(){
    return this->neighbors;
}

void State::setNeighbors(vector<Action*>* act){
    this->neighbors = act;
}

void State::printState(){
    cout << "\t" << this->getName() << endl;
    
    for(int i = 0; i < (int) this->getNeighbors()->size(); i++)
    {
        cout << "\t\t-> " << this->getNeighbors()->at(i)->getName()
        << " - distance: " << this->getNeighbors()->at(i)->getDistance() << endl;
    }
}
