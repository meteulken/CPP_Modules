#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap &operator=(const ClapTrap& copy)
{
    
}

