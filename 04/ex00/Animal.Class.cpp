/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:43:44 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 12:08:12 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Class.hpp"

Animal::Animal(void)
	:_type("animal")
{
	std::cout << "Default ctor in Animal Class\n";
}

Animal::Animal(Animal const &animal)
	:_type(animal._type)
{
	std::cout << "Copy ctor in Animal Class\n";
}

Animal::~Animal(void)
{
	std::cout << "Dtor in Animal Class\n";
}

Animal			&Animal::operator=(Animal const &animal)
{
	this->_type = animal._type;
	std::cout << "Operator= in Animal Class\n";
	return (*this);
}

std::string const	&Animal::getType(void) const
{
	return (this->_type);
}

void			Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "[ Unknown animal sound ]\n";
}
