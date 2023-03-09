/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:06:15 by sasha             #+#    #+#             */
/*   Updated: 2023/03/09 12:35:53 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
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

	std::cout << "\nFragTrap test\n";

	FragTrap	frag1;
	FragTrap	frag2("Frog");
	FragTrap	frag3(frag2);

	frag1 = frag2;
	std::cout << "Show state\n"	<< frag1 << frag2 << frag3 << std::endl;;
	frag1.attack(frag2.getName());
	frag2.takeDamage(3);
	frag2.beRepaired(3);
	std::cout << "Show state\n"	<< frag1 << frag2 << frag3 << std::endl;
	frag1.highFivesGuys();
	frag2.highFivesGuys();
	frag3.highFivesGuys();

	std::cout << "\nMix test\n";

	FragTrap	frag4("Toad");
	ClapTrap	*clap_ptr = &frag4;
	ClapTrap	&clap_ref = frag4;

	std::cout << "frag4.attack(\"pigeon\")     ";
	frag4.attack(clap1.getName());
	std::cout << "clap_ptr.attack(\"pigeon\")     ";
	clap_ptr->attack(clap1.getName());
	std::cout << "clap_ref.attack(\"pigeon\")     ";
	clap_ref.attack(clap1.getName());

	
}
