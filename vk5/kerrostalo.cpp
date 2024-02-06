#include <iostream>

#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
	std::cout<<"Määritellään kerrostalo\n";
	eka=new Katutaso();
	toka=new Kerros();
	kolmas=new Kerros();
	eka->maaritaAsunnot();
	toka->maaritaAsunnot();
	kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo() {
	delete eka;
	delete toka;
	delete kolmas;
}

double Kerrostalo::laskeKulutus(double hinta) {
	double result=0.0;
	result+=eka->laskeKulutus(hinta);
	result+=toka->laskeKulutus(hinta);
	result+=kolmas->laskeKulutus(hinta);
	return result;
}
