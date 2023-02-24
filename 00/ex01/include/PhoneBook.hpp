/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:30:59 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/24 15:53:19 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# ifndef MAX
#  define MAX 8
# endif

# include <string>
# include <iostream>
# include <cctype>
# include "ClassContact.hpp"
# include "ClassPhoneBook.hpp"

bool	ft_is_phone_number(std::string str);
bool	ft_is_name(std::string str);
bool	my_isdigit(char c);
bool	my_isalpha(char c);

#endif