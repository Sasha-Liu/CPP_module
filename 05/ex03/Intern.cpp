/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:58:30 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 14:45:48 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

class	Intern::FormNotExistException : public std::logic_error
{
	public:
		FormNotExistException(void) :logic_error("Form does not exist") {};
		FormNotExistException(std::string const &error) :logic_error(error) {};
};

Intern::Intern(void) {}
Intern::~Intern(void) {}
		
AForm	*Intern::makeForm(std::string const &name, std::string const &target) const
{
	int			index;
	std::string	form[3]
		= {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	index = -1;
	for (int i = 0; i < 3; i++)
	{
		if (form[i] == name)
			index = i;
	}
	switch (index)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			throw FormNotExistException("Form doesn't exist: <" + name + ">");
	}
}
