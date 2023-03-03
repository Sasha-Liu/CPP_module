/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:59:35 by sasha             #+#    #+#             */
/*   Updated: 2023/03/03 17:21:29 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name)
	:_name(name),
	_weapon(NULL)
{
	std::cout << "HumanB " << this->_name
			<< " armed with nothing created\n";
}

/*
	this is a shallow copy
	since I don't know how to deep copy the reference 
	without using new, and it's not appropriate 
	to use new in this scenario
*/
HumanB::HumanB(HumanB const &human)
	:_name(human._name),
	_weapon(human._weapon)
{
	std::cout << "HumanB " << this->_name
			<< " armed with " << this->_weapon->getType()
			<< " created\n";
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name
			<< " armed with " << this->_weapon->getType()
			<< " destroyed\n";
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

HumanB		&HumanB::operator=(HumanB const &human)
{
	this->_name = human._name;
	this->_weapon = human._weapon;
	return (*this);
}

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string	HumanB::getName(void) const
{
	return (this->_name);
}

Weapon const	*HumanB::getWeapon(void) const
{
	return (this->_weapon);
}