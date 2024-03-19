/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:50:49 by mulken            #+#    #+#             */
/*   Updated: 2024/03/19 00:46:53 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main()
{
    Array<int> a(5);

    for (unsigned int i = 0; i < 5; i++)
        a[i] = i;
    for (unsigned int i = 0; i < 5; i++)
        std::cout << a[i] << std::endl;
    
    std::cout << "---------------------" << std::endl;

    try
    {
        std::cout << a[6] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}