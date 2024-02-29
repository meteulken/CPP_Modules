/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:07:21 by mulken            #+#    #+#             */
/*   Updated: 2024/02/28 19:34:04 by mulken           ###   ########.fr       */
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
#include "Intern.hpp"


int main()
{
	{
		std::string formName = "robotomy request"; 
		std::string formTarget = "Gorms";
		
		Intern intern;
		Bureaucrat bureaucrat("John", 1);
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << *f;
		bureaucrat.signAForm(*f);
		std::cout << (*f).getSigned() << std::endl;
		bureaucrat.executeForm(*f);
		delete f;
	}
}