/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:41:10 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/23 13:41:59 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/*
	A contact cannot have empty field 
*/
class   Contact
{
	public:
		Contact(void);
		Contact(Contact const &contact);
		~Contact(void);

		void		ft_set_first_name(std::string first_name);
		std::string	ft_get_first_name(void) const;
		void		ft_set_last_name(std::string last_name);
		std::string	ft_get_last_name(void) const;
		void		ft_set_nickname(std::string nickname);
		std::string	ft_get_nickname(void) const;
		void		ft_set_phone_number(std::string phone_number);
		std::string	ft_get_phone_number(void) const;
		void		ft_set_dark_secret(std::string dark_secret);
		std::string	ft_get_dark_secret(void) const;

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	dark_secret;
		static int	count;
};
