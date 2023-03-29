/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:35:33 by sasha             #+#    #+#             */
/*   Updated: 2023/03/29 15:13:44 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.Class.hpp"

Cure::Cure(void) :_type("cure") {}

Cure::Cure(Ice const &cure) :_type(cure._type) {}

Cure::~Cure(void) {}

AMateria	*Cure::clone(void)
{
	AMateria	*p;

	p = new Cure;
	return (p);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << targer.getName() 
			<< "'s wounds *\n";
}