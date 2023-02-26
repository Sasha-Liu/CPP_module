/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:28:15 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/26 16:43:37 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void):
    _next(0)
{
}

PhoneBook::PhoneBook(PhoneBook const &phonebook):
    _next(phonebook._next)
{
    for(int i = 0; i < MAX; i++)
        this->_contact[i] = phonebook._contact[i];
}

PhoneBook::~PhoneBook(void)
{	
}

PhoneBook   &PhoneBook::operator=(PhoneBook const &phonebook)
{
	this->_next = phonebook._next;
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
}

Contact const	*PhoneBook::ft_get_contact(int index) const
{
	if (index < 0 || index >= this->_next)
		return (NULL);
	return (&(this->_contact[index]));
}

void	PhoneBook::ft_display(void) const
{
	Contact	const		*contact;
	int					index;

	index = 0;
	std::cout << std::setw(10);
	std::cout << "+-------------------------------------------+\n";
	std::cout << "|     index|First name| Last name|  Nickname|\n";
	std::cout << "+-------------------------------------------+\n";
	while (1)
	{
		contact = ft_get_contact(index);
		if (contact == NULL)
			break ;
		std::cout << "|" << std::setw(10) << index << "|";
		std::cout << std::setw(10) << contact->ft_get_first_name() << "|";
		std::cout << std::setw(10) << contact->ft_get_last_name() << "|";
		std::cout << std::setw(10) << contact->ft_get_nickname() << "|\n";
		index++;
	}
	if (index > 0)
		std::cout << "+-------------------------------------------+\n";
}
