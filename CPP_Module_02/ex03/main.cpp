#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"


int main(void)
{
	bool	res;
	{
		Point a(1, 1);
		Point b(2, 5);
		Point c(5, 4);
		Point p(9, 9);

		res = bsp(a, b, c, p);
	}

	std::cout << "*******************************" << std::endl;
	if (res == true)
		std::cout << "Point p is inside the triangle" << std::endl;
	else
		std::cout << "Point p is outside the triangle" << std::endl;;
	std::cout << "*******************************" << std::endl;

	return (0);
}