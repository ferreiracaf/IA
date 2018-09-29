#include "Node.h"

Node::Node(State* _state, Action* _action, Node* _parent,
    int _cost)
{
    this->state = _state;
    if(_parent != nullptr)
        this->parent = _parent;
    this->toHere = _action;
    if(_cost != 0)
        this->cost = _cost;
}

Node::~Node(){}

State * Node::getState(){
    return this->state;
}
void Node::setState(State* s){
    this->state = s;
}
Node * Node::getParent(){
    return this->parent;
}
void Node::setParent(Node * p){
    this->parent = p;
}
Action * Node::getAction(){
    return this->toHere;
}
void Node::setAction(Action * a){
    this->toHere = a;
}
int Node::getCost(){
    return this->cost;
}
void Node::setCost(int x){
    this->cost = x;
}