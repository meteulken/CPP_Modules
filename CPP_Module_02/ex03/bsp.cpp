#include "Fixed.hpp"
#include "Point.hpp"

Fixed abs(Fixed x) {
	if (x < 0)
		return (x * -1);
	return x;
}

Fixed triangleArea(Point a, Point b, Point c) 
{
    Fixed m(0.5f);
    Fixed area = m * abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())));
    //Fixed area = m * abs((a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY()) - (b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY()));
    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed a1; 
    Fixed a2;
    Fixed a3;

    a1 = triangleArea(a, b, c);
    a2 = triangleArea(a, b, point) + triangleArea(a, c, point) + triangleArea(b, c, point);
    a3 = a1 - a2;

    if (a3 == 0)
        return true;
    return false;

    std::cout << "Area of triangle: " << a3 << std::endl;

    return true;
}
