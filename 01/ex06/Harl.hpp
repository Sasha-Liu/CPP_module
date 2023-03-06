/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:16:02 by sasha             #+#    #+#             */
/*   Updated: 2023/03/06 13:42:06 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <map>
#include <string>

class Harl
{
	public:
		Harl(void);
		Harl(Harl &harl);
		~Harl(void);

		Harl	&operator=(Harl const &harl);
		void	complain(std::string level);

	private:
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		void			(Harl::*debug_p)(void);
		void			(Harl::*info_p)(void);
		void			(Harl::*warning_p)(void);
		void			(Harl::*error_p)(void);
		std::map<std::string, void(Harl::*)(void)>	func;
};

#endif