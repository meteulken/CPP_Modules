#include "Zombie.hpp"

int main()
{
    std::cout << "\n\033[31m" << "Zombies & Brainzz pt. 2" << "\033[0m" << std::endl;
	
	Zombie *zomb = zombieHorde(3, "Jack");

	delete[] zomb;
	return (0);
}