/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:26:37 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:26:38 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << this->type << " constructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongCat)
{
    if(this == &wrongCat)
        return *this;
    this->type = wrongCat.getType();
    return *this;
}
