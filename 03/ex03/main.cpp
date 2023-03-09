/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:06:15 by sasha             #+#    #+#             */
/*   Updated: 2023/03/09 16:49:27 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>

int	main(void)
{
	ClapTrap	clap("clam");
	ScavTrap	scav("scavenger");
	FragTrap	frag("frog");
	DiamondTrap	diamond("Dread");

	std::cout << "All attack !\n";
	clap.attack("someone");
	scav.attack("someone");
	frag.attack("someone");
	diamond.attack("someone");
	
	std::cout << "Who am I: \n";
	diamond.whoAmI();
	
	std::cout << "More test will refenece: \n";
	
	ClapTrap	&clap_ref = diamond;
	ScavTrap	&scav_ref = diamond;
	FragTrap	&frag_ref = diamond;

	std::cout << "clap_ref.attack()  ";
	clap_ref.attack("somebody");
	std::cout << "scav_ref.attack()  ";
	scav_ref.attack("somebody");
	std::cout << "frag_ref.attack()  ";
	frag_ref.attack("somebody");
	// std::cout << "clap_ref.whoAmI()  ";
	// clap_ref.whoAmI();
	// std::cout << "scav_ref.whoAmI()  ";
	// scav_ref.whoAmI();
	// std::cout << "frag_ref.whoAmI()  ";
	// frag_ref.whoAmI();
}
