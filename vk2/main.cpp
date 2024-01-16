#include <iostream>
#include <cstdlib>
#include <ctime>

class Game {
	public:
		Game(int i) {
			maxNumber=i;
			std::srand(std::time(0));
			std::cout<<"Peli aloitettu maksimiluvulla "<<maxNumber<<"\n";
		}

		~Game() {
			std::cout<<"GAME DESTRUCTOR: object cleared from memory"<<std::endl;
		}

		void play() {
			randomNumber=std::rand()%maxNumber+1;
			numOfGuesses=0;
			while (playerGuess!=randomNumber) {
				std::cout<<"Arvaa luku välillä (1-"<<maxNumber<<"): ";
				std::cin>>playerGuess;
				if (playerGuess>randomNumber) {
					std::cout<<"Luku on suurempi\n";
				} else if (playerGuess<randomNumber) {
					std::cout<<"Luku on pienempi\n";
				}
				numOfGuesses++;
			}
			printGameResult();
		}

	private:
		int maxNumber, playerGuess, randomNumber, numOfGuesses;
		
		void printGameResult() {
			std::cout<<"Oikea vastaus oli "<<randomNumber<<"\n";
			std::cout<<"Peliin kului "<<numOfGuesses<<" yritystä.\n";
		}
};

int main() {
	Game gameObject(20);
	gameObject.play();
	return 0;
}
