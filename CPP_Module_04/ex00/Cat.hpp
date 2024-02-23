/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:02:13 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:02:16 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	protected:
		std::string type;
public:
	Cat();
	Cat(const Cat& obj);
	Cat &operator=(const Cat& obj);
	
	~Cat();
	void makeSound() const;
	std::string getType()const;
};


#endif