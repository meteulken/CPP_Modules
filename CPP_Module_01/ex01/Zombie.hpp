/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:58 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:56:59 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
        void setName(std::string str);
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif