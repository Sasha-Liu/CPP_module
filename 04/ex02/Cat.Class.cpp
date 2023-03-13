/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:53:59 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 15:11:23 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Class.hpp"

Cat::Cat(void)
	:Animal(), _brain(NULL)
{
	this->_type = "cat";
	this->_brain = new Brain();
	std::cout << "Default ctor in Cat Class\n";
}

Cat::Cat(Cat const &cat)
	:Animal()
{
	this->_type = cat._type;
	this->_brain = new Brain(*(cat._brain));
	std::cout << "Copy ctor in Cat Class\n";
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Dtor in Cat Class\n";
}

	
void	Cat::makeSound(void) const
{
	std::cout << "Meowuuu ~\n";
}

void				Cat::addIdea(std::string idea)
{
	this->_brain->Brain::addIdea(idea);
}

std::string	const	*Cat::getIdea(int index) const
{
	return (this->_brain->Brain::getIdea(index));
}