#include "Form.hpp"

Form::Form()
{
    this->_signed = false;
}

Form::Form(std::string name, bool signCheck, int signGrade, int executeGrade)
{
    this->_signed = false;
}

Form::~Form()
{
    
}

Form::Form(const Form &other)
{
    
}

Form &Form::operator=(const Form &other)
{
    
}

void Form::beSigned(const Bureaucrat &other)
{
    try
    {
        if(other.getGrade() > 150)
            Bureaucrat::GradeTooHighException();
        else if (other.getGrade() < 1)
            Bureaucrat::GradeTooLowException();
        else
            this->_signed = true;
    }
    catch(std::exception &e)
    {

    }
}

void Form::signForm()
{
    try
    {

    }
    catch(std::exception &e)
    {
        
    }
}