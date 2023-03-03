/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:41:22 by sasha             #+#    #+#             */
/*   Updated: 2023/03/03 14:50:08 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	Zombie	*zombie_ptr;

	zombie_ptr = zombieHorde(20, "John");
	for(int i = 0; i < 20; i++)
		zombie_ptr[i].announce();
	delete[] zombie_ptr;
}