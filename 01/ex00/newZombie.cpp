/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:56:21 by sasha             #+#    #+#             */
/*   Updated: 2023/03/03 14:38:50 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie*	newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie;
	if (zombie == NULL)
	{
		std::cerr << "new fails\n";
		return (NULL);
	}
	zombie->set_name(name);
	return (zombie);
}