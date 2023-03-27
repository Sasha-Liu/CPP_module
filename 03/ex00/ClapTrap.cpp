/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:33:31 by sasha             #+#    #+#             */
/*   Updated: 2023/03/27 17:44:42 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void)
	:_name("Clap"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap: default ctor called\n";
}

ClapTrap::ClapTrap(std::string name)
	:_name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap: ctor with string name called\n";
}

ClapTrap::ClapTrap(ClapTrap const &clap)
	:_name(clap._name), _hit_point(clap._hit_point), 
	_energy_point(clap._energy_point), _attack_damage(clap._attack_damage)
{
	std::cout << "ClapTrap: copy ctor called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: dtor called\n";
}
		
ClapTrap	&ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "ClapTrap: operator= called\n";
	this->_name = clap._name;
	this->_hit_point = clap._hit_point;
	this->_energy_point = clap._energy_point;
	this->_attack_damage = clap._attack_damage;
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
	if (this->_energy_point < 0)
	{
		std::cout << "ClapTrap " << this->_name
				<< " has no more energy point\n";
		return ;
	}
	this->_energy_point--;
	std::cout << "ClapTrap " << this->_name
			<< " attacks " << target << " causing "
			<< this->_attack_damage << " points of damage!\n";
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_point -= amount;
	if (this->_hit_point < 0)
		this->_hit_point = 0;
	std::cout << "ClapTrap " << this->_name
			<< " took " << amount 
			<< " points of damage. Hit point remains: "
			<< this->_hit_point << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name
				<< " has no more energy point\n";
		return ;
	}
	this->_energy_point--;
	this->_hit_point += amount;
	std::cout << "ClapTrap " << this->_name
			<< " gained " << amount 
			<< " hit point. Hit point now: "
			<< this->_hit_point << std::endl;
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
