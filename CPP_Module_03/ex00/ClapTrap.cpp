#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    if(1 > _hitPoints - amount)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " Healt points!" << std::endl;
    _hitPoints += amount;
    if(amount < 1)
        _hitPoints = 0;
    else
        _hitPoints += amount;
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

std::string ClapTrap::getName() const
{
    return (_name);
}

int ClapTrap::getHitPoints() const
{
    return (_hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (_energyPoints);
}

int ClapTrap::getAttackDamage() const
{
    return (_attackDamage);
}