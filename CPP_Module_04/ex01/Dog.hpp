/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:15:28 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:15:29 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	protected:
		std::string type;
public:
	Dog();
	Dog(const Dog& obj);
	Dog &operator=(const Dog& obj);
	
	~Dog();
	void makeSound()const;
	std::string getType()const;
	Brain	*getBrain() const;
	
};


#endif