/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:35:46 by sasha             #+#    #+#             */
/*   Updated: 2023/05/01 12:12:17 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.Class.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &cure);
		~Cure(void);

		Cure		&operator=(Cure const &cure);
		AMateria	*clone(void);
		void		use(ICharacter &target);
};

#endif