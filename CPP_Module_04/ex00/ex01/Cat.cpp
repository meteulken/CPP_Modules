#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat is created!" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed!" << std::endl;
    delete brain;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain(*other.brain);
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
