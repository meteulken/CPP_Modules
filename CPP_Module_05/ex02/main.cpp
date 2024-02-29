/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:07:21 by mulken            #+#    #+#             */
/*   Updated: 2024/02/28 19:01:56 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"


/* ******************************************************************** */
/*  NOT:        					          	   						*/
/*  Bürokrat sınıfı, bir kişinin adını ve bir puanını içerir.  			*/
/*  Form sınıfı ise bir formun adını, imzalı olup olmadığını,			*/
/*  imzalamak için gerekli notu ve uygulamak için gereken notu içerir.	*/
/* ******************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john", 39);
		ShrubberyCreationForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john", 19);
		RobotomyRequestForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john",3);
		PresidentialPardonForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
}