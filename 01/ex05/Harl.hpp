/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:16:02 by sasha             #+#    #+#             */
/*   Updated: 2023/03/05 17:50:39 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <map>

class Harl
{
	public:
		Harl(void);
		Harl(Harl &harl);
		~Harl(void);
		void	complain(std::string level);

	private:
		void									debug(void);
		void									info(void);
		void									warning(void);
		void									error(void);
		std::map<std::string, void(*)(void)>	func;
};

#endif