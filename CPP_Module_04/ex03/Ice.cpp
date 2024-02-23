/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:16:57 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:16:58 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() 
{
    type = "ice"; 
}

Ice::Ice(const Ice& other): AMateria(other)
{
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Ice::~Ice() 
{
}

Ice* Ice::clone() const 
{ 
    return new Ice(*this); 
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
