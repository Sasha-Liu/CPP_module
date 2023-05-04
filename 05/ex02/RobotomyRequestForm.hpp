/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:32:14 by sasha             #+#    #+#             */
/*   Updated: 2023/05/04 21:47:14 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(RobotomyRequestForm const &form);
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm(void);

		void				beExecuted(void) const;
		std::string const	&getTarget(void) const;
		void				setTarget(std::string const &target);

	private:
		std::string		_target;

		RobotomyRequestForm(void);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &form);
};

#endif