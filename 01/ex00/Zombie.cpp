/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:05:23 by sasha             #+#    #+#             */
/*   Updated: 2023/04/23 11:58:31 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void)
	:_name("A random zombie")
{
	std::cout << _name << ": created\n";
}

Zombie::Zombie(std::string name)
	:_name(name)
{
	std::cout << _name << ": created\n";
}

Zombie::Zombie(Zombie const &zombie)
	:_name(zombie._name)
{
	std::cout << _name << ": created\n";
}

Zombie::~Zombie(void)
{
	std::cout << _name << ": destroyed\n";
}

Zombie		&Zombie::operator=(Zombie &zombie)
{
	std::cout << "operator= in zombie class\n";
	this->_name = zombie._name;
	return (*this);
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

std::string const	&Zombie::get_name(void) const
{
	return (this->_name);
}  

void    Zombie::announce(void) const
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ...\n";
}