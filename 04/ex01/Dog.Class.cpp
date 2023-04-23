/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:10:08 by sasha             #+#    #+#             */
/*   Updated: 2023/03/13 14:14:09 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Class.hpp"

Dog::Dog(void)
	:Animal(), _brain(NULL)
{
	this->_type = "dog";
	this->_brain = new Brain();
	std::cout << "Default ctor in Dog Class\n";
}

Dog::Dog(Dog const &dog)
	:Animal()
{
	this->_type = dog._type;
	this->_brain = new Brain(*(dog._brain));
	std::cout << "Copy ctor in Dog Class\n";
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dtor in Dog Class\n";
}

	
void	Dog::makeSound(void) const
{
	std::cout << "Waooof ~\n";
}

void				Dog::addIdea(std::string idea)
{
	this->_brain->Brain::addIdea(idea);
}

std::string	const	*Dog::getIdea(int index) const
{
	return (this->_brain->Brain::getIdea(index));
}