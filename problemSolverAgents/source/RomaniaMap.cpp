#ifndef ROMANIAMAP_H
#define ROMANIAMAP_H

#include "RomaniaMap.h"

vector<State*>* setupRomaniaMap(){ 
    
    State * s1 = new State("Arad");
    State * s2 = new State("Oradea");
    State * s3 = new State("Zerind");
    State * s4 = new State("Timisoara");
    State * s5 = new State("Lugoj");
    State * s6 = new State("Mehadia");
    State * s7 = new State("Drobeta");
    State * s8 = new State("Sibiu");
    State * s9 = new State("Rimnicu Vilcea");
    State * s10 = new State("Craiova");
    State * s11 = new State("Fagaras");
    State * s12 = new State("Pitesti");
    State * s13 = new State("Bucharest");

    vector<State*>* v1 = new vector<State*>;
    vector<State*>* v2 = new vector<State*>;
    vector<State*>* v3 = new vector<State*>;
    vector<State*>* v4 = new vector<State*>;
    vector<State*>* v5 = new vector<State*>;
    vector<State*>* v6 = new vector<State*>;
    vector<State*>* v7 = new vector<State*>;
    vector<State*>* v8 = new vector<State*>;
    vector<State*>* v9 = new vector<State*>;
    vector<State*>* v10 = new vector<State*>;
    vector<State*>* v11 = new vector<State*>;
    vector<State*>* v12 = new vector<State*>;
    vector<State*>* v13 = new vector<State*>;

    vector<int>* d1 = new vector<int>;
    vector<int>* d2 = new vector<int>;
    vector<int>* d3 = new vector<int>;
    vector<int>* d4 = new vector<int>;
    vector<int>* d5 = new vector<int>;
    vector<int>* d6 = new vector<int>;
    vector<int>* d7 = new vector<int>;
    vector<int>* d8 = new vector<int>;
    vector<int>* d9 = new vector<int>;
    vector<int>* d10 = new vector<int>;
    vector<int>* d11 = new vector<int>;
    vector<int>* d12 = new vector<int>;
    vector<int>* d13 = new vector<int>;

// Arad
    v1->push_back(s3);  d1->push_back(75);    // Zerind
    v1->push_back(s8);  d1->push_back(140);   // Sibiu
    v1->push_back(s4);  d1->push_back(118);   // Timisoara
// Oradea
    v2->push_back(s3);  d2->push_back(71);    // Zerind
    v2->push_back(s8);  d2->push_back(151);   // Sibiu
// Zerind
    v3->push_back(s1);  d3->push_back(75);    // Arad
    v3->push_back(s2);  d3->push_back(71);    // Oradea
// Timisoara
    v4->push_back(s1);  d4->push_back(118);   // Arad
    v4->push_back(s5);  d4->push_back(111);   // Lugoj
// Lugoj
    v5->push_back(s4);  d5->push_back(111);   // Timisoara
    v5->push_back(s6);  d5->push_back(70);    // Mehadia
// Mehadia
    v6->push_back(s5);  d6->push_back(70);    // Lugoj
    v6->push_back(s7);  d6->push_back(75);    // Drobeta
// Drobeta
    v7->push_back(s6);  d7->push_back(75);    // Mehadia
    v7->push_back(s10); d7->push_back(120);  // Craiova
// Sibiu
    v8->push_back(s2);  d8->push_back(151);   // Oradea
    v8->push_back(s1);  d8->push_back(140);   // Arad
    v8->push_back(s9);  d8->push_back(80);    // Rimnicu Vilcea
    v8->push_back(s11); d8->push_back(99);   // Fagaras
// Rimnicu Vilcea
    v9->push_back(s8);  d9->push_back(80);    // Sibiu
    v9->push_back(s10); d9->push_back(146);  // Craiova
    v9->push_back(s12); d9->push_back(97);   // Pitesti
// Craiova
    v10->push_back(s9); d10->push_back(146); // Rimnicu Vilcea
    v10->push_back(s12);d10->push_back(138);// Pitesti
    v10->push_back(s7); d10->push_back(120); // Drobeta
// Fagaras
    v11->push_back(s13);d11->push_back(211);// Bucharest
    v11->push_back(s8); d11->push_back(99);  // Sibiu
// Pitesti
    v12->push_back(s9); d12->push_back(97);  // Rimnicu Vilcea
    v12->push_back(s13);d12->push_back(101);// Bucharest
    v12->push_back(s10);d12->push_back(138);// Craiova
// Bucharest
    v13->push_back(s11);d13->push_back(211);// Fagaras
    v13->push_back(s12);d13->push_back(101);// Pitesti

    s1->setNeighbors(v1);
    s1->setDistance(d1);
    s2->setNeighbors(v2);
    s2->setDistance(d2);
    s3->setNeighbors(v3);
    s3->setDistance(d3);
    s4->setNeighbors(v4);
    s4->setDistance(d4);
    s5->setNeighbors(v5);
    s5->setDistance(d5);
    s6->setNeighbors(v6);
    s6->setDistance(d6);
    s7->setNeighbors(v7);
    s7->setDistance(d7);
    s8->setNeighbors(v8);
    s8->setDistance(d8);
    s9->setNeighbors(v9);
    s9->setDistance(d9);
    s10->setNeighbors(v10);
    s10->setDistance(d10);
    s11->setNeighbors(v11);
    s11->setDistance(d11);
    s12->setNeighbors(v12);
    s12->setDistance(d12);
    s13->setNeighbors(v13);
    s13->setDistance(d13);

    vector<State*>* allStates = new vector<State*>;

    allStates->push_back(s1);
    allStates->push_back(s2);
    allStates->push_back(s3);
    allStates->push_back(s4);
    allStates->push_back(s5);
    allStates->push_back(s6);
    allStates->push_back(s7);
    allStates->push_back(s8);
    allStates->push_back(s9);
    allStates->push_back(s10);
    allStates->push_back(s11);
    allStates->push_back(s12);
    allStates->push_back(s13);

    return allStates;
}

void destroyRomaniaMap(vector<State*>* vec){
    State* aux = nullptr;
    for(int i = 0; i < (int) vec->size(); i++)
    {
        aux = vec->at(i);
        delete aux->getNeighbors();
        delete aux->getDistance();
        delete aux;
    }
    delete vec;
}

#endif //ROMANIAMAP_H