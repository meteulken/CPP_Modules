/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:06:59 by mulken            #+#    #+#             */
/*   Updated: 2024/02/28 12:54:49 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* **********************************************************************/
/*  NOT:        					          	   						*/
/*  Derece ne kadar düşükse, o kadar yüksek bir konuma sahiptir.		*/
/* **********************************************************************/

int main()
{
	Bureaucrat b("Bob", 10);
	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;
	Bureaucrat be("Jack", -8);
	std::cout << be << std::endl;
	return 0;
}