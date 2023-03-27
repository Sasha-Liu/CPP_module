/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:09:08 by sasha             #+#    #+#             */
/*   Updated: 2023/03/13 13:24:39 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.Class.hpp"
# include "Brain.Class.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &dog);
		~Dog(void);
	
		void	makeSound(void) const;
		void				addIdea(std::string idea);
		std::string	const	*getIdea(int index) const;

	private:
		Brain				*_brain;
};

#endif