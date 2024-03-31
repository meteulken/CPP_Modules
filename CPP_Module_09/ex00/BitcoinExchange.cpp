/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:03:51 by mulken            #+#    #+#             */
/*   Updated: 2024/03/30 07:47:26 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    this->data_map = obj.data_map;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    this->data_map = obj.data_map;
    return *this;
}

int BitcoinExchange::date_control(std::string str)
{
    int day = 0;
    int month = 0;
    int year = 0;

    if(str.length() != 10)
    {
        std::cout << "Error: bad date format => " << str << std::endl;
        return 1;
    }
    year = stoi(str.substr(0, 4));
    month = stoi(str.substr(5, 2));
    day = stoi(str.substr(8, 2));

    if(day < 1 || day > 31)
    {
        std::cout << "Error: bad day => " << str << std::endl;
        return 1;
    }
    if(month < 1 || month > 12)
    {
        std::cout << "Error: bad month => " << str << std::endl;
        return 1;
    }
    if(year < 2000 || year > 2024)
    {
        std::cout << "Error: bad year => " << str << std::endl;
        return 1;
    }
    if(str[4] != '-' || str[7] != '-')
    {
        std::cout << "Error: bad date format => " << str << std::endl;
        return 1;
    }
    if(month == 2 && day > 29)
    {
        std::cout << "Error: bad day => " << str << std::endl;
        return 1;
    }
    if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        std::cout << "Error: bad day => " << str << std::endl;
        return 1;
    }
    if(month == 2 && day == 29 && year % 4 != 0)
    {
        std::cout << "Error: bad day => " << str << std::endl;
        return 1;
    }
    return 0;
}

int BitcoinExchange::value_control(double value)
{

    value = static_cast<int>(value);

    if(value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 1;
    }
    else if (value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 1;
    }
    return 0;
}

int BitcoinExchange::open_file(std::string argv)
{
    std::ifstream data_file;
    std::ifstream input_file(argv.c_str());
    std::string str;
    std::string data;
    int i = 0;
    data_file.open("data.csv");
    double amount = 0.0;
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
    //input_file.open(argv);
    if(!input_file)
    {
        std::cerr << "File Error!" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "File opened successfully!" << std::endl;
        getline(input_file, str);
        while(getline(input_file, str))
        {
            this->read_input(str);
        }
    }

    data_file.close();
    input_file.close();
    return 0;
}

std::string BitcoinExchange::read_input(std::string str)
{
    std::string line;
    std::string result;
    std::string data;
    double amount = 0.0;
    

    size_t found = str.find('|');
    amount = atof(str.substr(found + 1).c_str());
    data = str.substr(0, found - 1);
    if(found == std::string::npos)
    {
        std::cout << "Error: bad input => " << str << std::endl;
        return result;
    }
    if(date_control(data) == 1 || value_control(amount) == 1)
    {
        return result;
    }
    if(!str.empty())
    {
        std::map<std::string,double>::iterator it = this->data_map.find(data.c_str());
        if(it != this->data_map.end())
        {
            std::cout << data << " => " << amount << " = " << it->second * amount << std::endl;
        }
        else if (it != this->data_map.begin())
        {
            it = this->data_map.lower_bound(data.c_str());
            std::cout << data << " => " << amount << " = " << it->second * amount << std::endl;
        }
    }
    return result;
}
std::string BitcoinExchange::split_string(const std::string& str, char delim) 
{
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
    std::string str_left = split_string(str, '|');
    std::string str_right = split_string_after(str, '|');

    if(this->data_map.find(str_left) != this->data_map.end())
    {
        double value = this->data_map[str_left];
        double value2 = atof(str_right.c_str());
        
        std::cout << str_left << " = " << value * value2 << std::endl;
    }
    else
    {
        std::cout << str_left << " = ?" << str_right<< std::endl;
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
    getline(my_file, str);
    while (!(my_file.eof()))
    {
        getline(my_file, str);
        std::stringstream	ss(str);
        std::string date,rate;
        getline(ss, date, ',');
        getline(ss, rate);
        this->data_map[date] = atof(rate.c_str());
        
    }

    return str;
}


void BitcoinExchange::container_map(std::string str, double value)
{
   // this->data_map[str] = value;
}