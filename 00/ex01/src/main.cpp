/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:31:07 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/26 16:24:03 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	my_phonebook;
	Contact		my_contact;
	std::string	input;
	
	ft_welcome_message();
	std::cout << "phonebook> ";
	while (std::getline(std::cin, input, '\n'))
	{
		if (input.compare("ADD") == 0)
		{
			ft_fillout(my_contact);
			my_phonebook.ft_set_contact(my_contact);
		}
		else if (input.compare("SEARCH") == 0)
		{
			my_phonebook.ft_display();
			//show all contact
			//prompt for index
			//display all field
		}
		else if (input.compare("EXIT") == 0)
		{
			ft_exit_message();
			exit(0);
		}
		else if (input.compare(""))
		{
			std::cout << "Stop messing around\n";
		}
		std::cout << "phonebook> ";
	}
	ft_exit_message();
}

void	ft_show_contact(PhoneBook &phonebook)
{
	int				index;
	Contact const	*contact;

	std::cout << "Please enter an index: ";
	ft_get_index(index);
	contact = phonebook.ft_get_contact(index);
	if (contact == NULL)
	{
		std::cout << "Contact not found\n";
		return ;
	}
	//show contact
	
}