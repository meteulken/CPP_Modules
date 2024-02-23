/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:15:18 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:15:19 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default Constructor called" <<std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj) 
{
	*this=obj;
	std::cout << "Cat copy Constructor called" <<std::endl;
}

Cat &Cat::operator=(const Cat& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain();
		this->brain->setIdeas(obj.brain->getIdeaas());		
	}
	std::cout << "Cat copy assignment operator called" <<std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" <<std::endl;
	delete this->brain;
}
void Cat::makeSound() const
{
	std::cout << "Cat makes sound meows" <<std::endl;
}

std::string Cat::getType()const
{
	return this->type;
}

Brain	*Cat::getBrain() const
{
	return (this->brain);	
}