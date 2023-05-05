/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:25:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/05 12:45:06 by hsliu            ###   ########.fr       */
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
	
	Bureaucrat				john("John", 1);
	Bureaucrat				akaky;

	std::cout << form1 << form2 << john << std::endl;

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

	john.signForm(form5);
	try {
		akaky.signForm(form6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << form5;
	
	john.executeForm(form5);
	try {
		akaky.executeForm(form6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	john.signForm(form6);
	try {
		akaky.executeForm(form6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}