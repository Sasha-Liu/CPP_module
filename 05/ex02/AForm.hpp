/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:04:24 by sasha             #+#    #+#             */
/*   Updated: 2023/05/04 13:11:55 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <stdexcept>
# include <iostream>
# include <string>

class AForm
{
	public:
		AForm(void);
		AForm(AForm const &form);
		AForm(std::string const &name, int sign_grade, int exec_grade);
		~AForm(void);

		AForm				&operator=(AForm const &form);
		std::string const	&getName(void) const;
		bool				isSigned(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		void				beSigned(Bureaucrat const &john);
		
		void				execute(Bureaucrat const &executor) const;
		virtual void		beExecuted(std::string const &tartget) const = 0;

		class	GradeTooHighException;
		class	GradeTooLowException;
		class	FormNotSigned;

	private:
		std::string const	_name;
		bool				_signed;
		int					_sign_grade;
		int					_exec_grade;
};

std::ostream	&operator<<(std::ostream &out, AForm const &form);

#endif