/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:31:07 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/24 17:17:44 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	my_phonebook;
	Contact		my_contact;
	std::string	input;
	
	std::cout << "\n";
	std::cout << "############  PhoneBook  ############\n";
	std::cout << "+-----------------------------------+\n";
	std::cout << "|  You have the following options:  |\n";
	std::cout << "|    ADD       SEARCH       EXIT    |\n";
	std::cout << "+-----------------------------------+\n\n";
	while (1)
	{
		std::cout << "phonebook> ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			ft_fillout(my_contact);
			my_phonebook.ft_set_contact(my_contact);
		}
		else if (input.compare("SEARCH") == 0)
		{
			//show a contact
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "\n\n+-----------------------------------+\n";
			std::cout << "|  Thank you for using this amazing |\n";
			std::cout << "|  fantastic and awesome phonebook! |\n";
			std::cout << "+-----------------------------------+\n";
			std::cout << "###########  Thank you !  ###########\n\n";
			exit(0);
		}
		else
		{
			std::cout << "Stop messing around\n";
		}
	}
}



void	ft_fillout(Contact &contact)
{
	std::string	input;
	
	std::cout << "FIRST NAME: ";
	std::cin >> input;
	while (contact.ft_set_first_name(input))
	{
		std::cout << "FIRST NAME: ";
		std::cin >> input;
	}
	std::cout << "LAST NAME: ";
	std::cin >> input;
	while (contact.ft_set_last_name(input))
	{
		std::cout << "LAST NAME: ";
		std::cin >> input;
	}
	std::cout << "NICKNAME: ";
	std::cin >> input;
	while (contact.ft_set_nickname(input))
	{
		std::cout << "NICKNAME: ";
		std::cin >> input;
	}
	std::cout << "PHONE NUMBER: ";
	std::cin >> input;
	while (contact.ft_set_phone_number(input))
	{
		std::cout << "PHONE NUMBER: ";
		std::cin >> input;
	}
	std::cout << "Your Darkest Secret: ";
	std::cin >> input;
	while (contact.ft_set_dark_secret(input))
	{
		std::cout << "Your Darkest Secret: ";
		std::cin >> input;
	}
}