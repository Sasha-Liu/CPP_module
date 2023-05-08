/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:25:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 14:44:03 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	AForm		*form;
	Bureaucrat	john("John", 1);
	Intern		mike;
	
	form = mike.makeForm("shrubbery creation", "park");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	
	form = mike.makeForm("robotomy request", "bender");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	
	form = mike.makeForm("presidential pardon", "mike");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	
	
	try {
		form = mike.makeForm("NON exist", "park");
		john.signForm(*form);
		john.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}		
}