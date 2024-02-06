/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:34 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:56:35 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie a("Harold");
	Zombie b("Larry");
	Zombie* c;
	c = newZombie("Agrid");

	randomChump("Rory");

	a.announce();
	b.announce();
	c->announce();

	delete c;
}
