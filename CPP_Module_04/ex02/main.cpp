#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    AAnimal *generic;
    Cat cat;
    Dog dog;

    generic = &cat;
    std::cout << generic->getType() << std::endl;
    generic->makeSound();
    generic = &dog;
    std::cout << generic->getType() << std::endl;
    generic->makeSound();

    return 0;
}