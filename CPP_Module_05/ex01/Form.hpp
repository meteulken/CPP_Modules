#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool _signed;
	    const int _signGrade;
	    const int _executeGrade;
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
	class FormAlreadySigned: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

    public:
        Form();
        ~Form();
        Form(const Form &other);
        Form &operator=(const Form &other);
        Form(std::string name, bool _signed, int signGrade, int executeGrade);
        void beSigned(const Bureaucrat &other);
        void signForm();

};

#endif