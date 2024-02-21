#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "AAnimal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain& obj);
	    Brain &operator=(const Brain& obj);
        std::string& getIdea(int index);
};

#endif