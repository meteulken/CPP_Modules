/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:57:55 by mulken            #+#    #+#             */
/*   Updated: 2024/03/10 13:14:42 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <stdint.h>
#include <iostream>
#include <cstdlib>
#include <string>

typedef struct Data
{
    std::string name;
    int age;
}Data;

class Serializer
{
	public:
        Serializer();
		Serializer(Serializer const &object);
		Serializer & operator=(Serializer const &rhs);
		~Serializer();
		uintptr_t	serialize(Data *ptr);
		Data *deserialize(uintptr_t raw);
};

#endif