/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:16:11 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:16:12 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	protected:
		std::string type;
public:
	Cat();
	Cat(const Cat& obj);
	Cat &operator=(const Cat& obj);
	
	~Cat();
	void makeSound() const;
	std::string getType()const;
	Brain	*getBrain() const;
};


#endif