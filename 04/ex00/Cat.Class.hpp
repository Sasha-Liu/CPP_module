/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:49:13 by sasha             #+#    #+#             */
/*   Updated: 2023/04/27 15:05:50 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.Class.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &cat);
		~Cat(void);
	
		Cat		&operator=(Cat const &cat);
		void	makeSound(void) const;
};

#endif