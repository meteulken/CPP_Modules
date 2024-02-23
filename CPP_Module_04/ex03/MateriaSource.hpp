/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:17:23 by mulken            #+#    #+#             */
/*   Updated: 2024/02/23 04:17:25 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

#define MAX_MATERIAS 4


class MateriaSource : public IMateriaSource
{
	private:
	    AMateria* templates[4];
	    int idx;

	public:
	    MateriaSource();
	    MateriaSource(MateriaSource const & other);
	    MateriaSource & operator=(MateriaSource const & other);
	    virtual ~MateriaSource();
	    virtual void learnMateria(AMateria*);
	    virtual AMateria* createMateria(std::string const & type);
};

#endif
