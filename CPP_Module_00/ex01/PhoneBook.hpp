#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private: 
        int index;
        bool is_index_full;
        Contact book[8];
        void print_search_box(void);

    public:
        PhoneBook();
        void add(void);
        void search(void);

};

#endif