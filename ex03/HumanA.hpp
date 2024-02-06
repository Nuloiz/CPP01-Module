#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
public:

	HumanA(std::string n, Weapon w);

	std::string get_name() const;
	Weapon		get_weapon() const;

	void 		set_name(std::string n);
		void		set_weapon(Weapon w);

	void 		attack();

	~HumanA();

private:
	std::string name;
	Weapon	weapon;
};