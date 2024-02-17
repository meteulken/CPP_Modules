#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    void makeSound() const;
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
};

#endif