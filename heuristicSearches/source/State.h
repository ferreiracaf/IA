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
    int heuristic;

public:
    State(string _name, vector<Action*>* act = nullptr, int heur = 0);
    ~State();
    string getName();
    void setName(string n);
    vector<Action*>* getNeighbors();
    void setNeighbors(vector<Action*>* act);
    void printState();
    int getHeuristic();
    void setHeuristic(int x);
};

#endif // STATE_H