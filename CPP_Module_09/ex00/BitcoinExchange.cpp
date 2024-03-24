/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:03:51 by mulken            #+#    #+#             */
/*   Updated: 2024/03/24 04:43:17 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{
    
}

void BitcoinExchange::open_file(std::string argv)
{
    std::fstream my_file;
    std::string str;
    std::map<std::string, double> map;
    int i = 0;
    my_file.open(argv,std::ios::in);
    if(!my_file)
    {
        std::cerr << "File Error!" << std::endl;
    }
    else
    {
        std::cout << "File opened successfully!" << std::endl;
        read_data(my_file);
    }
}

std::string BitcoinExchange::split_string(const std::string& str, char delim) {
    int xpos = 0;
    if(str.find(' ') != std::string::npos)
        xpos = 1;
    else
        xpos = 0;
    size_t pos = str.find(delim);
    if (pos == std::string::npos) {
        return str; // Delim bulunamazsa tüm stringi geri döndür
    }
    return str.substr(xpos, pos); 
}

std::string BitcoinExchange::split_string_after(const std::string& str, char delim) 
{
    int xpos = 1;
    if(str.find('|') != std::string::npos)
        xpos = 2;
    size_t pos = str.find(delim);
    if (pos == std::string::npos) {
        return str; // Delim bulunamazsa tüm stringi geri döndür
    }
    str.substr(pos + xpos);
    std::cout << str.substr(pos + xpos) << std::endl;
    return str;
}

std::string BitcoinExchange::read_data(std::fstream& my_file)
{
    std::string str;
    std::string str2;
    double value = 0.0;;
    int i = 0;
    while (i++ < 10)
    {
        std::getline(my_file, str, '\n');
        if(isdigit(str[0]) == false)
        {
            continue;
        }
        str2 = split_string_after(str, '|');
        str = split_string(str, '|');
        value = std::stod(str2);
        //std::cout << str << " " << str2 << std::endl;
        container_map(str, value);
    }
    return str;
}

void BitcoinExchange::container_map(std::string str, double value)
{
    int i = 0;
    std::map<std::string, double> map;
    while(i++ < 1000)
    {
        map[str] = value;
    }
}