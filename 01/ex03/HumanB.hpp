/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:58:12 by sasha             #+#    #+#             */
/*   Updated: 2023/03/03 17:19:29 by sasha            ###   ########.fr       */
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
		HumanB(HumanB const &human);
		~HumanB(void);

		HumanB			&operator=(HumanB const &human);
		void			setName(std::string name);
		void			setWeapon(Weapon &weapon);
		std::string		getName(void) const;
		Weapon const	*getWeapon(void) const;
		void			attack(void);

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif