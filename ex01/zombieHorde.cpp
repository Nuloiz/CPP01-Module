#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name){
	Zombie Horde[N];

	 while (N > 0){
		 Horde[N].set_name(name);
		 Horde[N].announce();
		 N--;
	 }
	 return (NULL);
}