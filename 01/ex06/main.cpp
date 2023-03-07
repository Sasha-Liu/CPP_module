/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:34:53 by sasha             #+#    #+#             */
/*   Updated: 2023/03/07 10:22:38 by sasha            ###   ########.fr       */
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
		harl.complain("other");
		return (0);
	}
	level = argv[1];
	filter = 0;
	if (level.compare("DEBUG") == 0)
		filter = 1;
	else if (level.compare("INFO") == 0)
		filter = 2;
	else if (level.compare("WARNING") == 0)
		filter = 3;
	else if (level.compare("ERROR") == 0)
		filter = 4;
	switch(filter)
	{
		case 1:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 2:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 3:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 4:
			harl.complain("ERROR");
			break ;
		default:
			harl.complain("other");
	}
}