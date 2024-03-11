/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 02:19:29 by mulken            #+#    #+#             */
/*   Updated: 2024/03/11 02:19:30 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AllClasses.hpp"

int	main()
{
	Base *newGeneratedClass;

	newGeneratedClass = generate();
	identify(newGeneratedClass);
	identify(*newGeneratedClass);
	delete newGeneratedClass;

	newGeneratedClass = generate();
	identify(&(*newGeneratedClass));
	identify(*newGeneratedClass);
	delete newGeneratedClass;
}