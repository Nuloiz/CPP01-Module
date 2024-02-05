#include "Zombie.hpp"

int main(void){
	Zombie stack("stack");
	Zombie *n = newZombie("Helmut");
	randomChump("Herkules");
	delete n;
	return (1);
}