/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:07:10 by mulken            #+#    #+#             */
/*   Updated: 2024/02/28 13:23:38 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("AForm"), _isSigned(false), gradeToSign(1), gradeToExecute(10)
{
}

AForm::AForm(std::string name, int signGrade, int executeGrade) : name(name), _isSigned(false), gradeToSign(signGrade), gradeToExecute(executeGrade)
{
    try
    {
        if(this->gradeToSign > 150 || this->gradeToExecute > 150)
            throw AForm::GradeTooLowException();
        if(this->gradeToSign < 1 || this->gradeToExecute < 1)
            throw AForm::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

AForm::~AForm()
{
    
}

AForm::AForm(const AForm &other) : name(other.name), _isSigned(other._isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    *this = other;
}

AForm &AForm::operator=(const AForm &other)
{
    if(this != &other)
    {
        const_cast<std::string&>(this->name) = other.name;
        const_cast<int&>(this->gradeToSign) = other.gradeToSign;
        const_cast<int&>(this->gradeToExecute) = other.gradeToExecute;
        this->_isSigned = other._isSigned;
    }
    return *this;
}

void AForm::beSigned(Bureaucrat const &other)
{
    if(other.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    else
        this->_isSigned = true;
}


std::string AForm::getName() const
{
	return this->name;
}

bool AForm::getSigned() const
{
    return this->_isSigned;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "AForm name: " << form.getName() << std::endl;
    out << "AForm sign grade: " << form.getGradeToSign() << std::endl;
    out << "AForm execute grade: " << form.getGradeToExecute() << std::endl;
    out << "AForm signed: " << form.getSigned() << std::endl;
    return out;
}