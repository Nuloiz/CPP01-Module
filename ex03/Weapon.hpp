#pragma once

#include <iostream>
#include <string>

class Weapon{
public:

	Weapon(std::string name);

	std::string const & get_type();
	void 		setType(std::string string);

	~Weapon();

private:
	std::string type;
};
