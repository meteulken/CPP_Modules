#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string name;

	public:
	void announce();
	void setName(std::string name);
    std::string getName(void);

	Zombie(); //Constructor
	~Zombie(); //Destructor
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
