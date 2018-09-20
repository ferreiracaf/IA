#include <iostream>
#include <string>
#include <vector>
#include "Action.h"
#include "Model.h"
#include "State.h"
#include "RomaniaMap.h"
#include "Node.h"
#include "WidthSearch.h"
#include <stack>

using namespace std;

int main(){

    vector<State*>* all = setupRomaniaMap();

    Model model(all);

    string init, dest;
    State* in;
    State* des;

    cin >> init;
    cin >> dest;

    for(int i = 0; i < (int) all->size(); i++)
    {
        if(all->at(i)->getName() == init)
            in = all->at(i);
        if(all->at(i)->getName() == dest)
            des = all->at(i);
    }

    stack<State*> sRoute;

    if(in != nullptr && des != nullptr){
        Node* nodeR = widthSearch(in, des);

        if(nodeR != nullptr){
            cout << "----------" << endl << "Cost : " << nodeR->getCost() << endl << endl;
            cout << "Route:" << endl;
            Node* aux1 = nodeR;

            while(aux1->getState() != in){
                sRoute.push(aux1->getState());
                aux1 = aux1->getParent();
            }
            sRoute.push(aux1->getState());
            
            for(int i = (int) sRoute.size(); i > 0; i--)
            {
                cout << "\t->" << sRoute.top()->getName() << endl;
                sRoute.pop();
            }
        }
    }

    destroyRomaniaMap(all);
    return 0;
}
