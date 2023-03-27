/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:35:44 by sasha             #+#    #+#             */
/*   Updated: 2023/03/14 11:42:14 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.Class.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &ice);
		~Ice(void);

		AMateria	*clone(void);
		void		use(ICharacter &target);
};

#endif