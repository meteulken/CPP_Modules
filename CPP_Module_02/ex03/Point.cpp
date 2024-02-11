#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0){}
Point::~Point(){}
Point::Point(const Point& other) : x(other.x), y(other.y){}
Point::Point(const Fixed& _x, const Fixed& _y) : x(_x), y(_y){}
Point& Point::operator=(const Point& other)
{
	if (this == &other)
		return *this;
	(Fixed) x = other.x;
	(Fixed) y = other.y;
	return *this;
}
Fixed Point::getX() const
{
	return x;
}
Fixed Point::getY() const
{
	return y;
}