#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point {
public:
	Point();
	~Point();
	Point(const Point& other);
	Point(const Fixed& _x, const Fixed& _y);
	Point& operator=(const Point& other);
	Fixed getX() const;
	Fixed getY() const;
private:
	Fixed const x;
	Fixed const y;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif