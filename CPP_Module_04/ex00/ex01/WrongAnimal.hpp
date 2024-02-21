#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
        std::string getType() const;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &other);
        void makeSound() const;

};

#endif