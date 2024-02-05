#include "Zombie.hpp"

Zombie::Zombie(){
	zombieHorde(1, "Helmut");
}

Zombie::~Zombie(){
	std::cout << name << "Destroyed\n";
}

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string string){
	name = string;
}
