#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog is created!" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog is destroyed!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        this->setType(other.getType());
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
}