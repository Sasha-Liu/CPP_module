/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:02:43 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 14:34:37 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class	Form::GradeTooHighException : public std::logic_error
{
	public:
		GradeTooHighException(void)
			:logic_error("EXECPTION: Grade too high") {}
			
		GradeTooHighException(std::string const &error)
			:logic_error(error) {}
};

class	Form::GradeTooLowException : public std::logic_error
{
	public:	
		GradeTooLowException(void)
			:logic_error("EXECPTION: Grade too low") {}
			
		GradeTooLowException(std::string const &error)
			:logic_error(error) {}
};

Form::Form(void)
	:_name("Form"), _signed(0), _sign_grade(1), _exec_grade(1) {}

Form::Form(Form const &form)
	:_name(form._name), _signed(form._signed),
	_sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {}

Form::Form(std::string const &name, int sign_grade, int exec_grade)
	:_name(name), _signed(0),
	_sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
}

Form::~Form(void) {}

std::string const	&Form::getName(void) const
{
	return (this->_name);
}

bool	Form::isSigned(void) const
{
	return (this->_signed);
}

int	Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	Form::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void	Form::beSigned(Bureaucrat const &john)
{
	if (this->_signed)
	{
		std::cout << "Form: <" << this->_name << "> is already signed\n";
		return ;
	}	
	if (john.getGrade() <= this->_sign_grade)
	{
		this->_signed = true;
		std::cout << "Form: <" << this->_name << "> is signed by "
			<< john.getName() << std::endl;
		return ;
	}
	throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	out << "Form:\n name: <" << form.getName() << ">\n";
	if (form.isSigned())
		out << " SIGNED\n";
	else
		out << " not signed\n";
	out << " require grade " << form.getSignGrade() << " to be signed\n";
	out << " require grade " << form.getExecGrade() << " to be executed\n";
	return (out);
}
