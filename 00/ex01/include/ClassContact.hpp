/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:41:10 by hsliu             #+#    #+#             */
/*   Updated: 2023/03/02 22:07:00 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

/*
	A contact cannot have empty field 
*/
class   Contact
{
	public:
		Contact(void);
		Contact(Contact const &contact);
		~Contact(void);

		Contact		&operator=(Contact const &contact);

		int			ft_set_first_name(std::string first_name);
		std::string	ft_get_first_name(void) const;
		int			ft_set_last_name(std::string last_name);
		std::string	ft_get_last_name(void) const;
		int			ft_set_nickname(std::string nickname);
		std::string	ft_get_nickname(void) const;
		int			ft_set_phone_number(std::string phone_number);
		std::string	ft_get_phone_number(void) const;
		int			ft_set_dark_secret(std::string dark_secret);
		std::string	ft_get_dark_secret(void) const;

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_dark_secret;
		static int	_count;
};

#endif