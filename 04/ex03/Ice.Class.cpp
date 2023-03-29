/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:35:35 by sasha             #+#    #+#             */
/*   Updated: 2023/03/29 16:52:34 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.Class.hpp"

Ice::Ice(void) :AMateria("ice") {}

Ice::Ice(Ice const &ice) :AMateria(ice._type) {}

Ice::~Ice(void) {}

AMateria	*Ice::clone(void)
{
	AMateria	*p;

	p = new Ice;
	return (p);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " 
			<< target.getName() << " *\n";
}