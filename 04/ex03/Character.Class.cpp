/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:16:00 by sasha             #+#    #+#             */
/*   Updated: 2023/03/30 12:15:07 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.Class.hpp"

Character::Character(void)
	:ICharacter(), _name("John Doe")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(Character const &john)
	:ICharacter(), _name(john._name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = john._inventory[i]->clone();
	}
}

Character::Character(std::string const &name)
	:ICharacter(), _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
}

Character	&Character::operator=(Character const &john)
{
	this->_name = john._name;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
		this->_inventory[i] = john._inventory[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory full\n";
}

void	Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << idx << " out of bound\n";
		return ;
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "Inventory[ " << idx << " ] empty\n";
		return ;
	}
	this->_inventory[idx]->use(target);
}