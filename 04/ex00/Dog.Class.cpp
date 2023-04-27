/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:10:08 by sasha             #+#    #+#             */
/*   Updated: 2023/04/27 15:11:41 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Class.hpp"

Dog::Dog(void)
	:Animal()
{
	this->_type = "dog";
	std::cout << "Default ctor in Dog Class\n";
}

Dog::Dog(Dog const &dog)
	:Animal()
{
	this->_type = dog._type;
	std::cout << "Copy ctor in Dog Class\n";
}

Dog::~Dog(void)
{
	std::cout << "Dtor in Dog Class\n";
}

Dog		&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waooof ~\n";
}
