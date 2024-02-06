/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:58:00 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:58:01 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
	Harl robot;

	robot.complain("DEBUG");
	robot.complain("INFO");
	robot.complain("ERROR");
	robot.complain("DEBUGA");
	robot.complain("WARNING");
}
