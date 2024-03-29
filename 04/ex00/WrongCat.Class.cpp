/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:34:01 by sasha             #+#    #+#             */
/*   Updated: 2023/05/01 11:44:41 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.Class.hpp"

WrongCat::WrongCat(void)
	:WrongAnimal()
{
	this->setType("wrongcat");
	std::cout << "Default ctor in WrongCat Class\n";
}

WrongCat::WrongCat(WrongCat const &wrongcat)
	:WrongAnimal()
{
	this->setType(wrongcat.getType());
	std::cout << "Copy ctor in WrongCat Class\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "Dtor in WrongCat Class\n";
}

WrongCat	&WrongCat::operator=(WrongCat const &wrong)
{
	std::cout << "operator= in WrongCat Class\n";
	this->_type = wrong._type;
	return (*this);
}
	
void	WrongCat::makeSound(void) const
{
	std::cout << "Meowuuu ~\n";
}
