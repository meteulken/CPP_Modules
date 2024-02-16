/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 05:18:18 by mulken            #+#    #+#             */
/*   Updated: 2024/02/16 08:41:40 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap(name)
{
    std::cout << "ScavTrap  is created!" << std::endl;
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
    std::cout << "Scavtrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
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
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    this->attackDamage = other.attackDamage;
    this->energyPoints = other.energyPoints;
    this->hitPoint = other.hitPoint;
    this->name = other.name;
}

void ScavTrap::guardGate()
{
    std::cout << "**Attention!** ScavTrap " << getName() << " is now in Gatekeeper mode!" << std::endl;

}

std::string ScavTrap::getName()
{
    return(name);
}