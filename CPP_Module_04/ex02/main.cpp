/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:31 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:32 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    AAnimal *generic;
    Cat cat;
    Dog dog;

    generic = &cat;
    std::cout << generic->getType() << std::endl;
    generic->makeSound();
    generic = &dog;
    std::cout << generic->getType() << std::endl;
    generic->makeSound();

    return 0;
}