#include "Zombie.hpp"

int main(void){
	Zombie *horde;

	horde = zombieHorde(5, "Helmut");
	delete [] horde;
	return (1);
}