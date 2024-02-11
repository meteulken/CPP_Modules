#include "Fixed.hpp"

Fixed::Fixed()
{
    this->raw_bits = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignation operator called" << std::endl;
    if (this == &other) { return *this; }
    this->raw_bits = other.raw_bits;
    return *this;
}

void Fixed::setRawBits( int const raw )
{
    this->raw_bits = raw;
}

int Fixed::getRawBits( void ) const
{
    return raw_bits;
}

Fixed::Fixed(int const a)
{
    std::cout << "Int constructor called" << std::endl;
    raw_bits = (a << set_raw_bits);
}

Fixed::Fixed(float const a)
{
    std::cout << "Float constructor called" << std::endl;
    raw_bits = (a * (1 << set_raw_bits));
}

float Fixed::toFloat() const
{
    return (float)raw_bits / (1 << set_raw_bits);

}
int Fixed::toInt() const 
{
    return raw_bits >> set_raw_bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f) 
{
    out << f.toFloat();
    return out;
}