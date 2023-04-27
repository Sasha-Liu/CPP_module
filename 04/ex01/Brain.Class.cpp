/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:43:56 by sasha             #+#    #+#             */
/*   Updated: 2023/04/27 15:19:00 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.Class.hpp"

Brain::Brain(void)
	:_next(0), _num(0)
{
	std::cout << "Default ctor in Brain Class\n";
}

Brain::Brain(Brain const &brain)
	:_next(brain._next), _num(brain._num)
{
	for (int i = 0; i < HUNDRED; i++)
	{
		_ideas[i] = brain._ideas[i];
	}
	std::cout << "Copy ctor in Brain Class\n";
}

Brain::~Brain(void)
{
	std::cout << "Dtor in Brain Class\n";
}

Brain	&Brain::operator=(Brain const &brain)
{
	this->_next = brain._next;
	this->_num = brain._num;
	for (int i = 0; i < HUNDRED; i++)
	{
		_ideas[i] = brain._ideas[i];
	}
	std::cout << "Operator= in Brain Class\n";
	return (*this);
}

std::string const 	*Brain::getIdea(int index) const
{
	if (index >= HUNDRED || index < 0)
	{
		return (NULL);
	}
	if (index >= this->_num)
	{
		return (NULL);
	}
	return (&(this->_ideas[index]));
}

void	Brain::addIdea(std::string idea)
{
	this->_ideas[this->_next] = idea;
	this->_next++;
	if (this->_next == HUNDRED)
	{
		this->_next = 0;
	}
	if (this->_num < HUNDRED)
	{
		this->_num++;
	}
}

int		Brain::ideaNum(void) const
{
	return (this->_num);
}

bool	Brain::isEmpty(void) const
{
	if (this->_num == 0)
	{
		return (1);
	}
	return (0);
}
