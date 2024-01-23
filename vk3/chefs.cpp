#include <iostream>
#include <string.h>

#include "chefs.h"

using namespace std;

Chef::Chef(string chefName) {
	name=chefName;
	cout<<"Chef "<<name<<" konstruktori\n";
}

void Chef::makeSalad() {
	cout<<"Chef "<<name<<" makes salad\n";
}

void Chef::makeSoup() {
	cout<<"Chef "<<name<<" makes soup\n";
}

ItalianChef::ItalianChef(string chefName, int v, int j) : Chef(chefName) {
	name=chefName;
	vesi=v;
	jauhot=j;
	cout<<"Chef "<<name<<" konstruktori\n";
}

string ItalianChef::getName() {
	return name;
}

void ItalianChef::makePasta() {
	cout<<"Chef "<<name<<" makes pasta with secret recipe\n";
	cout<<"Chef "<<name<<" uses "<<vesi<<" water\n";
	cout<<"Chef "<<name<<" uses "<<jauhot<<" flour\n";
}
