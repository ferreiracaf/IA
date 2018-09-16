#include "TableDrivenAgent.h"

TableDrivenAgent::TableDrivenAgent(Perception * _p, Action * _a, map <list<Perception*>,
    Action*> _table): Agent(_p, _a)
{
    this->table = _table;
}
TableDrivenAgent::~TableDrivenAgent(){}
Action* chooseAction(){
    Action* aux = nullptr;
    return aux;
}
void TableDrivenAgent::takeAction(){

}