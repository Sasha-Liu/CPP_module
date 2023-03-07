/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:33:31 by sasha             #+#    #+#             */
/*   Updated: 2023/03/07 17:27:39 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void)
	:_name("Clap"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
	:_name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Constructor with string name called\n";
}

ClapTrap::ClapTrap(ClapTrap const &clap)
	:_name(clap.getName()),
	_hit_point(clap.getHitPoint()), 
	_energy_point(clap.getEnergyPoint()),
	_attack_damage(clap.getAttackDamage())
{
	std::cout << "Copy constructor called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called\n";
}
		
ClapTrap	&ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "assignment operator called\n";
	this->setName(clap.getName());
	this->setHitPoint(clap.getHitPoint());
	this->setEnergyPoint(clap.getEnergyPoint());
	this->setAttackDamage(clap.getAttackDamage());
	return (*this);
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &clap)
{
	out << "[NAME]          " << clap.getName() << std::endl
		<< "[HIT POINT]     " << clap.getHitPoint() << std::endl
		<< "[ENERGY POINT]  " << clap.getEnergyPoint() << std::endl
		<< "[ATTACK DAMAGE] " << clap.getAttackDamage() << std::endl;
	return (out);
}


void		ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() < 0)
	{
		std::cout << "ClapTrap " << this->getName()
				<< " has no more energy point\n";
		return ;
	}
	this->setEnergyPoint(this->getEnergyPoint() - 1);
	std::cout << "ClapTrap " << this->getName()
			<< " attacks " << target << " causing "
			<< this->getAttackDamage() << " points of damage!\n";
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->setHitPoint(this->getHitPoint() - amount);
	std::cout << "ClapTrap " << this->getName()
			<< " took " << amount 
			<< " points of damage. Hit point remains: "
			<< this->getHitPoint() << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoint() < 0)
	{
		std::cout << "ClapTrap " << this->getName()
				<< " has no more energy point\n";
		return ;
	}
	this->setEnergyPoint(this->getEnergyPoint() - 1);
	this->setHitPoint(this->getHitPoint() + amount);
	std::cout << "ClapTrap " << this->getName()
			<< " gained " << amount 
			<< " hit point. Hit point now: "
			<< this->getHitPoint() << std::endl;
}
		
std::string const	&ClapTrap::getName(void) const
{
	return (this->_name);
}

int					ClapTrap::getHitPoint(void) const
{
	return (this->_hit_point);
}

int					ClapTrap::getEnergyPoint(void) const
{
	return (this->_energy_point);
}

int					ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

		
void	ClapTrap::setName(std::string const &name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoint(int n)
{
	if (n < 0)
	{
		this->_hit_point = 0;
		return ;
	}
	this->_hit_point = n;
}

void	ClapTrap::setEnergyPoint(int n)
{
	if (n < 0)
	{
		this->_energy_point = 0;
		return ;
	}
	this->_energy_point = n;
}

void	ClapTrap::setAttackDamage(int n)
{
	if (n < 0)
	{
		this->_attack_damage = 0;
		return ;
	}
	this->_attack_damage = 0;	
}
