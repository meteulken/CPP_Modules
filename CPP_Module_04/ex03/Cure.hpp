#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

class Cure : AMateria
{
    public:
        Cure();
        ~Cure();
        Cure *clone() const;
        void use(ICharacter&);
};

#endif