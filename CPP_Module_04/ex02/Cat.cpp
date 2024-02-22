/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:20 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:21 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat is created!" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed!" << std::endl;
    delete brain;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
    brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
        this->setType(other.getType());
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow!" << std::endl;
}
