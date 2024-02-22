/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:29 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:30 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
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