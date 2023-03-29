/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:00:25 by sasha             #+#    #+#             */
/*   Updated: 2023/03/29 16:54:17 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "ICharacter.Class.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const &john);
		Character(std::string const &name);
		virtual ~Character(void);
		
		Character			&operator=(Character const &john);

		virtual std::string const	&getName(void) const;
		virtual void		equip(AMateria *m);
		virtual void		unequip(int idx);
		virtual void		use(int idx, ICharacter &target);

	private:
		AMateria	*_inventory[4];
		std::string	_name;
};

#endif