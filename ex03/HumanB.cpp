#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	set_name(name);
}

HumanB::~HumanB() {

}

void HumanB::attack() {
	std::cout << get_name() << "attacks with their" << weapon.get_type();
}

void HumanB::setWeapon(Weapon w) {
	weapon = w;
}
void HumanB::set_name(std::string n) {
	name = n;
}

Weapon HumanB::get_weapon() const{
	return (weapon);
}

std::string HumanB::get_name() const {
	return (name);
}
