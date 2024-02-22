/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:26:33 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:26:34 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() 
{ 
    type = "cure"; 
}

Cure::Cure(const Cure& other): AMateria(other)
{
    *this = other;
}

Cure& Cure::operator=(const Cure& other)
{
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{ 
     return new Cure(*this); 
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}