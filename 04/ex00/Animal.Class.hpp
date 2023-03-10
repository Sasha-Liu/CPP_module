/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:37:32 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 12:59:03 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include <ostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &animal);
		virtual ~Animal(void);

		Animal				&operator=(Animal const &animal);
		std::string	const	&getType(void) const;
		void				setType(std::string type);
		virtual void		makeSound(void) const;

	protected:
		std::string			_type;
};

#endif