#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>
#include <vector>
#include "State.h"

using namespace std;

class Model
{
private:
    vector<State*>* model;
    
public:
    Model(vector<State*>* m);
    ~Model();
    vector<State*>* getModel();
    void setModel(vector<State*>* m);
    void printModel();
    State* searchState(string name);
};

#endif //MODEL_H