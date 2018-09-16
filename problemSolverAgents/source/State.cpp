#include "State.h"

State::State(string _name, vector<State*>* n, vector<int>* d){
    this->name = _name;
    if(n != nullptr)
        this->neighbors = n;
    if(d != nullptr)
        this->distance = d;
}

State::~State(){}

string State::getName(){
    return this->name;
}

void State::setName(string n){
    this->name = n;
}
    
vector<State*>* State::getNeighbors(){
    return this->neighbors;
}

void State::setNeighbors(vector<State*>* n){
    this->neighbors = n;
}

vector<int>* State::getDistance(){
    return this->distance;
}

void State::setDistance(vector<int>* v){
    this->distance = v;
}