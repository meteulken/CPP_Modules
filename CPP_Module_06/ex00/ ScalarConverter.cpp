/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ScalarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:57:01 by mulken            #+#    #+#             */
/*   Updated: 2024/03/09 01:57:02 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    this->_char = '0';
    this->_double = 0.0;
    this->_float = 0.0f;
    this->_int = 0;
}

ScalarConverter::~ScalarConverter()
{
    
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    
}

ScalarConverter::ScalarConverter(std::string const &value)
{
    
}

void ScalarConverter::print() const
{

}

void ScalarConverter::convert()
{

}

void ScalarConverter::setValue(std::string value)
{
    this->_value = value;
}

