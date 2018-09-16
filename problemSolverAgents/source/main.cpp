#include <iostream>
#include <string>
#include <vector>
#include "Action.h"
#include "Model.h"
#include "State.h"
#include "RomaniaMap.h"
#include "SearchSolution.h"
#include "Node.h"

using namespace std;

int main(){

    vector<State*>* all = setupRomaniaMap();
    State * aux = nullptr;

    for(int i = 0; i < (int) all->size(); i++){
        aux = all->at(i);
        if(aux != nullptr)
            cout << aux->getName() << " se liga com:" << endl;
        for(int j = 0; j < (int) aux->getNeighbors()->size(); j++){
            if(aux != nullptr)
                cout << "\t" << all->at(i)->getNeighbors()->at(j)->getName() << endl;
        }
        cout << endl;
    }

    Model model(all);













    destroyRomaniaMap(all);
    return 0;
}
