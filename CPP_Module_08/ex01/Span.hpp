/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:16:51 by mulken            #+#    #+#             */
/*   Updated: 2024/03/21 06:00:29 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <ctime>
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
			unsigned int		_max_value;
			std::vector<int>	_vector;
			
			class EmptyContainer : public std::exception
			{
				public:
					const char *what() const throw();
			};
			class MaxContainer : public std::exception
			{
				public:
					const char *what() const throw();
			};
			
	public:
			Span();
			Span(unsigned int N);
			Span(Span const &object);
			Span &operator=(Span const &object);
			~Span();

			int		longestSpan();
			int		shortestSpan();
			void	addNumber(int num);
			void	addMoreNum(int size);
			
		
};
#endif