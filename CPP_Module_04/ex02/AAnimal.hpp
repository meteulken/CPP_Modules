/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:27:13 by mulken            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:14 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;

    public:
        virtual void makeSound() const = 0;
        AAnimal();
        AAnimal(std::string);
        AAnimal(const AAnimal &other);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();
        std::string getType() const;
        void setType(std::string _type);
        

};

#endif