/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:58:12 by sasha             #+#    #+#             */
/*   Updated: 2023/04/23 12:07:05 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);

		void				setName(std::string name);
		void				setWeapon(Weapon &weapon);
		std::string	const	&getName(void) const;
		Weapon const		*getWeapon(void) const;
		void				attack(void) const;

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif