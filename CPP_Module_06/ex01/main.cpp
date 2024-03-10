/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:57:49 by mulken            #+#    #+#             */
/*   Updated: 2024/03/10 13:16:00 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Serializer	seri;
	Data *serialized = new Data;
	serialized->name = "jon";
	serialized->age = 30;
	uintptr_t i = seri.serialize(serialized);
	std::cout << "i: " << i << std::endl;
	Data	*deserialized = seri.deserialize(i);
	std::cout << "name: " << deserialized->name << std::endl;
	std::cout << "age: " << deserialized->age << std::endl;
	delete serialized;
}