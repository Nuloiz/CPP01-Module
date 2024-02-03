#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie *ne = NULL;

	ne->set_name(name);
	ne->announce();
}