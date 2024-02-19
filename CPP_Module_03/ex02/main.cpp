/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:41:35 by mulken            #+#    #+#             */
/*   Updated: 2024/02/19 15:51:11 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() 
{
    FragTrap fragtrap1("Fraggy1");
    fragtrap1.attack("Target");
    fragtrap1.highFivesGuys();

    std::cout << std::endl;

    return 0;
}