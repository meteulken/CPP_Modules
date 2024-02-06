/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:55 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:56:56 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    
}

Zombie::Zombie(std::string name)
{
    std::cout << "create Zombie!!!!! -> " << name << std::endl;
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " : is dead." << std::endl;
}

void Zombie::announce(void) 
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
