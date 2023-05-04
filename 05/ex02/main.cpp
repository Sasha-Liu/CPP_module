/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:25:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/04 21:49:41 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	/*	berry tree test	*/
	
	ShrubberyCreationForm	form1("home");
	ShrubberyCreationForm	form2(form1);
	// ShrubberyCreationForm	form3;
	
	Bureaucrat				john("John", 1);
	Bureaucrat				akaky;

	std::cout << form1 << form2 << john;
	//form1 = form2; //operator = is private

	form1.beSigned(john);
	try {
		form2.beSigned(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << form1;
	
	form1.execute(john);
	try {
		form2.execute(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	form2.beSigned(john);
	try {
		form2.execute(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	/*	pardoned test	*/
	std::cout << "######   pardon test   ######" << std::endl;
	PresidentialPardonForm	form3("Jack");
	PresidentialPardonForm	form4(form3);

	std::cout << form3 << form4 << john;

	form3.beSigned(john);
	try {
		form4.beSigned(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << form3;
	
	form3.execute(john);
	try {
		form4.execute(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	form4.beSigned(john);
	try {
		form4.execute(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
		
	/*	robot test	*/
	std::cout << "######   robot test   ######" << std::endl;
	RobotomyRequestForm	form5("Joe");
	RobotomyRequestForm	form6(form5);

	std::cout << form5 << form6 << john;

	form5.beSigned(john);
	try {
		form6.beSigned(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << form5;
	
	form5.execute(john);
	try {
		form6.execute(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	form6.beSigned(john);
	try {
		form6.execute(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}