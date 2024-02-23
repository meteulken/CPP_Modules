/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:15:34 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:15:36 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	int size = 10;
	Animal* animals[size];
	Animal bla;
	for (int i = 0; i < size + 1; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "---------------------" << std::endl;
	for (int i = size; i > -1; i--)
		delete animals[i];
	std::cout << "---------------------" << std::endl;

	// Dog tmp;
	// {
	// 	Dog basic = tmp;
	// }
}