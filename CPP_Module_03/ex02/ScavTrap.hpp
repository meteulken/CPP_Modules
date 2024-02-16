#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        std::string name;
        int hitPoints; // Can Puanı
        int energyPoints; // Enerji Puanı
        int attackDamage; // Saldırı Hasarı

    public:
        ScavTrap(const std::string name);
        ScavTrap operator=(const ScavTrap &other);
        ScavTrap(const ScavTrap &other);
        void attack(const std::string& target);
        ScavTrap();
        ~ScavTrap();
        void guardGate();
        std::string getName();
};

#endif