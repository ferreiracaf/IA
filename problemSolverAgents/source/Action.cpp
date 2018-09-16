#include "Action.h"

Action::Action(string n){
    this->name = n;
}

Action::~Action(){}

string Action::getName(){
    return this->name;
}

void Action::setName(string n){
    this->name = n;
}