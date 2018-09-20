#ifndef NODE_H
#define NODE_H

#include <vector>
#include "Action.h"
#include "Model.h"
#include "State.h"
#include "RomaniaMap.h"

using namespace std;

class Node
{
private:
    State * state;
    Node * parent;
    Action * toHere;
    int cost;
public:
    Node(State* _state, Action* _action, Node* _parent = nullptr,
        int _cost = 0);
    ~Node();
    State * getState();
    void setState(State* s);
    Node * getParent();
    void setParent(Node * p);
    Action * getAction();
    void setAction(Action * a);
    int getCost();
    void setCost(int x);
};


#endif //NODE_H