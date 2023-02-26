/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:47:45 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/26 18:18:08 by sasha            ###   ########.fr       */
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
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	if (std::cin.eof())
	{
		std::cout << "\nBye\n";
		exit(0);
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please enter an index: ";
	ft_get_index(index);
}
