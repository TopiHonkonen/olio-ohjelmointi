#include <iostream>

#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
	std::cout<<"Määritellään kerrostalo\n";
	eka.maaritaAsunnot();
	toka.maaritaAsunnot();
	kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta) {
	double result=0.0;
	result+=eka.laskeKulutus(hinta);
	result+=toka.laskeKulutus(hinta);
	result+=kolmas.laskeKulutus(hinta);
	return result;
}
