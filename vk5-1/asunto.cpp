#include <iostream>

#include "asunto.h"

Asunto::Asunto() {
	std::cout<<"Asunto luotu\n";
}

void Asunto::maarita(int a, int b) {
	asukasMaara=a;
	neliot=b;
	std::cout<<"Asunto määritetty asukkaita="<<asukasMaara<<" neliöitä="<<neliot<<"\n";
}

double Asunto::laskeKulutus(double hinta) {
	return asukasMaara*neliot*hinta;
}
