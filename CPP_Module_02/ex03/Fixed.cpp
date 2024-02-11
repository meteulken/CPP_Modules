/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:25:57 by mulken            #+#    #+#             */
/*   Updated: 2024/02/11 11:47:09 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->raw_bits = 0;
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
   // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    //std::cout << "Copy assignation operator called" << std::endl;
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
    //std::cout << "Int constructor called" << std::endl;
    raw_bits = (a << set_raw_bits);
}

Fixed::Fixed(float const a)
{
    //std::cout << "Float constructor called" << std::endl;
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

/********************************************************/
/*                                                      */
/*            CPP Operator Overloading                  */
/*                Arithmetic   + - / *                  */
/*                                              @mulken */
/********************************************************/

Fixed Fixed::operator+(const Fixed &obj) const
{
    Fixed result;

    result = this->toFloat() + obj.toFloat();
    
    return result;
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    Fixed result;

    result = this->toFloat() - obj.toFloat();
    
    return result;
}

Fixed Fixed::operator*(const Fixed &obj) const
{
    Fixed result;

    result = this->toFloat() * obj.toFloat();
    
    return result;
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    Fixed result;

    result = this->toFloat() / obj.toFloat();
    
    return result;
}

/********************************************************/
/*                                                      */
/*            CPP Operator Overloading                  */
/*         Relational   >, <, >=, <=, ==, !=            */
/*                                              @mulken */
/********************************************************/

bool Fixed::operator==(const Fixed &obj) const
{
    if(this->raw_bits == obj.raw_bits)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &obj) const
{
    if(this->raw_bits != obj.raw_bits)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &obj) const
{
    if(this->raw_bits < obj.raw_bits)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &obj) const
{
    if(this->raw_bits <= obj.raw_bits)
        return true;
    return false;
}

bool Fixed::operator>(const Fixed &obj) const
{
    if(this->raw_bits > obj.raw_bits)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &obj) const
{
    if(this->raw_bits >= obj.raw_bits)
        return true;
    return false;
}

/********************************************************/
/*                                                      */
/*            CPP Operator Overloading                  */
/*         Unary Arithmetic  +, -, ++, --               */
/*                                              @mulken */
/********************************************************/

Fixed& Fixed::operator++()
{
    ++this->raw_bits;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->raw_bits++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    --this->raw_bits;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->raw_bits--;
    return tmp;
}

/********************************************************/
/*                                                      */
/*            CPP Operator Overloading                  */
/*                   Max & Min                          */
/*                                              @mulken */
/********************************************************/

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
    if (a < b)
        return a;
    return b;
}
