#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "kerrokset.h"

class Kerrostalo {
	public:
		Kerrostalo();
		~Kerrostalo();
		double laskeKulutus(double);
	private:
		Katutaso *eka;
		Kerros *toka, *kolmas;
};

#endif
