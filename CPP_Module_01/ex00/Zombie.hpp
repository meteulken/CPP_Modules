/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:44 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:56:45 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <iostream> 
# include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string newName);
		~Zombie(void);

		void announce(void);
};

Zombie* newZombie(std::string newName);
void randomChump(std::string newName);

#endif
