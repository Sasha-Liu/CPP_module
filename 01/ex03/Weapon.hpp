/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:18:20 by sasha             #+#    #+#             */
/*   Updated: 2023/03/03 16:31:41 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
	public:
		Weapon(void);
		Weapon(Weapon const &weapon);
		Weapon(std::string weapon);
		~Weapon(void);

		Weapon		&operator=(Weapon const &weapon);
		void		setType(std::string type);
		std::string	getType(void) const;

	private:
		std::string	_type;
};

#endif