/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:24:53 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:24:54 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << this->type << " constructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
    if(this == &cat)
        return *this;
    this->type = cat.getType();
    return *this;
}
