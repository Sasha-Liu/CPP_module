/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:25:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/06 11:18:30 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat				john("John", 1);
	Bureaucrat				akaky;
	
	std::cout << john << akaky << std::endl;
	
	/*	berry tree test	*/
	std::cout << "######   berry tree test   ######" << std::endl;
	ShrubberyCreationForm	form1("home");
	ShrubberyCreationForm	form2(form1);

	john.signForm(form1);
	john.executeForm(form1);
		
	akaky.executeForm(form2);
	john.signForm(form2);
	akaky.executeForm(form2);
	
	/*	pardoned test	*/
	std::cout << "######   pardon test   ######" << std::endl;
	PresidentialPardonForm	form3("Jack");
	PresidentialPardonForm	form4(form3);

	john.signForm(form3);
	akaky.signForm(form4);
	
	john.executeForm(form3);
	akaky.executeForm(form4);
	
	john.signForm(form4);
	akaky.executeForm(form4);
	
	/*	robot test	*/
	std::cout << "######   robot test   ######" << std::endl;
	RobotomyRequestForm	form5("Joe");
	RobotomyRequestForm	form6(form5);

	std::cout << form5 << form6 << john;

	john.signForm(form5);
	akaky.signForm(form6);
	
	john.executeForm(form5);
	akaky.executeForm(form6);
	
	john.signForm(form6);
	akaky.executeForm(form6);
}