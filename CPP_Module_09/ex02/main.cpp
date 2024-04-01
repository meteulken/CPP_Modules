/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:00:34 by mulken            #+#    #+#             */
/*   Updated: 2024/04/01 06:32:37 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    PmergeMe pm;
    if(argc == 1)
    {
        std::cerr << "Error: Invalid expression." << std::endl;
        return 1;
    }
    else
    {
        int i = 1;
        while(i < argc)
        {
            if(std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
            {
                std::cerr << "Error: Invalid expression." << std::endl;
                return 1;
            }
            i++;
        }
        pm.init(argv,argc);
    }
    
    return 0;
}