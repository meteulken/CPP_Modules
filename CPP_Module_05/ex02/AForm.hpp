/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:07:15 by mulken            #+#    #+#             */
/*   Updated: 2024/02/28 13:28:06 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm
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
        AForm();
        ~AForm();
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        void beSigned(Bureaucrat const &other);

		std::string	getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		virtual void execute(Bureaucrat const &executor) const = 0;

};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif