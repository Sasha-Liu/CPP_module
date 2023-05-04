/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:38:47 by sasha             #+#    #+#             */
/*   Updated: 2023/05/04 21:28:38 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &form);
		~PresidentialPardonForm(void);
		
		void	beExecuted(void) const;
		std::string const	&getTarget(void) const;
		void				setTarget(std::string const &target);

	private:
		std::string	_target;
		
		PresidentialPardonForm(void);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &form);
};

#endif