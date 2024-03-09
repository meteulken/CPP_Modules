/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:57:55 by mulken            #+#    #+#             */
/*   Updated: 2024/03/09 15:57:56 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <stdint.h>
#include <iostream>
#include <cstdlib>
#include <string>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

class Serializer
{
	public:
        Serializer();
		Serializer(Serializer const &object);
		Serializer & operator=(Serializer const &rhs);
		~Serializer();
		static uintptr_t	serializer(Data *ptr);
		static Data *deserializer(uintptr_t raw);
};

#endif