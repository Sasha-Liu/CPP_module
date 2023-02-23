/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:43:35 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/23 11:10:54 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype.h>

int	main(int argc, char **argv)
{
	if (argc == 0)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	
}

void	ft_str_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = 
	}
}

char	my_toupper(char ch)
{
	return static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
}