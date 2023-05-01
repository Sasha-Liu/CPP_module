/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:18:57 by sasha             #+#    #+#             */
/*   Updated: 2023/05/01 12:21:20 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <string>
# include <iostream>
# include "ICharacter.Class.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &materia);
		virtual	~AMateria(void);

		AMateria			&operator=(AMateria const &materia);
		std::string const	&getType(void) const;
		virtual AMateria	*clone(void) = 0;
		virtual void		use(ICharacter &target);		
	
	protected:
		std::string	_type;
};

#endif