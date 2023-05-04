/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:54:15 by sasha             #+#    #+#             */
/*   Updated: 2023/05/04 21:25:55 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	:AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form)
	:AForm(form), _target(form._target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {};
		
void	PresidentialPardonForm::beExecuted(void) const
{
	std::cout << this->_target
		<< " is pardonned by his Majesty the President Zaphod Beeblebrox"
		<< std::endl;
}

std::string const	&PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::setTarget(std::string const &target)
{
	this->_target = target;
}