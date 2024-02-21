#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;

    public:
        virtual void makeSound() const;
        Animal();
        Animal(std::string);
        Animal(const Animal &other);
        Animal operator=(const Animal &other);
        virtual ~Animal();
        std::string getType() const;
        void setType(std::string _type);
        

};

#endif