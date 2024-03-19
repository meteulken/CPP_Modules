/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:56:18 by mulken            #+#    #+#             */
/*   Updated: 2024/03/19 01:24:46 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print);
    std::cout << std::endl;

    std::string arr2[] = {"one", "two", "three", "four", "five"};
    iter(arr2, 5, print);
    std::cout << std::endl;

    return 0;
}