/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:28:19 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/24 15:01:22 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

    private:
        Contact	_contact[MAX];
        int		_next;
};
