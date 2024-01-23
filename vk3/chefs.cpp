#include <iostream>
#include <string.h>

#include "chefs.h"

using namespace std;

Chef::Chef(string chefName) {
	name=chefName;
	cout<<"Chef "<<name<<" konstruktori";
}

void Chef::makeSalad() {
	cout<<"Chef "<<name<<" makes salad\n";
}

void Chef::makeSoup() {
	cout<<"Chef "<<name<<" makes soup\n";
}

ItalianChef::ItalianChef(string chefName) : Chef(chefName) {
	name=chefName;
	cout<<"Chef "<<name<<" konstruktori";
}

string ItalianChef::getName() {
	return name;
}

void ItalianChef::makePasta() {
	cout<<"Chef "<<name<<" makes pasta\n";
}
