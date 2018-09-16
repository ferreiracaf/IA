#ifndef ACTION_H
#define ACTION_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Action
{
private:
    string name;
public:
    Action(string n);
    ~Action();
    string getName();
    void setName(string n);
};

#endif //ACTION_H