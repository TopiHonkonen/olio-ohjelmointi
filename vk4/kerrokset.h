#ifndef KERROKSET_H
#define KERROKSET_H

#include "asunto.h"

class Kerros {
	public:
		Kerros();
		Asunto as1, as2, as3, as4;
		virtual void maaritaAsunnot();
		double laskeKulutus(double);
};

class Katutaso:public Kerros {
	public:
		Katutaso();
		Asunto as1, as2;
		void maaritaAsunnot();
		double laskeKulutus(double);

};

#endif
