#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum);

int main() {
	int arvaukset;
	arvaukset=game(40);
	std::cout<<"Peliin kuluneet arvaukset: "<<arvaukset<<std::endl;
	return 0;
}

int game(int maxnum) {
	int input, num, arvaukset;
	std::srand(std::time(0));
	num=std::rand()%maxnum+1;
	input=-1;
	arvaukset=0;
	while (input!=num) {
		std::cout<<"Arvaa luku: ";
		std::cin>>input;
		if (input>num) {
			std::cout<<"Luku on suurempi\n";
		} else if (input<num) {
			std::cout<<"Luku on pienempi\n";
		}
		arvaukset++;
	}
	std::cout<<"Oikea vastaus\n";
	return arvaukset;
}
