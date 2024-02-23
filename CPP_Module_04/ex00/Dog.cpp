/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:24:59 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:25:00 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << this->type << " constructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog &dog)
{
    if(this == &dog)
        return *this;
    this->type = dog.getType();
    return *this;
}
