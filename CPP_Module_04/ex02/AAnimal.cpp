/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:09 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:10 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "Default";
    std::cout << "Animal is created!" << std::endl;

}

AAnimal::AAnimal(std::string _type)
{
    type = _type;
    std::cout << "Animal "<< type <<" is created!" << std::endl;

}

AAnimal::~AAnimal()
{
    std::cout << "Animal is destroyed!" << std::endl;

}

AAnimal::AAnimal(const AAnimal &other)
{
    *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if(this != &other)
    {
        this->setType(other.getType());
    }
    return *this;
}

std::string AAnimal::getType() const
{
    return(type);
}

void AAnimal::setType(std::string _type)
{
    this->type = _type;
}