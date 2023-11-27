#include "Zombie.hpp"

Zombie::Zombie()
{

}
Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " was destroyed." << std::endl;
}

void Zombie::setName(std::string _name)
{
    this->name = _name;
}

std::string Zombie::getName(void)
{
    return this->name;
}

void Zombie::announce( void )
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
