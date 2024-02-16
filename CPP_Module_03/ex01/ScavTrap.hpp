/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:41:20 by mulken            #+#    #+#             */
/*   Updated: 2024/02/16 08:41:21 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

    public:
        ScavTrap(const std::string name);
        ScavTrap operator=(const ScavTrap &other);
        void attack(const std::string& target);
        ScavTrap(const ScavTrap &other);
        ScavTrap();
        ~ScavTrap();
        void guardGate();
        std::string getName();
};

#endif