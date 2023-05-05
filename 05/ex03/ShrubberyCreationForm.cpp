/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:02:45 by sasha             #+#    #+#             */
/*   Updated: 2023/05/05 12:55:30 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	:AForm("ShrubberyCreationForm", 145, 137), _target("NA") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	:AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form)
	:AForm(form), _target(form._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

/*	operator= is not defined, not used, and private,
	hence unreachable from outside the class, since
	copying a shruberry form is meaningless */

std::string const	&ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void		ShrubberyCreationForm::setTarget(std::string const &target)
{
	this->_target = target;
}

void	ShrubberyCreationForm::beExecuted(void) const
{
	std::string		file;
	std::ofstream	out;

	file = this->_target + "_shrubbery";
	out.open(file.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!out)
	{
		std::cerr << file << " cannot be opened" << std::endl;
		return ;
	}
	out << "             ++++++++++                         " << std::endl;
	out << "  *      +++++++++++++++++++             *      " << std::endl;
	out << "    +++++++++++++++++++++++++++++               " << std::endl;
	out << "  ++++++++###+++###++++++++++++++++             " << std::endl;	
	out << "    +++++++####/++++##+++/###+++              * " << std::endl;
	out << "      ++++++++++++######|/##+++++               " << std::endl;
	out << "    ++++++++###########//+#++++       *         " << std::endl;
	out << "   +++++++++++| /###\\\\//##+++++++               " << std::endl;
	out << "  +++++++###+++\\\\###//#++++++++                 " << std::endl;
	out << "       +|+++|++ \\\\+//+++++      *  +===========+" << std::endl;
	out << "   *    |   |    \\\\\\\\              | shruberry |" << std::endl;
	out << "        |   |     \\\\\\\\             +===========+" << std::endl;
	out << "      * |===|     /|||          *       ||      " << std::endl;
	out << "  *              //\\\\\\\\      *       *  ||      " << std::endl;
	out << "    MMMMMMMMMMMM//. .\\\\MMMMMMMMMMMMMMMMMMMMMMM  " << std::endl;
	out << "           MMMMMMMMMMMMMMMMMMMMMMMMM            " << std::endl;
	out.close();
}