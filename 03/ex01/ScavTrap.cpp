/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:02:08 by sasha             #+#    #+#             */
/*   Updated: 2023/03/09 11:50:58 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	:ClapTrap()
{
	this->setName("Scav");
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap: default ctor called\n";
}
ScavTrap::ScavTrap(std::string name)
	:ClapTrap()
{
	this->setName(name);
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap: ctor with string name called\n";
}

ScavTrap::ScavTrap(ScavTrap const &scav)
	:ClapTrap(scav)
{
	this->setName(scav.getName());
	this->setHitPoint(scav.getHitPoint());
	this->setEnergyPoint(scav.getEnergyPoint());
	this->setAttackDamage(scav.getAttackDamage());
	std::cout << "ScavTrap: copy ctor called\n";
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: dtor called\n";
}
		
void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName()
		<< " enters gate keeper mode\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() < 0)
	{
		std::cout << "ClapTrap " << this->getName()
				<< " has no more energy point\n";
		return ;
	}
	this->setEnergyPoint(this->getEnergyPoint() - 1);
	std::cout << "ScavTrap " << this->getName()
			<< " insults " << target << " causing "
			<< this->getAttackDamage() << " points of damage!\n";
}

