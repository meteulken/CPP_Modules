#include "PhoneBook.hpp"

int main()
{
    PhoneBook book1;
    std::string inpt;

    std::cout << "\n\n\tPHONEBOOK\t" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "OPTIONS: ADD \tSEARCH \tEXIT" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    while (true)
    {
        std::cout << "\nEnter a option: ";
        std::getline(std::cin, inpt);
        if (inpt == "EXIT")
            return 0;
        else if (inpt == "ADD")
            book1.add();
        else if (inpt == "SEARCH")
            book1.search();
        else 
            std::cout << "\nWrong option. Try again.";
        inpt[0] = '\0';
    }
    return 0;
}