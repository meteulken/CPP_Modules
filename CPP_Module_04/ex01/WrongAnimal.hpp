/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:02:37 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:02:39 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAnimal_HPP
#define WRONGAnimal_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal &operator=(const WrongAnimal& obj);
	~WrongAnimal();
	void makeSound()const;
	std::string getType()const;
};


#endif