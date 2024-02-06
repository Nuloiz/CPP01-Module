#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::~Zombie(){
	std::cout << name << " Destroyed\n";
}

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string string){
	name = string;
}
