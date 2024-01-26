#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie *newzombie;

	*newzombie = name;
	return (newzombie);
}