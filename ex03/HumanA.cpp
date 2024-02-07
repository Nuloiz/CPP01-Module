#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon w) : weapon(w){
	set_name(n);
	set_weapon(w);
}

HumanA::~HumanA() {

}

void HumanA::attack() {
	std::cout << get_name() << " attacks with their " << get_weapon().get_type() << "\n";
}

void HumanA::set_weapon(Weapon w) {
	weapon = w;
}
void HumanA::set_name(std::string n) {
	name = n;
}

Weapon HumanA::get_weapon() const{
	return (weapon);
}

std::string HumanA::get_name() const {
	return (name);
}
