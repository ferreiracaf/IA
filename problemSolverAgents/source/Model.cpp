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