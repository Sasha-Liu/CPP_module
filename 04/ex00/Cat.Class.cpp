/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:53:59 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 13:01:16 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Class.hpp"

Cat::Cat(void)
	:Animal()
{
	this->_type = "cat";
	std::cout << "Default ctor in Cat Class\n";
}

Cat::Cat(Cat const &cat)
	:Animal()
{
	this->_type = cat._type;
	std::cout << "Copy ctor in Cat Class\n";
}

Cat::~Cat(void)
{
	std::cout << "Dtor in Cat Class\n";
}

	
void	Cat::makeSound(void) const
{
	std::cout << "Meowuuu ~\n";
}
