/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:07:15 by mulken            #+#    #+#             */
/*   Updated: 2024/02/28 10:07:16 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool _isSigned;
	    const int gradeToSign;
	    const int gradeToExecute;
    public:
        class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

    public:
        Form();
        ~Form();
        Form(const Form &other);
        Form &operator=(const Form &other);
        Form(std::string name, int gradeToSign, int gradeToExecute);
        void beSigned(Bureaucrat const &other);

		std::string	getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif