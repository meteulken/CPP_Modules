/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 05:18:12 by mulken            #+#    #+#             */
/*   Updated: 2024/02/19 15:12:55 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(name)
{
    std::cout << "ScavTrap  is created!" << std::endl;
    this->name = "Default";
    this->hitPoint = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name)
{
    this->name = name;
    this->hitPoint = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << name << " is created!" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if(energyPoints < 0)
    {
		std::cout << "No energy points left" <<std::endl;
        return ;     
    }
    if(hitPoint < 0)
    {
		std::cout << "No hit points left" <<std::endl;
        return ;     
    } 
    this->energyPoints--;
    std::cout << "Scavtrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	std::cout << "ScavTrap " << name << " has now " << hitPoint << " points of life and " << energyPoints << " points of energy" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " is destroyed!" << std::endl;
}

ScavTrap ScavTrap::operator=(const ScavTrap &other)
{
    if(this != &other)
    {
        this->attackDamage = other.attackDamage;
        this->energyPoints = other.energyPoints;
        this->hitPoint = other.hitPoint;
        this->name = other.name;
    }
	std::cout << "ScavTrap Copy assignment operator called"<< std::endl;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy Constructor  called"<< std::endl;
    *this = other;
}

void ScavTrap::guardGate()
{
    std::cout << "**Attention!** ScavTrap " << getName() << " is now in Gatekeeper mode!" << std::endl;

}

std::string ScavTrap::getName()
{
    return(name);
}