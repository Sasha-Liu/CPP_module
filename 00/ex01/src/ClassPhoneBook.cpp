/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:28:15 by hsliu             #+#    #+#             */
/*   Updated: 2023/03/27 16:08:52 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void):
    _next(0), _count(0) {}

PhoneBook::PhoneBook(PhoneBook const &phonebook):
    _next(phonebook._next), _count(phonebook._count) 
{
    for(int i = 0; i < MAX; i++)
        this->_contact[i] = phonebook._contact[i];
}

PhoneBook::~PhoneBook(void) {}

PhoneBook   &PhoneBook::operator=(PhoneBook const &phonebook)
{
	this->_next = phonebook._next;
	this->_count = phonebook._count;
	for(int i = 0; i < MAX; i++)
		this->_contact[i] = phonebook._contact[i];
	return (*this);
}

void	PhoneBook::ft_set_contact(Contact const &contact)
{	
	this->_contact[this->_next] = contact;
	this->_next++;
	if (this->_next == MAX)
		this->_next = 0;
	if (this->_count < MAX)
		this->_count++;
}

Contact const	*PhoneBook::ft_get_contact(int index) const
{
	if (index < 0 || index >= _count)
		return (NULL);
	return (&(this->_contact[index]));
}

void	PhoneBook::ft_display(void) const
{
	Contact	const		*contact;
	int					index;

	index = 0;
	std::cout << "+-------------------------------------------+\n";
	std::cout << "|     index|First name| Last name|  Nickname|\n";
	std::cout << "+-------------------------------------------+\n";
	while (1)
	{
		contact = ft_get_contact(index);
		if (contact == NULL)
			break ;
		std::cout << "|" << std::setw(10) << index << "|";
		std::cout << std::setw(10) 
		<< ft_trunc_str(contact->ft_get_first_name()) << "|";
		std::cout << std::setw(10) 
		<< ft_trunc_str(contact->ft_get_last_name()) << "|";
		std::cout << std::setw(10) 
		<< ft_trunc_str(contact->ft_get_nickname()) << "|\n";
		index++;
	}
	if (index > 0)
		std::cout << "+-------------------------------------------+\n";
}

std::string	PhoneBook::ft_trunc_str(std::string str)
{
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + ".");
}