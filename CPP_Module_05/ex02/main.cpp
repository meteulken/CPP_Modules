/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:07:21 by mulken            #+#    #+#             */
/*   Updated: 2024/02/28 10:07:27 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureaucrat_1("Person1", 3);
	Bureaucrat bureaucrat_2("Person2", 45);
	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;
	/*-----------------------------------*/
	Form form_1("Form_1", 5, 10);
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	/*-----------------------------------*/
	try {
		Form form_2("Form_1", 5499, 10);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	try {
		bureaucrat_1.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	std::cout << form_1 << std::endl;
	/*-----------------------------------*/
	try {
		bureaucrat_2.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	std::cout << form_1 << std::endl;
	return 0;
}