#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat is created!" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat is destroyed!" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
    std::cout << "WrongCat is created!" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

std::string WrongCat::getType() const
{
    return this->_type;
}
