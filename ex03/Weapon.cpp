#include "Weapon.hpp"

Weapon::Weapon(std::string name){
	setType(name);
}

Weapon::~Weapon(){
}

std::string	const & Weapon::get_type(){
	return (type);
}

void Weapon::setType(std::string string){
	type = string;
}
