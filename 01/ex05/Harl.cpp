/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:38:11 by sasha             #+#    #+#             */
/*   Updated: 2023/03/06 13:51:08 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

Harl::Harl(void)
	:debug_p(&Harl::debug),
	info_p(&Harl::info),
	warning_p(&Harl::warning),
	error_p(&Harl::error)
{
	func["DEBUG"] = &Harl::debug;
	func["INFO"] = &Harl::info;
	func["WARNING"] = &Harl::warning;
	func["ERROR"] = &Harl::error;
}

Harl::Harl(Harl &harl)
{
	func["DEBUG"] = harl.debug_p;
	func["INFO"] = harl.info_p;
	func["WARNING"] = harl.warning_p;
	func["ERROR"] = harl.error_p;
}

Harl::~Harl(void)
{
}

Harl	&Harl::operator=(Harl const &harl)
{
	func["DEBUG"] = harl.debug_p;
	func["INFO"] = harl.info_p;
	func["WARNING"] = harl.warning_p;
	func["ERROR"] = harl.error_p;
	return (*this);
}

void	Harl::complain(std::string level)
{
	if (func.find(level) == func.end())
	{
		std::cout << "[annoyed murmuring]\n";
		return ;
	}
	(this->*func[level])();
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
