/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:21:17 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 11:20:24 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <ostream>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &clap);
		virtual ~ClapTrap(void);
		
		ClapTrap		&operator=(ClapTrap const &clap);
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		
		std::string const	&getName(void) const;
		int					getHitPoint(void) const;
		int					getEnergyPoint(void) const;
		int					getAttackDamage(void) const;
		
		void	setName(std::string const &name);
		void	setHitPoint(int n);
		void	setEnergyPoint(int n);
		void	setAttackDamage(int n);
	
	private:
		std::string	_name;
		int			_hit_point;
		int			_energy_point;
		int			_attack_damage;
};

std::ostream &operator<<(std::ostream &out, ClapTrap const &clap);

#endif