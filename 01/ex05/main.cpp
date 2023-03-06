/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:34:53 by sasha             #+#    #+#             */
/*   Updated: 2023/03/06 13:51:35 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

int main(int argc, char **argv)
{
	Harl		harl;
	std::string	level;
	
	if (argc != 2)
	{
		std::cout << "[annoyed murmuring]\n";
		return (0);
	}
	level = argv[1];
	harl.complain(level);
}