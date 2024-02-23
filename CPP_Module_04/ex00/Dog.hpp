/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:25:02 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:25:03 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &dog);
		Dog& operator=(const Dog &dog);
		void	makeSound(void) const;
};

#endif