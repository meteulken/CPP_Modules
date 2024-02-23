/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:26:35 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 22:26:36 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
	WrongAnimal(void);
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal& src);

    ~WrongAnimal(void);

    WrongAnimal& operator=(const WrongAnimal& rhs);
    
	void	makeSound(void) const;
    std::string		getType(void) const;
};

#endif