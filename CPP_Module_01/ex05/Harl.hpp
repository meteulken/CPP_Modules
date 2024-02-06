/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:57:58 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 16:57:59 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP_
# define HARL_HPP_

# define MAX_LEVEL 4

# include <iostream>
# include <string>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl();
		void complain(std::string level);
};

#endif
