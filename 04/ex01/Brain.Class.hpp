/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:29:42 by sasha             #+#    #+#             */
/*   Updated: 2023/04/27 15:19:12 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

# ifndef HUNDRED
#  define HUNDRED 100
# endif

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &brain);
		~Brain(void);

		Brain				&operator=(Brain const &brain);
		std::string const	*getIdea(int index) const;
		void				addIdea(std::string idea);
		int					ideaNum(void) const;
		bool				isEmpty(void) const;
		
	private:
		int				_next;
		int				_num;
		std::string		_ideas[HUNDRED];
};

#endif