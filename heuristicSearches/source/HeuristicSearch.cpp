#include "HeuristicSearch.h"

Node* HeuristicSearch(State* initial){

    Node * init = new Node(initial, nullptr, nullptr, 0);
    Node * current = init;
    current->setCost(0);

    if(current->getState()->getHeuristic() == 0){
        cout << current->getState()->getName() << " is the destination.\n" << endl;
        return current;
    }

    priority_queue<Node*, vector<Node*>, comp >* edge = new priority_queue<Node*, vector<Node*>, comp >;
    vector<Node*>* explored = new vector<Node*>;
    edge->push(current);

    int it = 0;
    cout << "\n";
    while((int) edge->size() != 0){
        
        cout << "####\nedge size: " << edge->size() << endl;
        cout << "explored: ";
        for(int i = 0; i < (int) explored->size(); i++)
            cout << explored->at(i)->getState()->getName() << " - ";
        cout << "\n####" << endl;

        current = edge->top();
        edge->pop();

        it++;
        cout << "\nIteration: " << it << endl;

        cout << "  Current : " << current->getState()->getName() <<
            " have " << (int) current->getState()->getNeighbors()->size() <<
            " sons." << endl;

        for(int i = 0; i < (int) current->getState()->getNeighbors()->size(); i++){
            
            State* son = current->getState()->getNeighbors()->at(i)->getNext();
            cout << "\t son " << i+1 << ": " << son->getName() << endl;
            
            Node* newNode = new Node(son, current->getState()->getNeighbors()->at(i),
             current, (current->getCost() + current->getState()->getNeighbors()->at(i)->getDistance()));

            if(searchNodeInExp(newNode, explored) == false ){
                cout << "\t    " << son->getName() << " it's not in the exploreds" << endl;
                if(searchNodeInEdge(newNode, edge) == false){
                    cout << "\t    neither at the edge" << endl;            
                    edge->push(newNode);
                }
                else {
                    cout << "\t    it's at the edge" << endl;
                    delete newNode;
                    }
            }
            else {
                cout << "\t    " << son->getName() << " it's in the exploreds" << endl;
                delete newNode;
                }
        }
        explored->push_back(current);

        cout << current->getState()->getName() << " goes to exploreds.\n" << endl;
        
        if(current->getState()->getHeuristic() == 0){
            cout << current->getState()->getName() << " is the destination." << endl;
            return current;
        }
    }
    return nullptr;
}

bool searchNodeInExp(Node * n, vector<Node*>* vec){
    for(int i = 0; i < (int) vec->size(); i++){
        if(n->getState() == vec->at(i)->getState())
            return true;
    }
    return false;
}

bool searchNodeInEdge(Node * n, priority_queue<Node*, vector<Node*>, comp>* que){
    bool answer = false;
    Node* aux;
    for(int i = 0; i < (int) que->size(); i++){
        aux = que->top();
        if(n->getState() == aux->getState())
            answer = true;
        que->pop();
        que->push(aux);
    }
    return answer;
}