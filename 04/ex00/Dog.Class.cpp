/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:10:08 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 12:18:18 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Class.hpp"

Dog::Dog(void)
	:Animal()
{
	this->setType("dog");
	std::cout << "Default ctor in Dog Class\n";
}

Dog::Dog(Dog const &dog)
	:Animal()
{
	this->setType(dog.getType());
	std::cout << "Copy ctor in Dog Class\n";
}

Dog::~Dog(void)
{
	std::cout << "Dtor in Dog Class\n";
}

	
void	Dog::makeSound(void) const
{
	std::cout << "Waooof ~\n";
}
