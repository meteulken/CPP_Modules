/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:03:04 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:03:06 by mulken           ###   ########.fr       */
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
	virtual ~Animal();
	virtual void makeSound()const;
	virtual std::string getType()const;
};


#endif