#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public Animal
{
private:
    Brain* brain;

public:
    Cat();
    ~Cat();
    void makeSound() const ;
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
};

#endif