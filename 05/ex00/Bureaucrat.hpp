/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:10:49 by hsliu             #+#    #+#             */
/*   Updated: 2023/04/27 13:15:38 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &john);
		~Bureaucrat(void);

		Bureaucrat			&operator=(Bureaucrat const &john);
		std::string const	&getName(void) const;
		int					getGrade(void) const;
		void				setGrade(int grade);
		
	private:
		std::string const	_name;
		int					_grade;
};

#endif