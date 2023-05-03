/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:10:33 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/03 17:55:40 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <iostream>

int	main(void)
{
	Bureaucrat	akaky1;
	Bureaucrat	akaky2(akaky1);
	Bureaucrat	alice("Alice", 1);
	Bureaucrat	john("John", 1);
	
	std::cout << akaky1; 
	std::cout << akaky2; 
	std::cout << alice; 
	std::cout << john;

	akaky2.promote();
	alice.demote();
	john = alice;
	
	std::cout << akaky1; 
	std::cout << akaky2; 
	std::cout << alice; 
	std::cout << john;

	try{
		alice.setGrade(0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		alice.setGrade(151 );
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	nobody("Nobody", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	somebody("Somebody", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		alice.promote();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		akaky1.demote();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}