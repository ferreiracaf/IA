#include "Model.h"

Model::Model(vector<State*>* m){
    if(m != nullptr)
        this->model = m;
}

Model::~Model(){}

vector<State*>* Model::getModel(){
    return this->model;
}

void Model::setModel(vector<State*>* m){
    if(m != nullptr)
        this->model = m;
}

void Model::printModel(){
    State* current = nullptr;
    cout << "Model:" << endl;
    for(int i = 0; i < (int) this->model->size(); i++)
    {
        current = this->model->at(i);
        cout << "\t" << current->getName() << endl;
        
        for(int j = 0; j < (int) current->getNeighbors()->size(); j++)
        {
            cout << "\t\t-> " << current->getNeighbors()->at(j)->getName()
            << " - distance: " << current->getNeighbors()->at(j)->getDistance() << endl;
        }
        
    }
}

State* Model::searchState(string name){
    State* ans = nullptr;
    
    for(int i = 0; i < (int) this->model->size(); i++)
    {
        if(this->model->at(i)->getName() == name)
            ans = this->model->at(i);
    }
    return ans;
}
