/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:04:05 by sasha             #+#    #+#             */
/*   Updated: 2023/04/23 12:00:30 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>
#include <iostream>

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int	main(void)
{
	Zombie	zombie1;
	Zombie	zombie2("John");
	Zombie	*zombie3 = newZombie("Mike");
	Zombie	zombie4(zombie1);

	std::cout << std::endl;
	zombie1.announce();
	zombie2.announce();
	zombie3->announce();
	zombie4.announce();	
	
	std::cout << "\nzombie1 = zombie2\n";
	zombie1 = zombie2;
	zombie1.announce();
	zombie2.announce();
	zombie3->announce();
	zombie4.announce();

	std::cout << "\nzombie1.set_name(\"Peter\")\n";
	zombie1.set_name("Peter");
	zombie1.announce();
	zombie2.announce();
	zombie3->announce();
	zombie4.announce();

	std::cout << "\nrandomChump(\"Steve\")\n";
	randomChump("Steve");
	std::cout << std::endl;

	std::cout << "delete zombie3\n";
	delete zombie3;
}
