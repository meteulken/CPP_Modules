#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequestForm", 72, 45), target(_target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this == &other)
        return *this;
    AForm::operator=(other);
    this->target = other.target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    srand(time(NULL));
    try
    {
        if(this->getSigned())
        {
            if(executor.getGrade() <= this->getGradeToExecute())
            {
                std::cout << "Drilling noises" << std::endl;
                if(rand() % 2)
                    std::cout << this->target << " has been robotomized successfully" << std::endl;
                else
                std::cout << this->target << " robotomization failed" << std::endl;
            }
            else
                throw GradeTooLowException();
        }
        else
            throw std::out_of_range("Form not signed");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

