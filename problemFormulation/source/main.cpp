#include <iostream>
#include <string>
#include <vector>
#include "Action.h"
#include "Model.h"
#include "State.h"
#include "RomaniaMap.h"
#include "Node.h"

using namespace std;

int main(){

    vector<State*>* all = setupRomaniaMap();

    Model model(all);

    cout << "Model of Romania Map!" << endl;
    
    int aux;
    
    do{
        cout << "Type (1) to get the neighbors of a city, (2) to " 
        << "get all the model or (0) to exit" << endl;
        cin >> aux;
        if(aux == 1){
            cout << "Type the city name:" << endl;
            string name;
            cin >> name;
            State * sta = model.searchState(name);
            if(sta != nullptr){
                sta->printState();
                cout << "--------" << endl;
            }
            else cout << "Invalid city name!\n--------" << endl;
        } else
        if(aux == 2){
            cout << "all Model:" << endl;
            model.printModel();
            cout << "\t++++++++++++++++++++++++" << endl;
        }else
        if(aux == 0)
            cout << "Bye bye!" << endl;
        else cout << "Invalid entry!\n--------" << endl;
    }while(aux != 0);

    destroyRomaniaMap(all);
    return 0;
}
