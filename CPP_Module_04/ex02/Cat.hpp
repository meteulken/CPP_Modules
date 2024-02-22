/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:22 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:23 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
    Brain* brain;

public:
    Cat();
    ~Cat();
    void makeSound() const ;
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
};

#endif