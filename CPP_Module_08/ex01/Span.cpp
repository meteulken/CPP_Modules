/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:16:49 by mulken            #+#    #+#             */
/*   Updated: 2024/03/21 06:00:51 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N): _max_value(N)
{}

Span::Span(Span const &object)
{
	*this = object;
}

Span & Span::operator=(Span const &object)
{
	if (this != &object)
	{
		this->_max_value = object._max_value;
		this->_vector = object._vector;
	}
	return (*this);
}

Span::~Span()
{}

int	Span::shortestSpan()
{
	int minSpan;

	if (this->_vector.size() < 1)
		throw Span::EmptyContainer();
	std::sort(this->_vector.begin(), this->_vector.end());
	minSpan = this->_vector[1] - this->_vector[0];
	for (unsigned int i = 1; i < this->_vector.size() - 1; i++)
	{
		if (this->_vector[i + 1] - this->_vector[i] < minSpan)
			minSpan = this->_vector[i + 1] - this->_vector[i];
	}
	return (minSpan);
}
int	Span::longestSpan()
{
	int lngSpan;
	
	if (this->_vector.size() < 1)
		throw Span::EmptyContainer();
	std::sort(this->_vector.begin(), this->_vector.end());
	lngSpan = this->_vector[this->_vector.size() - 1] - this->_vector[0];
	return(lngSpan);
}

void	Span::addMoreNum(int size)
{
	for (int i = 0; i < size; i++)
	{
		this->_vector.insert(this->_vector.begin(), rand() % 200);
	}
	
}

void	Span::addNumber(int num)
{
	if (this->_vector.size() == this->_max_value)
		throw Span::MaxContainer();
	if (num < 0)
		throw std::runtime_error("negative number ");
	this->_vector.push_back(num);
}


const char	*Span::MaxContainer::what() const throw()
{
	return("Container(Vector) Is Full");
}

const char	*Span::EmptyContainer::what() const throw()
{
	return("Container(Vector) Is Empty");
}