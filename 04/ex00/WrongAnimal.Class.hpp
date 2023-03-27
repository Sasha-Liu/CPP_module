/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:27:19 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 12:27:53 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>
# include <ostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &wrong);
		virtual ~WrongAnimal(void);

		WrongAnimal			&operator=(WrongAnimal const &wrong);
		std::string	const	&getType(void) const;
		void				setType(std::string type);
		void				makeSound(void) const;

	private:
		std::string	_type;
};

#endif