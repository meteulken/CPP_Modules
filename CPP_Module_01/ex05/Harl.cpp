/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:57:55 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:57:56 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

void Harl::debug(void)
{
	 std::cout
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
    << std::endl;
}

void Harl::info(void)
{
	std::cout
    << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void Harl::warning(void)
{
	std::cout
    << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
    << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	
	std::string typeLevel[MAX_LEVEL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*levelFunction[MAX_LEVEL])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < MAX_LEVEL; i++)
		if (level == typeLevel[i])
			(this->*levelFunction[i])();
}
