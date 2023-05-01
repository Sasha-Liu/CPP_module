/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:35:33 by sasha             #+#    #+#             */
/*   Updated: 2023/05/01 12:21:43 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.Class.hpp"

Cure::Cure(void) :AMateria("cure") {}

Cure::Cure(Cure const &cure) :AMateria(cure._type) {}

Cure::~Cure(void) {}

Cure	&Cure::operator=(Cure const &cure)
{
	this->_type = cure._type;
	return (*this);
}

AMateria	*Cure::clone(void)
{
	AMateria	*p;

	p = new Cure;
	return (p);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() 
			<< "'s wounds *\n";
}