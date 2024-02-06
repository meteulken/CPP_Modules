/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:57:48 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:57:49 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "iostream"

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType();
    void setType(std::string type);
};

#endif