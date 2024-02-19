/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 05:18:15 by mulken            #+#    #+#             */
/*   Updated: 2024/02/19 15:50:21 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->name = "Default";
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap is created!" << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
    this->name = _name;
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap is created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap is destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
	std::cout << "Copy constructor called" << std::endl;
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
    std::cout << "Copy assignation operator called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " requests a high five!" << std::endl;
}

std::string FragTrap::getName()
{
    return(name);
}