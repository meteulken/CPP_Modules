#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "Dog is created!" << std::endl;
    this->type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog is destroyed!" << std::endl;
    delete brain;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
    brain = new Brain(*other.brain);
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