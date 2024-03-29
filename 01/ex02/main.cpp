/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:59:23 by sasha             #+#    #+#             */
/*   Updated: 2023/03/27 16:40:08 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address: \n";
	std::cout << "&str      : " << &str << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "&stringREF: " << &stringREF << std::endl;

	std::cout << "Value: \n";
	std::cout << "str       : " << str << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;

	std::cout << "\nreassign \"HI THIS IS BRIAN\" to string\n\n";
	str = "HI THIS IS BRIAN";
	
	std::cout << "Memory address: \n";
	std::cout << "&str      : " << &str << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "&stringREF: " << &stringREF << std::endl;

	std::cout << "Value: \n";
	std::cout << "str       : " << str << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	
}