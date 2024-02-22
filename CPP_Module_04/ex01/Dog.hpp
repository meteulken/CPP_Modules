/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:28:04 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:28:05 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain* brain;

public:
    Dog();
    ~Dog();
    void makeSound() const;
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
};

#endif