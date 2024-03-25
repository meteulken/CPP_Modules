/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:03:54 by mulken            #+#    #+#             */
/*   Updated: 2024/03/25 02:02:51 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_CPP
#define BITCOINEXCHANGE_CPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <map>
#include <string>

class BitcoinExchange
{
    private:
        std::map<std::string,double> data_map;
        
        
        std::string read_data(std::ifstream& my_file);
        std::string read_input(std::ifstream& my_file);
        std::string execute_data(std::string str);
        std::string split_string(const std::string& str, char delim);
        std::string split_string_after(const std::string& str, char delim);
        void container_map(std::string str, double value);

    public:
        int open_file(std::string argv);
        BitcoinExchange();
        ~BitcoinExchange();
};

#endif