/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:35:29 by sasha             #+#    #+#             */
/*   Updated: 2023/05/05 12:50:11 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	:AForm("RobotomyRequestForm", 72, 45), _target(target) {}
	
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form)
	:AForm(form), _target(form._target) {} 

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void	RobotomyRequestForm::beExecuted(void) const
{
	int	random;

	srand(time(0));
	random = rand();
	if (random % 2)
	{
		std::cout << "ZZZZZzzzzZZZzzzzZZZzzzzzz" << std::endl << this->_target
		<< " is robotomized successfully ! Congratulation !" << std::endl;
	}
	else
	{
		std::cout << "[ ominous explosion and shierk ]"
		<< std::endl
		<< "I'm sorry to inform you, but the robotomization of " << this->_target
		<< "had failed" << std::endl;	
	}
}

std::string const	&RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::setTarget(std::string const &target)
{
	this->_target = target;
}