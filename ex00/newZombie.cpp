#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie *ne = NULL;

	ne->set_name(name);
	return (ne);
}