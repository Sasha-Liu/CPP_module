/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:29:04 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 12:29:43 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.Class.hpp"

WrongAnimal::WrongAnimal(void)
	:_type("wrong")
{
	std::cout << "Default ctor in WrongAnimal Class\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrong)
	:_type(wrong._type)
{
	std::cout << "Copy ctor in WrongAnimal Class\n";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Dtor in WrongAnimal Class\n";
}

WrongAnimal			&WrongAnimal::operator=(WrongAnimal const &wrong)
{
	this->_type = wrong._type;
	std::cout << "Operator= in WrongAnimal Class\n";
	return (*this);
}

std::string const	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

void			WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[ Unknown wrong sound ]\n";
}
