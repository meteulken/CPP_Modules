/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 05:18:15 by mulken            #+#    #+#             */
/*   Updated: 2024/02/18 18:10:42 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Default";
    hitPoint = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap is created!" << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
    name = _name;
    hitPoint = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap is created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap is destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->attackDamage = other.attackDamage;
    this->energyPoints = other.energyPoints;

}

FragTrap FragTrap::operator=(const FragTrap &other)
{
    if(this != &other)
    {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->attackDamage = other.attackDamage;
        this->energyPoints = other.energyPoints;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " requests a high five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(energyPoints < 0)
        return ;
    std::cout << "FragTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
    hitPoint -= attackDamage;
    energyPoints--;
    std::cout << "FragTrap " << name << " has now " << hitPoint << " points of life and " << energyPoints << " points of energy" << std::endl;

}