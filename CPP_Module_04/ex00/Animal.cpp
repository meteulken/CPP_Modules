/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:01:49 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:01:52 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal default Constructor called" <<std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this=obj;
	std::cout << "Animal copy Constructor called" <<std::endl;
}

Animal &Animal::operator=(const Animal& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		
	}
	std::cout << "Animal copy assignment operator called" <<std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" <<std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes sound wooooo" <<std::endl;
}

std::string Animal::getType()const
{
	return this->type;
}