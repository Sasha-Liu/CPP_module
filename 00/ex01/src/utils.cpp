/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:47:45 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/24 15:52:21 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	ft_is_phone_number(std::string str)
{
	for (std::string::iterator it=str.begin(); it != str.end(); it++)
	{
		if (!my_isdigit(*it))
			return (0);
	}
	return (1);
}

bool	ft_is_name(std::string str)
{
	for (std::string::iterator it=str.begin(); it != str.end(); it++)
	{
		if (!my_isalpha(*it))
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