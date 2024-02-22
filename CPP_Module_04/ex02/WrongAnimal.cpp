/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:34 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:35 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "Animal";
    std::cout << "WrongAnimal is created!" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is destroyed!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "Copy constructor called!" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "Copy operator constructor called!" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}