#include "Action.h"

Action::Action(string  str){
    this->name = str; 
};
string Action::getName(){
    return this->name;
}
void Action::setName(string  str){
    this->name = str;
}
Action::~Action(){}