/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:24:59 by sasha             #+#    #+#             */
/*   Updated: 2023/03/09 16:33:50 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	:ClapTrap(),
	ScavTrap(),
	FragTrap(),
	_name("Diamond")
{
	this->ClapTrap::setName("Diamond_clap_name");
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(30);
	std::cout << "DiamonTrap: default ctor called\n";
}

DiamondTrap::DiamondTrap(std::string name)
	:ClapTrap(),
	ScavTrap(),
	FragTrap(),
	_name(name)
{
	this->ClapTrap::setName(name + "_clap_name");
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(30);
	std::cout << "DiamonTrap: ctor with string name called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamond)
	:ClapTrap(diamond._name + "_clap_name"),
	ScavTrap(),
	FragTrap(),
	_name(diamond._name)
{
	this->setHitPoint(diamond.getHitPoint());
	this->setEnergyPoint(diamond.getEnergyPoint());
	this->setAttackDamage(diamond.getAttackDamage());
	std::cout << "DiamonTrap: copy ctor called\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamonTrap: dtor called\n";
}

		
DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &diamond)
{
	this->_name = diamond._name;
	this->setName(diamond.getName());
	
	this->setHitPoint(diamond.getHitPoint());
	this->setEnergyPoint(diamond.getEnergyPoint());
	this->setAttackDamage(diamond.getAttackDamage());
	std::cout << "DiamonTrap: operator= called\n";
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Who am I ? I'm "
		<< this->_name << " and " << this->getName() << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}
