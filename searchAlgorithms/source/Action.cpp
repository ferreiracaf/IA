#include "Action.h"

Action::Action(State* sta, int dist){
    if(sta != nullptr){
        this->name = sta->getName();
        this->distance = dist;
        this->next = sta;
    }
}

Action::~Action(){}

string Action::getName(){
    return this->name;
}

void Action::setName(string n){
    this->name = n;
}

State* Action::getNext(){
    return this->next;
}

void Action::setNext(State* sta, int dist){
    if(sta != nullptr){
        this->name = sta->getName();
        this->distance = dist;
        this->next = sta;
    }
}
int Action::getDistance(){
    return this->distance;
}
void Action::setDistance(int x){
    this->distance = x;
}