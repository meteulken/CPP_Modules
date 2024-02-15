#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string	_name;
    int			_hitPoints;
    int			_energyPoints;
    int			_attackDamage;

public:

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &copy);

    void	attack(std::string const &target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);
    void	setName(std::string name);
    std::string	getName() const;
    int	getHitPoints() const;
    int	getEnergyPoints() const;
    int	getAttackDamage() const;
};

#endif