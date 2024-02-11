#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int raw_bits;
        static const int set_raw_bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(int const a);
        Fixed(float const a);
        Fixed(Fixed const &other);
        Fixed& operator=(const Fixed &other);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif

