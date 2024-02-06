#include <iostream>

#include "kerrokset.h"

Kerros::Kerros() {
	as1=new Asunto();
	as2=new Asunto();
	as3=new Asunto();
	as4=new Asunto();
	std::cout<<"Kerros luotu\n";
}

Kerros::~Kerros() {
	delete as1;
	delete as2;
	delete as3;
	delete as4;
}

void Kerros::maaritaAsunnot() {
	std::cout<<"Määritellään 4kpl kerroksen asuntoja\n";
	as1->maarita(2, 100);
	as2->maarita(2, 100);
	as3->maarita(2, 100);
	as4->maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta) {
	double result=0.0;
	result+=as1->laskeKulutus(hinta);
	result+=as2->laskeKulutus(hinta);
	result+=as3->laskeKulutus(hinta);
	result+=as4->laskeKulutus(hinta);
	return result;
}

Katutaso::Katutaso() : Kerros::Kerros() {
	as1=new Asunto();
	as2=new Asunto();
	std::cout<<"Katutaso luotu\n";
}

Katutaso::~Katutaso() {
	delete as1;
	delete as2;
}

void Katutaso::maaritaAsunnot() {
	std::cout<<"Määritellään 2kpl katutason asuntoja\n";
	as1->maarita(2, 100);
	as2->maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta) {
	double result=0.0;
	result+=as1->laskeKulutus(hinta);
	result+=as2->laskeKulutus(hinta);
	return result;
}
