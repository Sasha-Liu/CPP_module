/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:04:24 by sasha             #+#    #+#             */
/*   Updated: 2023/05/03 18:23:09 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <stdexcept>
# include <iostream>
# include <string>

class Form
{
	public:
		Form(void);
		Form(Form const &form);
		Form(std::string name, int sign_grade, int exec_grade);
		~Form(void);

		Form				&operator=(Form const &form);
		std::string const	&getName(void) const;
		bool				isSigned(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		void				beSigned(Bureaucrat const &john);

		class	GradeTooHighException;
		class	GradeTooLowException;

	private:
		std::string const	_name;
		bool				_signed;
		int					_sign_grade;
		int					_exec_grade;
};

std::ostream	&operator<<(std::ostream &out, Form const &form);


#endif