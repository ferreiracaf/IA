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
    State * s14 = new State("Giurgiu");
    State * s15 = new State("Urziceni");
    State * s16 = new State("Hirsova");
    State * s17 = new State("Eforie");
    State * s18 = new State("Vaslui");
    State * s19 = new State("Iasi");
    State * s20 = new State("Neamt");

    vector<Action*>* v1 = new vector<Action*>;
    vector<Action*>* v2 = new vector<Action*>;
    vector<Action*>* v3 = new vector<Action*>;
    vector<Action*>* v4 = new vector<Action*>;
    vector<Action*>* v5 = new vector<Action*>;
    vector<Action*>* v6 = new vector<Action*>;
    vector<Action*>* v7 = new vector<Action*>;
    vector<Action*>* v8 = new vector<Action*>;
    vector<Action*>* v9 = new vector<Action*>;
    vector<Action*>* v10 = new vector<Action*>;
    vector<Action*>* v11 = new vector<Action*>;
    vector<Action*>* v12 = new vector<Action*>;
    vector<Action*>* v13 = new vector<Action*>;
    vector<Action*>* v14 = new vector<Action*>;
    vector<Action*>* v15 = new vector<Action*>;
    vector<Action*>* v16 = new vector<Action*>;
    vector<Action*>* v17 = new vector<Action*>;
    vector<Action*>* v18 = new vector<Action*>;
    vector<Action*>* v19 = new vector<Action*>;
    vector<Action*>* v20 = new vector<Action*>;

// Arad
    v1->push_back(new Action(s3, 75));    // Zerind
    v1->push_back(new Action(s8, 140));   // Sibiu
    v1->push_back(new Action(s4, 118));   // Timisoara
// Oradea
    v2->push_back(new Action(s3, 71));    // Zerind
    v2->push_back(new Action(s8, 151));   // Sibiu
// Zerind
    v3->push_back(new Action(s1, 75));    // Arad
    v3->push_back(new Action(s2, 71));    // Oradea
// Timisoara
    v4->push_back(new Action(s1, 118));   // Arad
    v4->push_back(new Action(s5, 111));   // Lugoj
// Lugoj
    v5->push_back(new Action(s4, 111));   // Timisoara
    v5->push_back(new Action(s6, 70));    // Mehadia
// Mehadia
    v6->push_back(new Action(s5, 70));    // Lugoj
    v6->push_back(new Action(s7, 75));    // Drobeta
// Drobeta
    v7->push_back(new Action(s6, 75));    // Mehadia
    v7->push_back(new Action(s10, 120));  // Craiova
// Sibiu
    v8->push_back(new Action(s2, 151));   // Oradea
    v8->push_back(new Action(s1, 140));   // Arad
    v8->push_back(new Action(s9, 80));    // Rimnicu Vilcea
    v8->push_back(new Action(s11, 99));   // Fagaras
// Rimnicu Vilcea
    v9->push_back(new Action(s8, 80));    // Sibiu
    v9->push_back(new Action(s10, 146));  // Craiova
    v9->push_back(new Action(s12, 97));   // Pitesti
// Craiova
    v10->push_back(new Action(s9, 146)); // Rimnicu Vilcea
    v10->push_back(new Action(s12, 138));// Pitesti
    v10->push_back(new Action(s7, 120)); // Drobeta
// Fagaras
    v11->push_back(new Action(s13, 211));// Bucharest
    v11->push_back(new Action(s8, 99));  // Sibiu
// Pitesti
    v12->push_back(new Action(s9, 97));  // Rimnicu Vilcea
    v12->push_back(new Action(s13, 101));// Bucharest
    v12->push_back(new Action(s10, 138));// Craiova
// Bucharest
    v13->push_back(new Action(s11, 211));// Fagaras
    v13->push_back(new Action(s12, 101));// Pitesti
    v13->push_back(new Action(s14, 90));// Giurgiu
    v13->push_back(new Action(s15, 85));// Urziceni
// Giurgiu
    v14->push_back(new Action(s13, 90)); // Bucharest
// Urziceni
    v15->push_back(new Action(s13, 85));// Bucharest
    v15->push_back(new Action(s16, 98));// Hirsova
    v15->push_back(new Action(s18, 142));// Vaslui
// Hirsova
    v16->push_back(new Action(s15, 98));// Urziceni
    v16->push_back(new Action(s17, 86));// Eforie
// Eforie
    v17->push_back(new Action(s16, 86));// Hirsova
// Vaslui
    v18->push_back(new Action(s15, 142));// Urziceni
    v18->push_back(new Action(s19, 92));// Iasi
// Iasi
    v19->push_back(new Action(s18, 92));// Vaslui
    v19->push_back(new Action(s20, 87));// Neamt
// Neamt
    v20->push_back(new Action(s19, 87));// Iasi


    s1->setNeighbors(v1);
    s2->setNeighbors(v2);
    s3->setNeighbors(v3);
    s4->setNeighbors(v4);
    s5->setNeighbors(v5);
    s6->setNeighbors(v6);
    s7->setNeighbors(v7);
    s8->setNeighbors(v8);
    s9->setNeighbors(v9);
    s10->setNeighbors(v10);
    s11->setNeighbors(v11);
    s12->setNeighbors(v12);
    s13->setNeighbors(v13);
    s14->setNeighbors(v14);
    s15->setNeighbors(v15);
    s16->setNeighbors(v16);
    s17->setNeighbors(v17);
    s18->setNeighbors(v18);
    s19->setNeighbors(v19);
    s20->setNeighbors(v20);

    s1->setHeuristic(366);
    s2->setHeuristic(380);
    s3->setHeuristic(374);
    s4->setHeuristic(329);
    s5->setHeuristic(244);
    s6->setHeuristic(241);
    s7->setHeuristic(242);
    s8->setHeuristic(253);
    s9->setHeuristic(193);
    s10->setHeuristic(160);
    s11->setHeuristic(176);
    s12->setHeuristic(100);
    s13->setHeuristic(0);
    s14->setHeuristic(77);
    s15->setHeuristic(80);
    s16->setHeuristic(151);
    s17->setHeuristic(161);
    s18->setHeuristic(199);
    s19->setHeuristic(226);
    s20->setHeuristic(234);

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
    allStates->push_back(s14);
    allStates->push_back(s15);
    allStates->push_back(s16);
    allStates->push_back(s17);
    allStates->push_back(s18);
    allStates->push_back(s19);
    allStates->push_back(s20);

    return allStates;
}

void destroyRomaniaMap(vector<State*>* vec){
    State* aux = nullptr;
    for(int i = 0; i < (int) vec->size(); i++)
    {
        aux = vec->at(i);
        
        for(int j = 0; j < (int) aux->getNeighbors()->size(); j++)
        {
            delete aux->getNeighbors()->at(j);
        }
        delete aux->getNeighbors();
        delete aux;
    }
    delete vec;
}
