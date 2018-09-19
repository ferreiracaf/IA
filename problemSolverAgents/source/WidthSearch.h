#ifndef WIDTHSEARCH_H
#define WIDTHSEARCH_H

#include <iostream>
#include <string>
#include <vector>
#include "Action.h"
#include "Model.h"
#include "State.h"
#include "RomaniaMap.h"
#include "SearchSolution.h"
#include "Node.h"
#include <queue>

using namespace std;

Node* widthSearch(State* initial, State* destination);

bool searchNodeInExp(Node * n, vector<Node*>* vec);

bool searchNodeInEdge(Node * n, queue<Node*>* que);

// bool searchNodeInExp(string s, vector<Node*>* vec);

// bool searchNodeInEdge(string s, queue<Node*>* que);

#endif //WIDTHSEARCH_H