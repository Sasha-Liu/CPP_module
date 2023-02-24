/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:41:03 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/24 16:29:02 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
    _count++;
}

Contact::Contact(Contact const &contact):
    _first_name(contact._first_name),
    _last_name(contact._last_name),
    _nickname(contact._nickname),
    _phone_number(contact._phone_number),
    _dark_secret(contact._dark_secret)
{
    _count++;
}

Contact::~Contact(void)
{
    _count--;
}

Contact		&Contact::operator=(Contact const &contact)
{
	this->_first_name = contact._first_name;
	this->_last_name = contact._last_name;
	this->_nickname = contact._nickname;
	this->_phone_number = contact._phone_number;
	this->_dark_secret = contact._dark_secret;
	return (*this);
}

/*
	How many contacts are there in total
*/
int	Contact::_count = 0;

int			Contact::ft_set_first_name(std::string first_name)
{
	if (first_name.empty())
	{
		std::cout << "Cannot have empty field\n";
		return (1);
	}
	if (!ft_is_name(first_name))
	{
		std::cout << "Name can only contains alphabet\n";
		return (1);
	}
	this->_first_name = first_name;
	return (0);
}

std::string	Contact::ft_get_first_name(void) const
{
	return (this->_first_name);
}

int			Contact::ft_set_last_name(std::string last_name)
{
	if (last_name.empty())
	{
		std::cout << "Cannot have empty field\n";
		return (1);
	}
	if (!ft_is_name(last_name))
	{
		std::cout << "Name can only contains alphabet\n";
		return (1);
	}
	this->_last_name = last_name;
	return (0);
}

std::string	Contact::ft_get_last_name(void) const
{
	return (this->_last_name);
}

int 		Contact::ft_set_nickname(std::string nickname)
{
	if (nickname.empty())
	{
		std::cout << "Cannot have empty field\n";
		return (1);
	}
	if (!ft_is_name(nickname))
	{
		std::cout << "Name can only contains alphabet\n";
		return (1);
	}
	this->_nickname = nickname;
	return (0);
}

std::string	Contact::ft_get_nickname(void) const
{
	return (this->_nickname);
}

int 		Contact::ft_set_phone_number(std::string phone_number)
{
	if (phone_number.empty())
	{
		std::cout << "Cannot have empty field\n";
		return (1);
	}
	if (!ft_is_phone_number(phone_number))
	{
		std::cout << "Phone number can only contains digits\n";
		return (1);
	}
	this->_phone_number = phone_number;
	return (0);
}

std::string	Contact::ft_get_phone_number(void) const
{
	return (this->_phone_number);
}

int 		Contact::ft_set_dark_secret(std::string dark_secret)
{
	if (dark_secret.empty())
	{
		std::cout << "Everyone has secrets\n";
		return (1);
	}
	this->_dark_secret = dark_secret;
	return (0);
}

std::string	Contact::ft_get_dark_secret(void) const
{
	return (this->_dark_secret);
}
