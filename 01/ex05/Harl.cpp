/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:38:11 by sasha             #+#    #+#             */
/*   Updated: 2023/03/27 17:23:17 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

Harl::Harl(void) :func_p(&Harl::other) {}

Harl::~Harl(void) {}

void	Harl::complain(std::string level)
{
	int	lev;
	
	lev = 0;
	if (level.compare("DEBUG") == 0)
		lev = 1;
	else if (level.compare("INFO") == 0)
		lev = 2;
	else if (level.compare("WARNING") == 0)
		lev = 3;
	else if (level.compare("ERROR") == 0)
		lev = 4;
	switch(lev)
	{
		case 1:
			func_p = &Harl::debug;
			break ;
		case 2:
			func_p = &Harl::info;
			break ;
		case 3:
			func_p = &Harl::warning;
			break ;
		case 4:
			func_p = &Harl::error;
			break;
		default:
			func_p = &Harl::other;
			break ;
	}
	(this->*func_p)();
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::other(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}