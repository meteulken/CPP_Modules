/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:15 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:16 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = "idea";
    }
    std::cout << "Brain constructor is created!" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destructor is created!" << std::endl;
}
Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Brain copy constructor!" << std::endl;
}
Brain &Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copy operator!" << std::endl;
    return (*this);
}

std::string& Brain::getIdea(int index) 
{
  return this->ideas[index];
}