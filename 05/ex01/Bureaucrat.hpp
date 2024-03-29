/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:10:49 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/05 11:55:30 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <stdexcept>
# include <iostream> 
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &john);
		Bureaucrat(std::string const &name, int grade);
		~Bureaucrat(void);

		Bureaucrat			&operator=(Bureaucrat const &john);
		std::string const	&getName(void) const;
		int					getGrade(void) const;
		void				setGrade(int grade);
		void				promote(void);
		void				demote(void);
		
		void	signForm(Form &form) const;

		class GradeTooHighException;
		class GradeTooLowException;
		
	private:
		std::string const	_name;
		int					_grade;
};

std::ostream		&operator<<(std::ostream &out, Bureaucrat const &john);

#endif