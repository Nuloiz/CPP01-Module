#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie *newzombie = NULL;

	newzombie->set_name(name);
	return (newzombie);
}