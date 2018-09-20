#ifndef ACTION_H
#define ACTION_H

#include <iostream>
#include <string>
#include <vector>
#include "State.h"

using namespace std;

class State;

class Action
{
private:
    string name;
    State* next;
    int distance;
public:
    Action(State* sta = nullptr, int dist = 0);
    ~Action();
    string getName();
    void setName(string n);
    State* getNext();
    void setNext(State* sta, int dist);
    int getDistance();
    void setDistance(int x);
};

#endif //ACTION_H