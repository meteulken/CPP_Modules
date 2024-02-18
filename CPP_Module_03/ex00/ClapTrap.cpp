/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 05:18:05 by mulken            #+#    #+#             */
/*   Updated: 2024/02/18 18:32:26 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "Default";
    this->hitPoint = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if(this != &other)
    {
        this->name = other.name;
        this->attackDamage = other.attackDamage;
        this->hitPoint = other.hitPoint;
        this->energyPoints = other.energyPoints;
    }
    std::cout << "Copy assignation operator called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(std::string _name)
{
    this->name = _name;
    this->hitPoint = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
    std::cout << "ClapTrap " << name << " has now " << hitPoint << " points of life and " << energyPoints << " points of energy" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    this->hitPoint -= amount;
    if(this->hitPoint < 0)
    {
        this->hitPoint = 0;
        std::cout << "No enough hit points left" <<std::endl;
		return;
    }    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoints < 0)
    {
        std::cout << "No energy points left" <<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->hitPoint += amount;
    this->energyPoints--;
    if(this->hitPoint < 0)
        this->hitPoint = 0;
}