/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:10:49 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/03 17:24:53 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <stdexcept>
# include <ostream> 
# include <string>

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

		class GradeTooHighException;
		class GradeTooLowException;
		
	private:
		std::string const	_name;
		int					_grade;
};

std::ostream		&operator<<(std::ostream &out, Bureaucrat const &john);

#endif