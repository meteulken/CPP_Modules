/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:26:40 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:26:41 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &wrongCat);
		WrongCat& operator=(const WrongCat &wrongCat);
		void	makeSound(void) const;
};

#endif