#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string name;

	public:
	void announce(int i);
	void setName(std::string name);
    std::string getName(void);

	Zombie(); //Constructor
	~Zombie(); //Destructor
};

Zombie	*zombieHorde(int N, std::string name);

#endif
