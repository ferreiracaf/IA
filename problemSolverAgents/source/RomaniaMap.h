#include <iostream>
#include <string>
#include <vector>
#include "State.h"
#include "Action.h"
#include "Model.h"

using namespace std;

vector<State*>* setupRomaniaMap();
void destroyRomaniaMap(vector<State*>* vec);