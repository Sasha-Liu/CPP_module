/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:34:53 by sasha             #+#    #+#             */
/*   Updated: 2023/03/06 14:26:33 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

int main(int argc, char **argv)
{
	Harl		harl;
	std::string	level;
	int			filter;
	
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return (0);
	}
	level = argv[1];
	filter = -1;
	if (level.compare("DEBUG") == 0)
		filter = 0;
	else if (level.compare("INFO") == 0)
		filter = 1;
	else if (level.compare("WARNING") == 0)
		filter = 2;
	else if (level.compare("ERROR") == 0)
		filter = 3;
	switch(filter)
	{
		case 0:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 1:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 2:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}