/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:16:42 by mulken            #+#    #+#             */
/*   Updated: 2024/03/20 19:16:43 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>


template<typename T>
typename T::iterator easyfind(T& data, int indx)
{
    typename T::iterator it = std::find(data.begin(), data.end(), indx);
    if(it == data.end())
    {
        throw std::runtime_error("Value not found in data");
    }
    return it;
}


#endif