#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>


void print_contact(std::string str)
{
    if (str.length() <= 10)
        std::cout << std::right << std::setw(10) << str;
    else
        std::cout << str.substr(0, 9) << ".";
}

int is_number(std::string num)
{
    int i = 0;

    while (num[i])
    {
        if (num[i] < '0' || num[i] > '9')
            return 1;
        i++;
    }
    return 0;
}

void print_header(void)
{
    std::cout << "\n\n                 PHONEBOOK               " << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     INDEX|      NAME|   SURNAME|  NICKNAME|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

void print_column(Contact book)
{
    std::cout << "NAME: " << book.get_name() << std::endl;
    std::cout << "SURNAME: " << book.get_surname() << std::endl;
    std::cout << "NICKNAME: " << book.get_nickname() << std::endl;
    std::cout << "NUMBER: " << book.get_number() << std::endl;
    std::cout << "SECRET: " << book.get_secret() << std::endl;
}

void PhoneBook::print_search_box()
{
    int len = index;
    if (is_index_full)
        len = 8;
    int i = 0;
    print_header();
    while (i < len)
    {
        std::cout << "|" << std::right << std::setw(10) << i + 1;
        std::cout << "|";
        print_contact(book[i].get_name());
        std::cout << "|";
        print_contact(book[i].get_surname());
        std::cout << "|";
        print_contact(book[i].get_nickname());
        std::cout << "|";
        std::cout << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
        i++;
    }
}

bool is_digit(std::string str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

void PhoneBook::add(void)
{
    std::string inpt;
    if (index >= 8)
        is_index_full = true;
    index = index % 8;
    
    std::cout << "Enter a name: ";
    std::getline(std::cin, inpt);
    book[index].set_name(inpt);
    
    std::cout << "Enter a surname: ";
    std::getline(std::cin, inpt);
    book[index].set_surname(inpt);
    
    std::cout << "Enter a nickname: ";
    std::getline(std::cin, inpt);
    book[index].set_nickname(inpt);
    do
    {
        std::cout << "Enter a number: ";
        std::getline(std::cin, inpt);

    } while (is_digit(inpt) == false);
    book[index].set_number(inpt);
    
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, inpt);
    book[index].set_secret(inpt);

    std::cout << "\nContact is added.\n";
    index++;
}

void PhoneBook::search(void)
{
    int len;
    std::string inpt;
    int num;

    if (is_index_full)
    {
        len = 8;
        index = 8;
    }
    len = index;
    if (len == 0)
    {
        std::cout << "There is no contact in book";
        return ;
    }
    print_search_box();
    std::cout << "\nEnter index of column: ";
    std::getline(std::cin, inpt);
    if (is_number(inpt))
        return ;
    num = std::atoi(inpt.c_str()) - 1;
    if (num < 0 || num >= index)
    {
        std::cout << "Wrong index.";
        return ;
    }
    print_column(book[num]);
}

PhoneBook::PhoneBook(void)
{
    index = 0;
    is_index_full = false;
}


