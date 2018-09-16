/*
	Team:
	Beatriz Precebes
	Carlos Alberto
	Anny Caroline
*/

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include "defs.h"
#include "Environment.h"
#include "Perception.h"
#include "Action.h"
#include "Agent.h"
#include "TableDrivenAgent.h"
#include "SimpleReflexAgent.h"

using namespace std;

int main(){
	/*
		Seu  programa  deve  receber  uma  configuracao  inicial  do  ambiente  e  uma
		quantidade n de passos e deve mostrar na tela em cada um dos n passos:
			•A acao executada pelo agente.
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
			cout << "Sorry, Table Driven Agent was not implemented." << endl; 
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

