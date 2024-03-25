/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:03:51 by mulken            #+#    #+#             */
/*   Updated: 2024/03/25 03:05:23 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{
    
}

int BitcoinExchange::open_file(std::string argv)
{
    std::ifstream data_file;
    std::ifstream input_file;
    std::string str;
    int i = 0;
    data_file.open("data2.csv");
    if(!data_file.is_open())
    {
        std::cerr << "File Error!" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "File opened successfully!" << std::endl;
        read_data(data_file);
    }
    // --------------------- //
    input_file.open(argv);
    if(!input_file)
    {
        std::cerr << "File Error!" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "File opened successfully!" << std::endl;
        read_input(input_file);
    }
    
    data_file.close();
    input_file.close();
    return 0;
}

std::string BitcoinExchange::split_string(const std::string& str, char delim) {
    int xpos = 0;
    //std::cout << "str: " << str << std::endl;
    size_t pos = str.find(delim);
    if (pos == std::string::npos) {
        return str;
    }
    //std::cout << str.substr(0, pos + 1) << std::endl;
    if(str[pos + 1] == ' ')
    {
        return str.substr(0, pos - 1);
    }
    return str.substr(0, pos); 
}

std::string BitcoinExchange::split_string_after(const std::string& str, char delim) 
{
    int xpos = 0;
    size_t pos = str.find(delim);
    if (pos == std::string::npos) {
        return str;
    }
    if (str[pos + 1] == ' ')
    {
        return str.substr(pos + 2);
    }
    return str.substr(pos + 1);
}

std::string BitcoinExchange::execute_data(std::string str)
{
    double data;
    std::string str_left;
    std::string str_right;

    str_left = split_string(str, '|');
    str_right = split_string_after(str, '|');
    //std::cout << "str_left:" << str_left << "str_right:" << str_right << std::endl;
    
    auto it = this->data_map.find(str_left);
    double value = 0.0;
    if(it != this->data_map.end())
    {
        value = std::stod(str_right);
        if(value > INT32_MAX)
        {
            std::cerr << "Value is too big!" << std::endl;
            return str;
        }
        if(value < 0)
        {
            std::cerr << "Value is negative!" << std::endl;
            return str;
        }
        data = it->second * value;
        std::cout << str_left << " = " << data << std::endl;
    }
    
    return str;
}


std::string BitcoinExchange::read_input(std::ifstream& my_input)
{
    std::string str;
    std::cout << "---------------------" << std::endl;
   
    while(std::getline(my_input, str))
    {
        execute_data(str);

    }
    return str;
}

std::string BitcoinExchange::read_data(std::ifstream& my_file)
{
    std::string str;
    std::string str_left;
    std::string str_right;
    double value = 0.0;
    int i = 0;
    while (std::getline(my_file, str))
    {
        if(isdigit(str[0]) == false)
        {
            continue;
        }
        str_left = split_string(str, ',');
        str_right = split_string_after(str, ',');
        value = std::stod(str_right);
        container_map(str_left, value);
    }

    return str;
}


void BitcoinExchange::container_map(std::string str, double value)
{
    this->data_map[str] = value;
}