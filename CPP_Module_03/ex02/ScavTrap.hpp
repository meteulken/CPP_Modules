/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:41:43 by mulken            #+#    #+#             */
/*   Updated: 2024/02/20 16:48:05 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

    public:
        ScavTrap(const std::string name);
        ScavTrap &operator=(const ScavTrap &other);
        ScavTrap(const ScavTrap &other);
        void attack(const std::string& target);
        ScavTrap();
        ~ScavTrap();
        void guardGate();
};

#endif