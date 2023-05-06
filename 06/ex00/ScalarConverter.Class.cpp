/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:53:10 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 13:58:03 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.Class.hpp"

// class	ScalarConverter::convertException : public runtime_error
// {
// 	public:
// 		convertException(void) :runtime_error("bad_convert") {}
// 		convertException(std::string const &error)
// 			:runtime_error(error) {}
// };

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}
		
void	ScalarConverter::convert(std::string const &s)
{
	if (isFloat(s))
	{
		std::cout << "float" << std::endl;
		return ;
	}
	if (isDouble(s))
	{
		std::cout << "double" << std::endl;
		return ;
	}
	if (isInt(s))
	{
		std::cout << "int" << std::endl;
		return ;
	}
	if (isChar(s))
	{
		std::cout << "char" << std::endl;
		return ;
	}
	std::cout << "Convert fails" << std::endl;
}

bool	ScalarConverter::isFloat(std::string const &s)
{
	if (s == "inff" || s == "+inff" || s == "-inff" || s == "nanf"
			|| s == "INFF" || s == "+INFF" || s == "-INFF" || s == "NANF")
	{
		return (true);
	}
	if (s.find(".") != std::string::npos
		&& s.find("f") != std::string::npos)
	{
		try {
			std::strtof(s);
		}
		catch (std::exception &e)
		{
			return (false);
		}
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
	if (s.find(".") != std::string::npos
		&& s.find("f") == std::string::npos)
	{
		try {
			std::strtod(s);
		}
		catch (std::exception &e)
		{
			return (false);
		}
		return (true);
	}
	return (false);
}

bool	ScalarConverter::isInt(std::string const &s)
{
	if (s.find(".") == std::string::npos
		&& s.find("f") == std::string::npos)
	{
		try {
			std::strtoi(s, 10);
		}
		catch (std::exception &e)
		{
			return (false);
		}
		return (true);
	}
	return (false);
}
			
bool	ScalarConverter::isChar(std::string const &s)
{
	if (s != "")
		return (true);
	return (false);
}
