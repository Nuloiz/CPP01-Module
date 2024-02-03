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

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif