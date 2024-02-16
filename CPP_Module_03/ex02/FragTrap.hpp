#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>

class FragTrap : ClapTrap
{
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;

    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &other);
        FragTrap operator=(const FragTrap &other);
        FragTrap(std::string _name);
        void highFivesGuys(void);
        void attack(const std::string& target);
};

#endif