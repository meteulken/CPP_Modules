/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:57:01 by mulken            #+#    #+#             */
/*   Updated: 2024/03/11 22:01:35 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{
    
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    *this = src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}

void ScalarConverter::convert(std::string str)
{
    toChar(str);
	toInt(str);
	toFloat(str);
	toDouble(str);
}

void ScalarConverter::toChar(std::string str)
{
    char *endptr;
    char a = std::strtol(str.c_str(), &endptr, 10);
    a = static_cast<char>(a);
    if(isprint(a) && a != 0)
    {
        std::cout << "Char: '" << a << "'" << std::endl;
        return;
    }
    if(a == 0 && str[0] == '0')
    {
        std::cout << "Char: Non displayable" << std::endl;
        return;
    }
    if(isprint(a))
    {
        std::cout << "Char: '" << a << "'" << std::endl;
        return;
    }
    if (*endptr != '\0') 
    {
        if (a >= 32 && a <= 126)
        {
            std::cout << "Char: '" << a << "'" << std::endl;
        }
        else
        {
            std::cout << "char: impossible" << std::endl;
        }
    }
    else 
    {
        std::cerr << "Char: Non displayable" << std::endl;
    }
}

void ScalarConverter::toDouble(std::string str)
{
    char* endptr;
    double a = std::strtod(str.c_str(), &endptr);
    std::cout << std::setprecision(1) << std::fixed;
    a = static_cast<double>(a);
    
    if(a == 0 && str[0] != '0')
    {
        std::cout << "Double: " << a << std::endl;
        return;
    }
    if(a != 0 && str[0] != '0')
    {
        std::cout << "Double: " << a << std::endl;
        return;
    }
    if (*endptr == '\0') 
    {
        std::cout << "Double: " << a << std::endl;
    } 
    else 
    {
        std::cerr << "Double: nan" << std::endl;
    }
}

void ScalarConverter::toInt(std::string str)
{
    char* endptr;
    int a = std::strtol(str.c_str(), &endptr, 10);
    a = static_cast<int>(a);
    if(a < std::numeric_limits<int>::min() || a > std::numeric_limits<int>::max())
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    if(a == 0 && str[0] != '0')
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    if(a == 0 && str[0] == '0')
    {
        std::cout << "int: " << a << std::endl;
        return;
    }
    if(isdigit(str[0]) && str[0] != '0')
    {
        std::cout << "int: " << a << std::endl;
        return;
    }
    if (*endptr != '\0') 
    {
        std::cout << "int: " << a << std::endl;
    } 
    else 
    {
        std::cerr << "int : nan" << std::endl;
    }
}

void ScalarConverter::toFloat(std::string str)
{
    char* endptr;
    float a = std::strtof(str.c_str(), &endptr);
    std::cout << std::setprecision(1) << std::fixed;
    a = static_cast<float>(a);
    if(a == 0 && str[0] != '0')
    {
        std::cout << "Float: " << a << "f" << std::endl;
        return;
    }
    if(a != 0 && str[0] != '0')
    {
        std::cout << "Float: " << a << "f" << std::endl;
        return;
    }
    if (*endptr == '\0') 
    {
        std::cout << "Float: " << a << "f" << std::endl;
    } 
    else 
    {
        std::cerr << "Float: nanf" << std::endl;
    }
}
