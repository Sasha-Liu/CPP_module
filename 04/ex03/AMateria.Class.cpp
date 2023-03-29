/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:24:47 by sasha             #+#    #+#             */
/*   Updated: 2023/03/29 15:12:01 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.Class.hpp"

AMateria::AMateria(std::string const &type) :_type(type) {}

AMateria::AMateria(AMateria const &materia) :_type(materia._type) {}

AMateria::~AMateria(void) {}

AMateria	&AMateria::operator=(AMateria const &materia)
{
	this->_type = materia._type;	
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void		AMateria::use(ICharacter &target)
{
	std::cout << "* use " << this->_type 
			<< " at " << target._name << " *\n";
}