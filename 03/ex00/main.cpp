/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:06:15 by sasha             #+#    #+#             */
/*   Updated: 2023/03/07 17:26:44 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

int	main(void)
{
	ClapTrap	clap1;
	ClapTrap	clap2("Pigeon");
	ClapTrap	clap3(clap2);

	clap1 = clap2;
	std::cout << "Show state\n"	<< clap1 << clap2 << clap3 << std::endl;;
	clap1.attack(clap2.getName());
	clap2.takeDamage(3);
	clap2.beRepaired(3);
	std::cout << "Show state\n"	<< clap1 << clap2 << clap3 << std::endl;




}
