/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:57:53 by mulken            #+#    #+#             */
/*   Updated: 2024/03/09 15:57:54 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::~Serializer()
{
    
}

Serializer::Serializer(Serializer const &src)
{
    *this = src;
}

Serializer &Serializer::operator=(Serializer const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}