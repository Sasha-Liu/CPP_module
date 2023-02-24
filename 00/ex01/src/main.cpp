/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:31:07 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/24 15:02:42 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook		phonebook;
	Contact			contact[8];
	Contact const	*ret;

	contact[0].ft_set_first_name("Sasha");
	contact[0].ft_set_last_name("Liu");
	
	contact[1].ft_set_first_name("Kay");
	contact[1].ft_set_last_name("Lan");

	phonebook.ft_set_contact(contact[0]);
	phonebook.ft_set_contact(contact[1]);
	
	ret = phonebook.ft_get_contact(0);
	if (ret)
		std::cout << ret->ft_get_first_name() << " " << ret->ft_get_last_name() << std::endl; 
	ret = phonebook.ft_get_contact(1);
	if (ret)
		std::cout << ret->ft_get_first_name() << " " << ret->ft_get_last_name() << std::endl;
}