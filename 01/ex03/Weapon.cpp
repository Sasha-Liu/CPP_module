/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:30:48 by sasha             #+#    #+#             */
/*   Updated: 2023/03/27 17:08:11 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(void)
	:_type("butter knife")
{
	std::cout << "Weapon " << _type << " created\n";
}

Weapon::Weapon(Weapon const &weapon)
	:_type(weapon._type)
{
	std::cout << "Weapon " << _type << " created\n";
}

Weapon::Weapon(std::string weapon)
	:_type(weapon)
{
	std::cout << "Weapon " << _type << " created\n";
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << _type << " destroyed\n";
}

Weapon	&Weapon::operator=(Weapon const &weapon)
{
	std::cout << "operator= in weapon class\n";
	this->_type = weapon._type;
	return (*this);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType(void) const
{
	return (this->_type);
}