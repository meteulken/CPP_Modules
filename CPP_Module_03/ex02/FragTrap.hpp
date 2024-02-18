/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:41:33 by mulken            #+#    #+#             */
/*   Updated: 2024/02/18 18:09:54 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>

class FragTrap : public ClapTrap
{

    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &other);
        FragTrap operator=(const FragTrap &other);
        FragTrap(std::string _name);
        void highFivesGuys(void);
        void attack(const std::string& target);
};

#endif