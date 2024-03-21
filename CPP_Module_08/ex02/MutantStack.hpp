/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:02:03 by mulken            #+#    #+#             */
/*   Updated: 2024/03/21 06:02:08 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <iostream>
#include <iterator>

template<  typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &object);
		MutantStack & operator=(MutantStack const &obj);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator end();
		iterator begin();
		const_iterator end() const;
		const_iterator begin() const;
};

#include "MutantStack.tpp"

#endif