/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:38:03 by sasha             #+#    #+#             */
/*   Updated: 2023/03/13 14:38:19 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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
		virtual void		makeSound(void) const = 0;

	protected:
		std::string			_type;
};

#endif