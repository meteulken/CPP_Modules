#include "Cure.hpp"

Cure::Cure()
{
    _type = "cure";
}

Cure::~Cure()
{

}

Cure* Cure::clone() const
{
    Cure *cure2 = new Cure();
    return cure2;
}

void Cure::use(ICharacter&)
{
    std::cout << "* heals " << _type << "'s wounds *" << std::endl;
}