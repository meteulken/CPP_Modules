/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:03:54 by mulken            #+#    #+#             */
/*   Updated: 2024/04/02 11:40:00 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_CPP
#define BITCOINEXCHANGE_CPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string,double> data_map;
        
        
        std::string read_data(std::ifstream& my_file);
        std::string read_input(std::string infile);
        int date_control(std::string str);
        int value_control(double value);

    public:
        int open_file(std::string argv);
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange &operator=(const BitcoinExchange &obj);
};

#endif