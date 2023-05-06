/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:53:10 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 21:41:02 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.Class.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}
		
void	ScalarConverter::convert(std::string const &s)
{
	std::cout << s << std::endl;
}

bool	ScalarConverter::isFloat(std::string const &s)
{
	if (s == "inff" || s == "+inff" || s == "-inff" || s == "nanf"
			|| s == "INFF" || s == "+INFF" || s == "-INFF" || s == "NANF")
	{
		return (true);
	}
	
	
	
	return (false);
}

bool	ScalarConverter::isDouble(std::string const &s)
{
	if (s == "inf" || s == "+inf" || s == "-inf" || s == "nan"
			|| s == "INF" || s == "+INF" || s == "-INF" || s == "NAN")
	{
		return (true);
	}
	

	
	return (false);
}

bool	ScalarConverter::isInt(std::string const &s)
{
	for (std::string::iterator it = str.begin(); it != str.end(); it++)
	{
		if (!my_isDigit(*it))
			return (false);
	}
	return (true);
}
			
bool	ScalarConverter::isChar(std::string const &s)
{
	char	c;
	
	c = *(s.c_str());
	if (!my_isDigit(c) && s.size() == 1)
		return (true);
	return (false);
}

bool	ScalarConverter::my_isDigit(char c)
{
	return (std::isdigit(static_cast<unsigned char>(c)));
}

