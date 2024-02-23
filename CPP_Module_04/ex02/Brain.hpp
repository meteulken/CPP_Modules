/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:16:05 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:16:06 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
#define BRAIN_CPP
#include <iostream>
#include <string>
# include <cstdlib>

class Brain
{
public:
	Brain();
	Brain(const Brain& obj);
	Brain &operator=(const Brain& obj);
	~Brain();
	void	getIdeas() const;
	void	setIdeas(std::string *ideas);
	std::string *getIdeaas();
	void	changeIdeas();
	std::string	ideas[100];
};





#endif