/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:31:07 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/23 13:37:11 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Contact	contact;

	contact.ft_set_first_name("John");
	contact.ft_set_last_name("Smith");
	std::cout << contact.ft_get_first_name() << std::endl;
	std::cout << contact.ft_get_last_name() << std::endl;
}