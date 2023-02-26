/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:30:59 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/26 18:13:02 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# ifndef MAX
#  define MAX 8
# endif

# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>
# include <stdlib.h>
# include <limits>
# include "ClassContact.hpp"
# include "ClassPhoneBook.hpp"

/*	utils.cpp	*/
bool	ft_is_phone_number(std::string str);
bool	ft_is_name(std::string str);
bool	my_isdigit(char c);
bool	my_isalpha(char c);
void    ft_get_input(std::string &input);
void	ft_get_index(int &index);

/*	main_func.cpp	*/
void	ft_show_contact(PhoneBook &phonebook);
void	ft_exit_message(void);
void    ft_welcome_message(void);
void	ft_fillout(Contact &contact);
#endif