/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:28:01 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:28:02 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog is created!" << std::endl;
    this->type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog is destroyed!" << std::endl;
    delete brain;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        this->setType(other.getType());
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
}