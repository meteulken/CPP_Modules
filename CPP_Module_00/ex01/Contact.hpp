#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
    private:
        std::string _name;
        std::string _surname;
        std::string _nickname;
        std::string _number;
        std::string _darkestsecret;
    public:
        void set_name(std::string name);
        void set_surname(std::string surname);
        void set_nickname(std::string nickname);
        void set_number(std::string number);
        void set_secret(std::string secret);
        std::string get_name(void);
        std::string get_surname(void);
        std::string get_nickname(void);
        std::string get_number(void);
        std::string get_secret(void);
};

#endif