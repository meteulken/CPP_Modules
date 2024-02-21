#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public Animal
{
private:
    Brain* brain;

public:
    Dog();
    ~Dog();
    void makeSound() const;
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
};

#endif