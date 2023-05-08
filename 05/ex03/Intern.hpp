/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:58:24 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 14:39:48 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# include <string>

 
class AForm;

class Intern
{
	public:	
		Intern(void);
		~Intern(void);
		
		AForm	*makeForm(std::string const &name, std::string const &target) const;
		
		class	FormNotExistException;
	
	private:
		Intern(Intern const &mike);
		Intern	&operator=(Intern const &mike);
};


#endif