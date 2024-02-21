#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat is created!" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
        this->setType(other.getType());
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow!" << std::endl;
}
