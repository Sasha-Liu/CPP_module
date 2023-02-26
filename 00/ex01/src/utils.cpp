/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:47:45 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/26 16:01:24 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	ft_is_phone_number(std::string str)
{
	for (std::string::iterator it=str.begin(); it != str.end(); it++)
	{
		if (!my_isdigit(*it) && *it != ' ')
			return (0);
	}
	return (1);
}

bool	ft_is_name(std::string str)
{
	for (std::string::iterator it=str.begin(); it != str.end(); it++)
	{
		if (!my_isalpha(*it) && *it != ' ')
			return (0);
	}
	return (1);
}

bool	my_isdigit(char c)
{
	return (std::isdigit(static_cast<unsigned char>(c)));
}

bool	my_isalpha(char c)
{
	return (std::isalpha(static_cast<unsigned char>(c)));
}

void	ft_exit_message(void)
{
	std::cout << "\n\n";
	std::cout << "+-----------------------------------+\n";
	std::cout << "|  Thank you for using this amazing |\n";
	std::cout << "|  fantastic and awesome phonebook! |\n";
	std::cout << "+-----------------------------------+\n";
	std::cout << "###########  Thank you !  ###########\n\n";
}

void    ft_welcome_message(void)
{
	std::cout << "\n\n";
	std::cout << "############  PhoneBook  ############\n";
	std::cout << "+-----------------------------------+\n";
	std::cout << "|  You have the following options:  |\n";
	std::cout << "|    ADD       SEARCH       EXIT    |\n";
	std::cout << "+-----------------------------------+\n\n";
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

void	ft_get_input(std::string &input)
{
	if (std::getline(std::cin, input, '\n'))
	{
		return ;
	}
	std::cout << "\nBye\n";
	exit(0);
}

void	ft_get_index(int &index)
{
	if (std::cin >> index)
	{
		return ;
	}
	std::cout << "\nBye\n";
	exit(0);
}