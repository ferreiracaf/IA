/*
	Equipe:
	Beatriz Precebes
	Carlos Alberto
	Anny Caroline
*/

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>

using namespace std;

typedef enum {
	A,
	B
}LOCATION;

typedef enum {
	Clean,
	Dirty
}DIRTY;

class Environment
{
private:
	DIRTY isDirtyA;
	DIRTY isDirtyB;
	LOCATION agentLocation;
	
public:
	Environment(DIRTY dirA, DIRTY dirB, LOCATION loc){
		this->isDirtyA = dirA;
		this->isDirtyB = dirB;
		this->agentLocation = loc;
	};
	DIRTY getIsDirtyA(){
		return this->isDirtyA;
	}
	void setIsDirtyA(DIRTY dirty){
		this->isDirtyA = dirty;
	}
	DIRTY getIsDirtyB(){
		return this->isDirtyB;
	}
	void setIsDirtyB(DIRTY dirty){
		this->isDirtyB = dirty;
	}
	LOCATION getAgentLocation(){
		return this->agentLocation;
	}
	void setAgentLocation(LOCATION _location){
		this->agentLocation = _location;
	}
	~Environment(){}
};

class Perception
{
private:
	LOCATION location;
	DIRTY isDirty;

public:
	Perception(LOCATION loc, DIRTY dirt){
		this->location = loc;
		this->isDirty = dirt;
	}
	~Perception(){}
	LOCATION getLocation(){
		return this->location;
	}
	void setLocation(LOCATION loc){
		this->location = loc;
	}
	DIRTY getIsDirty(){
		return this->isDirty;
	}
	void setIsDirty(DIRTY dirty){
		this->isDirty = dirty;
	}
	LOCATION locateAgent(Environment* Env){
		this->location = Env->getAgentLocation();
		return this->location;
	}
	DIRTY seeEnvironment(Environment* Env){
		LOCATION now = this->locateAgent(Env);
		if(now == A)
			this->isDirty = Env->getIsDirtyA();
		else
			if(now == B)
				this->isDirty = Env->getIsDirtyB();
		return this->isDirty;
	}
	void updatePerception(Environment* Env){
		LOCATION loc = Env->getAgentLocation();
		DIRTY dir;
		if(loc == A)
			dir  = Env->getIsDirtyA();
		else
			dir = Env->getIsDirtyB();
		this->location = loc;
		this->isDirty = dir;
	}
};

class Action
{
private:
	string name;

public:
	Action(string  str){
		this->name = str; 
	};
	string getName(){
		return this->name;
	}
	void setName(string  str){
		this->name = str;
	}
	~Action(){}
};

class Agent
{
private:
	Perception * perception;
	vector <Action *> actions;
	Environment * env;

public:
	Agent(Perception * _p = nullptr, Action * _a = nullptr, Environment* _e = nullptr){
		if(_p != nullptr)
			this->perception = _p;
		if(_a != nullptr)
			this->actions.push_back(_a);
		if(_a != nullptr)
			this->env = _e;
	};
	Perception* getPerception(){
		return this->perception;
	}
	void setPerception(Perception* _p){
		this->perception = _p;
	}
	vector<Action*> getActionVector(){
		return this->actions;
	}
	Action* getAction(string s){
		int i;
		Action* founded = nullptr;
		for(i = 0; i < actions.size(); i++){
			if(actions.at(i)->getName() == s){
				founded = actions.at(i); 
				break;
			}
		}
		return founded;
	}
	void setAction(Action* _a){
		if(this->getAction(_a->getName()) == nullptr)
			this->actions.push_back(_a);
	}
	Environment* getEnvironment(){
		return this->env;
	}
	void setEnvironment(Environment* e){
		this->env = e;
	}
	~Agent(){}
};

class TableDrivenAgent : public Agent
{
private:
	list<Perception*> perceptions;
	map <list < Perception* > , Action* >::iterator table;

public:
	TableDrivenAgent(Perception * _p, Action * _a, map < list < Perception* > , Action* >::iterator _table):
		Agent(_p, _a)
	{
		this->table = _table;
	}
	~TableDrivenAgent(){}
	Action* chooseAction(){
		
	}
	void takeAction(){

	}
};

class SimpleReflexAgent : public Agent
{
private:

public:
	SimpleReflexAgent(Perception * _p = nullptr, Action * _a = nullptr, Environment* _e = nullptr):
		Agent(_p, _a, _e){}
	~SimpleReflexAgent(){}

	Action* chooseAction(){
		Action* chosen;
		Perception* perc = this->getPerception();
		Environment* envir = this->getEnvironment();
		perc->updatePerception(envir);
		DIRTY x  = perc->getIsDirty();
		if(x == Clean){
			if(perc->getLocation() == A){
				chosen = this->getAction("right");
			}
			if(perc->getLocation() == B){
				chosen = this->getAction("left");
			}
		}
		else{
			chosen = this->getAction("aspire");
		}
		return chosen;
	}
	void takeAction(){
		Action* toDo = this->chooseAction();
		string name = toDo->getName();
		Environment* envir = this->getEnvironment(); 
		LOCATION loc = envir->getAgentLocation();
		if(name == "aspire"){
			cout << "doing action: " << name << " on ";
			if(loc == A){
				cout << "A" << endl;
				envir->setIsDirtyA(Clean);
			}
			if(loc == B){
				cout << "B" << endl;
				envir->setIsDirtyB(Clean);
			}
		}
		else{
			cout << "doing action: go to ";
			if(name == "right"){
				cout << name << "." << endl;
				envir->setAgentLocation(B);
			}
			else{
				if(name == "left"){
					cout << name << "." << endl;
					envir->setAgentLocation(A);
				}
				else{
					cout << "Incapaz de executar ação!" << endl;
				}
			}
		}
		cout << "done action: " << name << "." << endl;
		cout << "----------" << endl;
	}
};

int main(){
	/*
Seu  programa  deve  receber  uma  configuracao  inicial  do  ambiente  e  uma
quantidade n de passos e deve mostrar na tela em cada um dos n passos:
•A acao executada pelo agente
•A situacao do ambiente apos executada tal acao.
	*/
	list <Perception*> Perceps1;
	list <Perception*> Perceps2;
	list <Perception*> Perceps3;

	Perception p1(A,Clean);
	Perception p2(A,Dirty);
	Perception p3(B,Clean);
	Perception p4(B,Dirty);
	Perception p5(A,Clean);
	Perception p6(A,Clean);
	Perception p7(B,Clean);
	Perception p8(B,Dirty);

	Perceps1.push_back(&p1);
	Perceps1.push_back(&p2);
	Perceps1.push_back(&p3);
	Perceps2.push_back(&p4);
	Perceps2.push_back(&p5);
	Perceps3.push_back(&p6);
	Perceps3.push_back(&p7);
	Perceps3.push_back(&p8);

	Action right("right");
	Action left("left");
	Action aspire("aspire");

	map <list <Perception*>, Action*> table;

	table[Perceps1] = &left;
	table[Perceps3] = &left;
	table[Perceps2] = &right;

	Environment env(Dirty, Dirty, A);

	Perception SRperceps(A, Clean);
	SRperceps.seeEnvironment(&env);

	SimpleReflexAgent SRAgent(&SRperceps, &right, &env);
	SRAgent.setAction(&left);
	SRAgent.setAction(&aspire);
	
	/*
		Menu:
	*/

	while(1){
		int option = 0;
		cout << "Vacuum machine: table driven (1) or simple reflexive (2) "
		<< "or to exit (0)" << endl;
		cin >> option;
		if(option == 1){
			// table driven agent
		}
		else{
			if(option == 2){
				//simple reflexive agent
				int interations;
				cout << "Insert the number of interations:" << endl;
				cin >> interations;
				for (int i = 0; i < interations; ++i)
				{
					SRAgent.takeAction();
				}
			}
			else{
				if(option == 0){
					cout << "Bye bye!" << endl;
					break;
				}
				else
					cout << "Invalid option! Please use a valid number." << endl << "-----------\n" << endl;
			}
		}
	}
	return 0;
}
