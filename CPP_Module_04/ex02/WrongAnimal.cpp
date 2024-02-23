/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:02:33 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:02:35 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default Constructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) 
{
	*this=obj;
	std::cout << "WrongAnimal copy Constructor called" <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		
	}
	std::cout << "WrongAnimal copy assignment operator called" <<std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" <<std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes sound wooooo" <<std::endl;
}

std::string WrongAnimal::getType()const
{
	return this->type;
}