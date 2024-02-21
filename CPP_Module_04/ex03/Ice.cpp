#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
}

Ice::~Ice()
{
    
}

Ice* Ice::clone() const
{
    Ice *ice2 = new Ice();
    return ice2;
}

void Ice::use(ICharacter&)
{
    std::cout << "* shoots an ice bolt at " << _type << "*" << std::endl;
}