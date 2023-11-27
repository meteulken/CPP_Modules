#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string& stringREF = str;
    std::string *stringPTR = &str;

    std::cout << "Str memory adress: " << &str << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "stringPTR adress: " << &stringPTR << std::endl;
    std::cout << "stringREF adress: " << &stringREF << std::endl;

    std::cout << "STR: " << str << std::endl;
    std::cout << "stringPTR* : " << *stringPTR << std::endl;
    std::cout << "stringREF* : " << stringREF << std::endl;

}