#ifndef HEURISTICSEARCH_H
#define HEURISTICSEARCH_H

#include <iostream>
#include <string>
#include <vector>
#include "Action.h"
#include "Model.h"
#include "State.h"
#include "RomaniaMap.h"
#include "Node.h"
#include <stack>
#include <queue>

using namespace std;

struct comp{
	bool operator()(Node* a, Node* b){
		return a->getState()->getHeuristic() > b->getState()->getHeuristic();
	}
};

Node* HeuristicSearch(State* initial);

bool searchNodeInExp(Node * n, vector<Node*>* vec);

bool searchNodeInEdge(Node * n, priority_queue<Node*, vector<Node*>, comp>* que);

#endif //HEURISTICSEARCH_H