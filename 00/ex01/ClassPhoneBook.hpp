/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:28:19 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/23 12:46:40 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

class   PhoneBook
{
    public:
        PhoneBook(void);
        PhoneBook(const Phonebook &phonebook);
        ~PhoneBook(void);

        PhoneBook   &operator=(const PhoneBook &phonebook);
        void        ft_set_contact(void);
        void        ft_get_contact()

    private:
        Contact contact[MAX];
};