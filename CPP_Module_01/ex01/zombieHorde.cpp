/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:57:03 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:57:04 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[5];
    
    for (int i = 0 ; i < N ; i++ )
    {
        zombies[i].setName(name);
    }
    return (zombies);
}