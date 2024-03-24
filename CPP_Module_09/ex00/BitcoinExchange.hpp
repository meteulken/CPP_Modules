/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:03:54 by mulken            #+#    #+#             */
/*   Updated: 2024/03/24 04:19:21 by mulken           ###   ########.fr       */
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
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void open_file(std::string argv);
        std::string read_data(std::fstream& my_file);
        std::string split_string(const std::string& str, char delim);
        std::string split_string_after(const std::string& str, char delim);
        void container_map(std::string str, double value);
};

#endif