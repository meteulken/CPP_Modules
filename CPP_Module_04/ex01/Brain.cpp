/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:15:07 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:15:09 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
	std::string idea[10] = {"IDEA01", "IDEA02","IDEA03","IDEA04","IDEA05","IDEA06",
							"IDEA07","IDEA08","IDEA09","IDEA10"};
	for(int i = 0; i < 5; i++)
		this->ideas[i] = idea[rand() % 10];
	for(int i = 0; i < 5; i++)
		std::cout << ideas[i] << std::endl;
}

Brain ::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << "Brain copy Constructor called" <<std::endl;
	
}
Brain &Brain ::operator=(const Brain& obj)
{
	if(this != &obj)
	{
		for(int i = 0; i < 5; i++)
			this->ideas[i] = obj.ideas[i];
			
	}
	std::cout << "Brain copy assignment operator called" <<std::endl;
	return *this;
	
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" <<std::endl;
}

void	Brain::getIdeas() const
{
	for(int i = 0; i < 5; i++)
		std::cout << ideas[i] << std::endl;
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i = 0; i < 5; i++)
		this->ideas[i] = ideas[i];
}

// void	Brain::changeIdeas() {
// 	for (int i = 0; i < 5; i++)
// 		this->ideas[i] = "Another ideas";
// }

std::string	*Brain::getIdeaas() {
	return this->ideas;
}