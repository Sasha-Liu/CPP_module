/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:41:03 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/23 13:42:06 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact(void)
{
    count++;
}

Contact::Contact(Contact const &contact):
    first_name(contact.first_name),
    last_name(contact.last_name),
    nickname(contact.nickname),
    phone_number(contact.phone_number),
    dark_secret(contact.dark_secret)
{
    count++;
}

Contact::~Contact(void)
{
    count--;
}

/*
	How many contacts are there in total
*/
int	Contact::count = 0;

void		Contact::ft_set_first_name(std::string first_name)
{
    this->first_name = first_name;
    return ;
}

std::string	Contact::ft_get_first_name(void) const
{
    return (this->first_name);
}

void		Contact::ft_set_last_name(std::string last_name)
{
    this->last_name = last_name;
    return ;
}

std::string	Contact::ft_get_last_name(void) const
{
    return (this->last_name);
}

void		Contact::ft_set_nickname(std::string nickname)
{
    this->nickname = nickname;
    return ;
}

std::string	Contact::ft_get_nickname(void) const
{
    return (this->nickname);
}

void		Contact::ft_set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
    return ;
}

std::string	Contact::ft_get_phone_number(void) const
{
    return (this->phone_number);
}

void		Contact::ft_set_dark_secret(std::string dark_secret)
{
	this->dark_secret = dark_secret;
    return ;
}

std::string	Contact::ft_get_dark_secret(void) const
{
    return (this->dark_secret);
}
