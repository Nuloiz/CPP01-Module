#include "Weapon.hpp"

Weapon::Weapon(std::string name){
	setType(name);
}

Weapon::~Weapon(){
}

std::string Weapon::get_type() const{
	return (type);
}

void Weapon::setType(std::string string){
	type = string;
}
