/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:21:15 by sasha             #+#    #+#             */
/*   Updated: 2023/03/27 17:58:15 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	:ClapTrap()
{
	this->setName("Frag");
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap: default ctor called\n";
}
FragTrap::FragTrap(std::string name)
	:ClapTrap()
{
	this->setName(name);
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap: ctor with string name called\n";
}

FragTrap::FragTrap(FragTrap const &frag)
	:ClapTrap(frag)
{
	std::cout << "FragTrap: copy ctor called\n";
}
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: dtor called\n";
}
		
void	FragTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() < 0)
	{
		std::cout << "FragTrap " << this->getName()
				<< " has no more energy point\n";
		return ;
	}
	this->setEnergyPoint(this->getEnergyPoint() - 1);
	std::cout << "FragTrap " << this->getName()
			<< " high-fives " << target << " causing "
			<< this->getAttackDamage() << " points of damage!\n";
}

void			FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName()
		<< " demands highfives\n";
}