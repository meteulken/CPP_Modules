/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:41:35 by mulken            #+#    #+#             */
/*   Updated: 2024/02/18 18:06:37 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    FragTrap fragtrap1("Fraggy1");
    fragtrap1.attack("Target");
    fragtrap1.highFivesGuys();

    std::cout << std::endl;

    FragTrap fragtrap2("Fraggy2");
    fragtrap2.attack("Target");
    fragtrap2.highFivesGuys();

    return 0;
}