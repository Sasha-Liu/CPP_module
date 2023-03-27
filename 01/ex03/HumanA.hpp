/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:40:53 by sasha             #+#    #+#             */
/*   Updated: 2023/03/27 17:05:41 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void			setName(std::string name);
		void			setWeapon(std::string type);
		std::string		getName(void) const;
		Weapon const	&getWeapon(void) const;
		void			attack(void);

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif