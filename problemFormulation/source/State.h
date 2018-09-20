#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>
#include <vector>
#include "Action.h"

using namespace std;

class Action;

class State
{
private:
    string name;
    vector<Action*>* neighbors;

public:
    State(string _name, vector<Action*>* act = nullptr);
    ~State();
    string getName();
    void setName(string n);
    vector<Action*>* getNeighbors();
    void setNeighbors(vector<Action*>* act);
    void printState();
};

#endif // STATE_H