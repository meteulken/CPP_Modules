#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria();
        ~AMateria();
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif