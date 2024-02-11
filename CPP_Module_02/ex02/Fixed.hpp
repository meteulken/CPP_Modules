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
        Fixed operator+(const Fixed &obj) const;
        Fixed operator-(const Fixed &obj) const;
        Fixed operator*(const Fixed &obj) const;
        Fixed operator/(const Fixed &obj) const;

        bool operator==(const Fixed &obj) const;
        bool operator!=(const Fixed &obj) const;
        bool operator<(const Fixed &obj) const;
        bool operator<=(const Fixed &obj) const;
        bool operator>(const Fixed &obj) const;
        bool operator>=(const Fixed &obj) const;

        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);


#endif

