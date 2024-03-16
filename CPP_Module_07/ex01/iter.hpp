/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:56:22 by mulken            #+#    #+#             */
/*   Updated: 2024/03/16 08:56:23 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print(T value) {
    std::cout << value << " ";
}

template <typename T, typename Func>
void iter(T* arr, size_t length, Func func) {
    for (size_t i = 0; i < length; ++i) {
        func(arr[i]);
    }
}

#endif