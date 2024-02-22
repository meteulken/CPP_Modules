/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:28:50 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:28:51 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat is created!" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat is destroyed!" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
    std::cout << "WrongCat is created!" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

std::string WrongCat::getType() const
{
    return this->_type;
}
