#include <iostream>
#include <string>
#include "chefs.h"

int main() {
	Chef c("Gordon Ramsay");
	c.makeSoup();
	c.makeSalad();
	ItalianChef m("Mario", 10, 10);
	m.makePasta();
	return 0;
}
