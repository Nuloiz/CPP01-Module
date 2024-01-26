#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ...";
}

void Zombie::set_name(std::string name){
	Zombie::name = name;
}