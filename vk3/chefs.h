#ifndef CHEFS_H
#define CHEFS_H

#include <string.h>

using namespace std;

class Chef {
	protected:
		string name;
	public:
		Chef(string chefName);
		void makeSalad();
		void makeSoup();
};

class ItalianChef:public Chef {
	public:
		ItalianChef(string chefName);
		string getName();
		void makePasta();
};
#endif
