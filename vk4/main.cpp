#include <iostream>

#include "kerrostalo.h"

int main() {
	Kerrostalo k;
	double hinta=10;
	std::cout<<"Kerrostalon yhteenlaskettu kulutus, kun hinta="<<hinta<<" on "<<k.laskeKulutus(hinta)<<std::endl;
	return 0;
}
