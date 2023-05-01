/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:49:13 by sasha             #+#    #+#             */
/*   Updated: 2023/05/01 11:59:41 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.Class.hpp"
# include "Brain.Class.hpp"
# include <string>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &cat);
		~Cat(void);

		Cat					&operator=(Cat const &cat);
		void				makeSound(void) const;
		void				addIdea(std::string idea);
		std::string	const	*getIdea(int index) const;

	private:
		Brain				*_brain;
};

#endif