/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:38:11 by sasha             #+#    #+#             */
/*   Updated: 2023/03/05 18:11:02 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

Harl::Harl(void)
	:func({
		{"DEBUG", &(this->debug)},
		{"INFO", &(this->info)},
		{"WARNING", &(this->warning)},
		{"ERROR", &(this->error)}
	})
{
}

Harl::Harl(Harl &harl)
	:func({
		{"DEBUG", &(harl.debug)},
		{"INFO", &(harl.info)},
		{"WARNING", &(harl.warning)},
		{"ERROR", &(harl.error)}
	})
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	this->func[level];
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
