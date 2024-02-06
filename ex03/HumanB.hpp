#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
public:

	HumanB(std::string name);

	std::string get_name() const;
	Weapon		get_weapon() const;

	void 		set_name(std::string n);
	void		setWeapon(Weapon w);

	void 		attack();

	~HumanB();

private:
	std::string name;
	Weapon	weapon;
};