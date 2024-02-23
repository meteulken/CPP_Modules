/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:26:11 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:26:12 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& brain)
{
    *this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &brain ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}