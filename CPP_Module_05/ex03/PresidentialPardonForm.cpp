#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5) , target("Default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("Presidential Pardon Form", 25, 5)
{
    this->target = _target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this == &other)
        return *this;
    this->target = other.target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if(this->getSigned())
        {
            if(executor.getGrade() <= this->getGradeToExecute())
                std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
            else
                throw AForm::GradeTooLowException();
        }
        else
            throw std::out_of_range("Form not signed");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

