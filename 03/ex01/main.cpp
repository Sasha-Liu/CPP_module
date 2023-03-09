/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:06:15 by sasha             #+#    #+#             */
/*   Updated: 2023/03/09 11:51:28 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

int	main(void)
{
	std::cout << "\nClapTrap test\n";
	
	ClapTrap	clap1;
	ClapTrap	clap2("Pigeon");
	ClapTrap	clap3(clap2);

	clap1 = clap2;
	std::cout << "Show state\n"	<< clap1 << clap2 << clap3 << std::endl;;
	clap1.attack(clap2.getName());
	clap2.takeDamage(3);
	clap2.beRepaired(3);
	std::cout << "Show state\n"	<< clap1 << clap2 << clap3 << std::endl;

	std::cout << "\nScavTrap test\n";

	ScavTrap	scav1;
	ScavTrap	scav2("Cat");
	ScavTrap	scav3(scav2);

	scav1 = scav2;
	std::cout << "Show state\n"	<< scav1 << scav2 << scav3 << std::endl;;
	scav1.attack(scav2.getName());
	scav2.takeDamage(3);
	scav2.beRepaired(3);
	std::cout << "Show state\n"	<< scav1 << scav2 << scav3 << std::endl;
	scav1.guardGate();
	scav2.guardGate();
	scav3.guardGate();

	std::cout << "\nMix test\n";

	ScavTrap	scav4("Rat");
	ClapTrap	*clap_ptr = &scav4;
	ClapTrap	&clap_ref = scav4;

	std::cout << "scav4.attack(\"pigeon\")     ";
	scav4.attack(clap1.getName());
	std::cout << "clap_ptr.attack(\"pigeon\")     ";
	clap_ptr->attack(clap1.getName());
	std::cout << "clap_ref.attack(\"pigeon\")     ";
	clap_ref.attack(clap1.getName());

	
}
