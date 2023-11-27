#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie random_zombie;

	random_zombie.setName(name);
	random_zombie.announce();
}