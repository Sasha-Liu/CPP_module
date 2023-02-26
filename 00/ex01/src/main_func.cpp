/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_func.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:48:26 by sasha             #+#    #+#             */
/*   Updated: 2023/02/26 17:50:11 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	ft_exit_message(void)
{
	std::cout << "\n\n";
	std::cout << "+-------------------------------------------+\n";
	std::cout << "|      Thank you for using this amazing     |\n";
	std::cout << "|      fantastic and awesome phonebook!     |\n";
	std::cout << "+-------------------------------------------+\n";
	std::cout << "###############  Thank you !  ###############\n\n";
}

void    ft_welcome_message(void)
{
	std::cout << "\n\n";
	std::cout << "################  PhoneBook  ################\n";
	std::cout << "+-------------------------------------------+\n";
	std::cout << "|      You have the following options:      |\n";
	std::cout << "|      ADD         SEARCH         EXIT      |\n";
	std::cout << "+-------------------------------------------+\n";
}

void	ft_fillout(Contact &contact)
{
	std::string	input;
	
	std::cout << "FIRST NAME: ";
	ft_get_input(input);
	while (contact.ft_set_first_name(input))
	{
		std::cout << "FIRST NAME: ";
		ft_get_input(input);
	}
	std::cout << "LAST NAME: ";
	ft_get_input(input);
	while (contact.ft_set_last_name(input))
	{
		std::cout << "LAST NAME: ";
		ft_get_input(input);
	}
	std::cout << "NICKNAME: ";
	ft_get_input(input);
	while (contact.ft_set_nickname(input))
	{
		std::cout << "NICKNAME: ";
		ft_get_input(input);
	}
	std::cout << "PHONE NUMBER: ";
	ft_get_input(input);
	while (contact.ft_set_phone_number(input))
	{
		std::cout << "PHONE NUMBER: ";
		ft_get_input(input);
	}
	std::cout << "Your Darkest Secret: ";
	ft_get_input(input);
	while (contact.ft_set_dark_secret(input))
	{
		std::cout << "Your Darkest Secret: ";
		ft_get_input(input);
	}
}
void	ft_show_contact(PhoneBook &phonebook)
{
	int				index;
	Contact const	*contact;

	phonebook.ft_display();
	std::cout << "Please enter an index: ";
	ft_get_index(index);
	contact = phonebook.ft_get_contact(index);
	if (contact == NULL)
	{
		std::cout << "Contact not found\n";
		return ;
	}
	std::cout << "FIRST NAME: " << contact->ft_get_first_name();
	std::cout << "\nLAST NAME: " << contact->ft_get_last_name();
	std::cout << "\nNICKNAME: " << contact->ft_get_nickname();
	std::cout << "\nPHONE NUMBER: " << contact->ft_get_phone_number();
	std::cout << "\nDarkest secret: " << contact->ft_get_dark_secret();
	std::cout << std::endl;
}