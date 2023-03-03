/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:47:14 by sasha             #+#    #+#             */
/*   Updated: 2023/03/03 16:45:37 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &weapon)
	:_name(name),
	_weapon(weapon)
{
	std::cout << "HumanA " << this->_name
			<< " armed with " << this->_weapon.getType()
			<< " created\n";
}

/*
	this is a shallow copy
	since I don't know how to deep copy the reference 
	without using new, and it's not appropriate 
	to use new in this scenario
*/
HumanA::HumanA(HumanA const &human)
	:_name(human._name),
	_weapon(human._weapon)
{
	std::cout << "HumanA " << this->_name
			<< " armed with " << this->_weapon.getType()
			<< " created\n";
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->_name
			<< " armed with " << this->_weapon.getType()
			<< " destroyed\n";
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA		&HumanA::operator=(HumanA const &human)
{
	this->_name = human._name;
	this->_weapon = human._weapon;
	return (*this);
}

void		HumanA::setName(std::string name)
{
	this->_name = name;
}

void		HumanA::setWeapon(std::string type)
{
	this->_weapon.setType(type);
}

std::string	HumanA::getName(void) const
{
	return (this->_name);
}

Weapon const	&HumanA::getWeapon(void) const
{
	return (this->_weapon);
}