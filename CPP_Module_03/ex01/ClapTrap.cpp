/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:40:51 by mulken            #+#    #+#             */
/*   Updated: 2024/02/16 08:40:58 by mulken           ###   ########.fr       */
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
    this->name = other.name;
    this->attackDamage = other.attackDamage;
    this->hitPoint = other.hitPoint;
    this->energyPoints = other.energyPoints;
    std::cout << "ClapTrap " << name << " is created!" << std::endl;
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
        return ;
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
    hitPoint -= attackDamage;
    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    this->hitPoint -= amount;
    if(this->hitPoint < 0)
        this->hitPoint = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoints < 0)
        return ;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->hitPoint += amount;
    this->energyPoints--;
    if(this->hitPoint < 0)
        this->hitPoint = 0;
}