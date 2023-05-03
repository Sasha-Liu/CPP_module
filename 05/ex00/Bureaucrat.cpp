/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:47:35 by sasha             #+#    #+#             */
/*   Updated: 2023/05/03 16:41:17 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
# include <exception>
# include <ostream> 

class Bureaucrat::GradeTooHighException : public std::exception {};
class Bureaucrat::GradeTooLowException : public std::exception {};

Bureaucrat::Bureaucrat(void)
	:_name("Akaky Akakievich Bashmachkin"), _grade(150) {};
	
Bureaucrat::Bureaucrat(Bureaucrat const &john)
	:_name(john._name), _grade(john._grade) {};


Bureaucrat::Bureaucrat(std::string const &name, int grade)
	:_name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}
	
Bureaucrat::~Bureaucrat(void) {};


/*	the name is not copied since it's constant	*/
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &john)
{
	this->_grade = john._grade;
	return (*this);
}

std::string const	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);	
}

void	Bureaucrat::setGrade(int grade)
{
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

void	Bureaucrat::promote(void)
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade++;
}

void	Bureaucrat::demote(void)
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade--;
}

std::ostream		&operator<<(std::ostream &out, Bureaucrat const &john)
{
	out << john.getName() << ", bureaucrat grade " << john.getGrade() << "\n";
	return (out);
}