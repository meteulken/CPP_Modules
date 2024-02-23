/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:02:29 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:02:31 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl << std::endl;
	const WrongAnimal* abc = new WrongAnimal();
	const WrongAnimal* f = new WrongCat();
	std::cout << f->getType() << " " << std::endl;
	f->makeSound();
	abc->makeSound();
	delete i;
	delete j;
	delete meta;
	delete f;
	delete abc;
	return 0;


	
	
}