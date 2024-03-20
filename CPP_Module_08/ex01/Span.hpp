/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:16:51 by mulken            #+#    #+#             */
/*   Updated: 2024/03/20 19:16:52 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>


class Span
{
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & spn);
        Span operator=(Span const & spn);
        ~Span();
        void addNumber(unsigned int n);
        int shortestSpan();
        int longestSpan();

    unsigned int data;
};


#endif