/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:02:45 by sasha             #+#    #+#             */
/*   Updated: 2023/05/04 19:44:05 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	:_name("ShrubberyCreationForm"), _signed(false),
		_sign_grade(145), _exec_grade(137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form)
	:_name(form._name), _signed(form._signed),
		_sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

/*	name is contant and not copied	*/
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form)
{
	this->_signed = form._signed;
	this->_sign_grade = form._sign_grade;
	this->_exec_grade = form._exec_grade;
	return (*this);
}

void	ShrubberyCreationForm::beExecuted(std::string const &target) const
{
	std::string		file;
	std::ofstream	out;

	file = target + "_shrubbery";
	out.open(file.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!out)
	{
		std::err << file << " cannot be opened" << std::endl;
		return ;
	}
	out << "             ++++                         " << std::endl;
	out << "  *      +++++++++++++                    " << std::endl;
	out << "    +++++++++++++++++++++++               " << std::endl;
	out << "  ++++###+++###++++++++++++++             " << std::endl;	
	out << "    +++####/++++##+++/###+                " << std::endl;
	out << "      ++++++++######\ /##++               " << std::endl;
	out << "    ++++############//#++       *         " << std::endl;
	out << "   +++++++\ /###\\//##+++++               " << std::endl;
	out << "  +++###+++\\###//#++++++                 " << std::endl;
	out << "    +++++++ \\+//+++      *  +===========+" << std::endl;
	out << "   *         \\\\            | shruberry |" << std::endl;
	out << "              \\\\           +===========+" << std::endl;
	out << "      *       ////       *        ||      " << std::endl;
	out << "  *          //\\\    *        *  ||      " << std::endl;
	out << "    MMMMMMMM//. .\\\MMMMMMMMMMMMMMMMMMMM  " << std::endl;
	out << "       MMMMMMMMMMMMMMMMMMMMMMM            " << std::endl;
	out.close();
}