/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:56:58 by mulken            #+#    #+#             */
/*   Updated: 2024/03/09 01:56:59 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Wrong Argument" << std::endl;
        return 0;
    }
    ScalarConverter a;
    a.setValue(argv[1]);
    a.convert();
    a.print();
}