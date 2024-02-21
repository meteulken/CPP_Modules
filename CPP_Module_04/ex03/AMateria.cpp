#include "AMateria.hpp"

AMateria::AMateria()
{
    this->_type = "AMateria";
}

AMateria::~AMateria()
{
    
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

std::string const & AMateria::getType() const
{
    return(_type);
}