/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:22:20 by sasha             #+#    #+#             */
/*   Updated: 2023/03/27 16:37:30 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <new>
#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*p;

	p = new Zombie[N];
	for (int i = 0; i < N; i++)
		p[i].set_name(name);
	return (p);
}