/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:47:01 by sasha             #+#    #+#             */
/*   Updated: 2023/03/29 20:57:13 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.Class.hpp"

MateriaSource::MateriaSource(void)
	:IMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_memory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &src)
	:IMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_memory[i] = src._memory[i]->clone();
	}
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_memory[i];
		this->_memory[i] = NULL;
	}
}

MateriaSource		&MateriaSource::operator=(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_memory[i];
		this->_memory[i] = NULL;
		this->_memory[i] = src._memory[i]->clone();
	}
	return (*this);
}

void 	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] == NULL)
		{
			this->_memory[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] && this->_memory[i]->getType() == type)
		{
			return (this->_memory[i]->clone());
		}
	}
	return (NULL);
}
