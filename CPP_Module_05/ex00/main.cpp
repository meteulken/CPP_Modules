#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Bob", 10);
	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;
	Bureaucrat be("Shahab", -8);
	std::cout << be << std::endl;
	return 0;
}