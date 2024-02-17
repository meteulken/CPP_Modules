#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal is created!" << std::endl;

}

Animal::~Animal()
{
    std::cout << "Animal is destroyed!" << std::endl;

}

Animal::Animal(const Animal &other)
{
    *this = other;
}

Animal Animal::operator=(const Animal &other)
{
    if(this != &other)
    {
        this->setType(other.getType());
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Vrrrrrr Hrrrrrr!" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}

void Animal::setType(std::string _type)
{
    this->type = _type;
}