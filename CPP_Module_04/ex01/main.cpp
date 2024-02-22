/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:28:06 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:28:07 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
  Animal *animals[20];

  for (int i = 0; i < 20; i++) {
    if (i < 10) animals[i] = new Dog();
    if (i >= 10) animals[i] = new Cat();
  }

  for (int i = 0; i < 20; i++) {
    delete animals[i];
  }

  return 0;
}