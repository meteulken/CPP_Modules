/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:24:56 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:24:57 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &cat);
		Cat& operator=(const Cat &cat);
		void	makeSound(void) const;
};

#endif