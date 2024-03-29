/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:02:43 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 14:38:38 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class	AForm::GradeTooHighException : public std::logic_error
{
	public:
		GradeTooHighException(void)
			:logic_error("EXECPTION: Grade too high") {}
			
		GradeTooHighException(std::string const &error)
			:logic_error(error) {}
};

class	AForm::GradeTooLowException : public std::logic_error
{
	public:	
		GradeTooLowException(void)
			:logic_error("EXECPTION: Grade too low") {}
			
		GradeTooLowException(std::string const &error)
			:logic_error(error) {}
};

class	AForm::FormNotSignedException : public std::logic_error
{
	public:	
		FormNotSignedException(void)
			:logic_error("EXECPTION: Form unsigned") {}
			
		FormNotSignedException(std::string const &error)
			:logic_error(error) {}
};

AForm::AForm(void)
	:_name("AForm"), _signed(0), _sign_grade(1), _exec_grade(1) {}

AForm::AForm(AForm const &form)
	:_name(form._name), _signed(form._signed),
	_sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {}

AForm::AForm(std::string const &name, int sign_grade, int exec_grade)
	:_name(name), _signed(0),
	_sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
}

AForm::~AForm(void) {}

std::string const	&AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::isSigned(void) const
{
	return (this->_signed);
}

int	AForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	AForm::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void	AForm::beSigned(Bureaucrat const &john)
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

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->_signed)
	{
		throw FormNotSignedException();
	}
	if (executor.getGrade() > this->_exec_grade)
	{
		throw GradeTooLowException();
	}
	this->beExecuted();
}


std::ostream	&operator<<(std::ostream &out, AForm const &form)
{
	out << "AForm:\n name: <" << form.getName() << ">\n";
	if (form.isSigned())
		out << " SIGNED\n";
	else
		out << " not signed\n";
	out << " require grade " << form.getSignGrade() << " to be signed\n";
	out << " require grade " << form.getExecGrade() << " to be executed\n";
	return (out);
}
