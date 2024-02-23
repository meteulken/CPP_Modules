/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:24:42 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:24:43 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "Animal";
    std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

std::string Animal::getType(void) const
{
    return this->type;
}

Animal& Animal::operator=(const Animal& animal)
{
    if(this == &animal)
        return *this;
    this->type = animal.getType();
    return *this;
}

void	Animal::makeSound(void) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}