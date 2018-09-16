#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class State
{
private:
    string name;
    vector<State*>* neighbors;
    vector<int>* distance;
public:
    State(string _name, vector<State*>* n = nullptr,
        vector<int>* d = nullptr);
    ~State();
    string getName();
    void setName(string n);
    vector<State*>* getNeighbors();
    void setNeighbors(vector<State*>* n);
    vector<int>* getDistance();
    void setDistance(vector<int>* v);
};

#endif // STATE_H