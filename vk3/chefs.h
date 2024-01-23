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
		ItalianChef(string chefName, int v, int j);
		string getName();
		void makePasta();
	private:
		int vesi, jauhot;
};
#endif
