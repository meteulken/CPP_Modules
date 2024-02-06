/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:58:04 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:58:05 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
    << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout
    << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout
    << "I think I deserve to have some extra bacon for free." << std::endl <<"I’ve been coming for years whereas you started working here since last month."
    << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	
	std::string typeLevel[MAX_LEVEL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*levelFunction[MAX_LEVEL])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i;

	for (i = 0; i < MAX_LEVEL; i++)
	{
		if (level == typeLevel[i])
			break;
	}
	if(i == MAX_LEVEL)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}

	for (int a = 0; i < MAX_LEVEL; i++)
	{
		switch (i)
		{
			case 0:
				(this->*levelFunction[i])();
				break;
			case 1:
				(this->*levelFunction[i])();
				break;
			case 2:
				(this->*levelFunction[i])();
				break;
			case 3:
				(this->*levelFunction[i])();
				break;
			default:
				std::cout << "Invalid level" << std::endl;
		}
	}	
}
