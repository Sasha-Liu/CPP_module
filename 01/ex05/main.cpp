/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:34:53 by sasha             #+#    #+#             */
/*   Updated: 2023/03/05 17:38:32 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

int main(int argc, char **argv)
{
	Harl		harl;
	std::string	level;
	
	if (argc == 1)
	{
		std::cout << "[annoyed murmuring]\n";
	}
	level = argv[1];
	harl.complain(level);
}