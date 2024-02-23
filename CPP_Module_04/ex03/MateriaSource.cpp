/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:17:20 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:17:21 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0)
{
    for(int i = 0; i < MAX_MATERIAS; i++) 
        templates[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & other) : idx(other.idx)
{
    for(int i = 0; i < MAX_MATERIAS; i++)
    {
        if(other.templates[i]) 
            templates[i] = other.templates[i]->clone();
        else
            templates[i] = NULL;
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
    if(this != &other)
    {
        idx = other.idx;
        for(int i = 0; i < MAX_MATERIAS; i++)
        {
            if(templates[i]) 
                delete templates[i];
            if(other.templates[i]) 
                templates[i] = other.templates[i]->clone();
            else
                templates[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < MAX_MATERIAS; i++) {
        if (templates[i]) {
            delete templates[i];
            templates[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if(idx < MAX_MATERIAS && m)
    {
        this->templates[idx++] = m;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < this->idx; i++)
        if(this->templates[i] && this->templates[i]->getType() == type)
            return this->templates[i]->clone();
    return NULL;
}
