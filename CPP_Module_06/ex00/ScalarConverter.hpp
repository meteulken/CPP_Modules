#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
public:
    ScalarConverter();
    ScalarConverter(std::string const &value);
    ScalarConverter(ScalarConverter const &src);
    ~ScalarConverter();

    ScalarConverter &operator=(ScalarConverter const &rhs);

    void convert();
    void print() const;
    void setValue(std::string _value);

private:

    std::string _value;
    char _char;
    int _int;
    float _float;
    double _double;
};

#endif