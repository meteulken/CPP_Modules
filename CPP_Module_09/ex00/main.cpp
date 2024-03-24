/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:04:00 by mulken            #+#    #+#             */
/*   Updated: 2024/03/24 04:25:44 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc,char **argv)
{
    if(argc != 2)
    {
        std::cerr << "Usage: ./ex00 [filename]" << std::endl;
        return 1;
    }
    BitcoinExchange bs;
    bs.open_file(argv[1]);
    
}