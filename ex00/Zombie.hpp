#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	public:
		void	announce(void);
		void 	set_name(std::string name);
	private:
		std::string name;

};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif