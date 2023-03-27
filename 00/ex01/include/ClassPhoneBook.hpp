/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:28:19 by hsliu             #+#    #+#             */
/*   Updated: 2023/03/27 16:26:06 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#ifndef CLASSPHONEBOOK_H
# define CLASSPHONEBOOK_H

class   Contact;

class   PhoneBook
{
    public:
        PhoneBook(void);
        PhoneBook(PhoneBook const &phonebook);
        ~PhoneBook(void);

        PhoneBook		&operator=(PhoneBook const &phonebook);
        
        void			ft_set_contact(Contact const &contact);
        Contact const	*ft_get_contact(int index) const;

		void			ft_display(void) const;

    private:
        Contact	_contact[MAX];
        int		_next;
		int		_count;
		static	std::string	ft_trunc_str(std::string str);
};

#endif