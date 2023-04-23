/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:38:11 by sasha             #+#    #+#             */
/*   Updated: 2023/04/18 17:18:07 by hsliu            ###   ########.fr       */
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
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	lev = -1;
	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
			lev = i;
	}
	switch(lev)
	{
		case 0:
			func_p = &Harl::debug;
			break ;
		case 1:
			func_p = &Harl::info;
			break ;
		case 2:
			func_p = &Harl::warning;
			break ;
		case 3:
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