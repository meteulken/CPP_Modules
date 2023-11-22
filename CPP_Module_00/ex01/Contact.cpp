#include "Contact.hpp"


void Contact::set_name(std::string name)
{
    this->_name = name;
}

void Contact::set_surname(std::string surname)
{
    this->_surname = surname;
}

void Contact::set_nickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::set_number(std::string number)
{
    this->_number = number;
}

void Contact::set_secret(std::string secret)
{
    this->_darkestsecret = secret;
}

std::string Contact::get_name(void)
{
    return this->_name;
}

std::string Contact::get_surname(void)
{
    return this->_surname;
}

std::string Contact::get_nickname(void)
{
    return this->_nickname;
}

std::string Contact::get_number(void)
{
    return this->_number;
}

std::string Contact::get_secret(void)
{
    return this->_darkestsecret;
}
