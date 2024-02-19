/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:41:15 by mulken            #+#    #+#             */
/*   Updated: 2024/02/19 15:37:11 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("mete");
    a.attack("boo");
    a.takeDamage(5);
    a.attack("boo");
    a.beRepaired(1);
    a.guardGate();

}