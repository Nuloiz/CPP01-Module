#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
public:

	Zombie();

	void	announce(void);
	void 	set_name(std::string string);

	~Zombie();

private:
	std::string name;

};

Zombie	*zombieHorde(int N, std::string name);

#endif