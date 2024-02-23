/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:15:58 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:15:59 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
public:
	Animal();
	Animal(const Animal& obj);
	Animal &operator=(const Animal& obj);
	virtual ~Animal() = 0;
	virtual void makeSound()const = 0;
	virtual std::string getType()const = 0;
};


#endif