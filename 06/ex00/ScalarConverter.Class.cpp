/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:53:10 by sasha             #+#    #+#             */
/*   Updated: 2023/05/07 16:22:54 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.Class.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}
		
void	ScalarConverter::convert(std::string const &str)
{
	if (isFloat(str))
	{
		std::cout << "float" << std::endl;
		return (printFloat(str));
	}
	else if (isDouble(str))
	{
		std::cout << "double" << std::endl;
		return (printDouble(str));
	}
	else if (isInt(str))
	{
		std::cout << "int" << std::endl;
		return (printInt(str));
	}
	else if (isChar(str))
	{
		std::cout << "char" << std::endl;
		return (printChar(str));
	}	
	else
		std::cout << "Inconvertible" << std::endl;
}

void	ScalarConverter::printChar(std::string const &str)
{
	char	c;
	int		i;
	float	f;
	double	d;
	
	c = *str.begin();
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;		
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void	ScalarConverter::printInt(std::string const &str)
{
	char	c;
	int		i;
	float	f;
	double	d;
	
	i = static_cast<int>(strtol(str.c_str(), NULL, 10));
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;		
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

//to be mod
void 	ScalarConverter::printFloat(std::string const &s)
{
	float	x;
	char	c;

	x = static_cast<float>(strtod(s.c_str(), NULL));
	c = static_cast<char>(x);
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;		
	std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << x << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << std::endl;
}

//to be mod
void 	ScalarConverter::printDouble(std::string const &s)
{
	double	x;
	char	c;

	x = strtod(s.c_str(), NULL);
	c = static_cast<char>(x);
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;		
	std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << x << "f" << std::endl;
	std::cout << "double: " << x << std::endl;
}

bool	ScalarConverter::isFloat(std::string str)
{
	std::string::iterator	i;
	
	if (str == "inff" || str == "+inff" || str == "-inff" || str == "nanf"
		|| str == "INFF" || str == "+INFF" || str == "-INFF" || str == "NANF")
	{
		return (true);
	}
	i = str.begin();
	while (std::isspace(*i))
		i++;
	if (*i == '+' || *i == '-')
		i++;
	if (!my_isDigit(*i))
		return (false);
	while (my_isDigit(*i))
		i++;
	if (*i != '.')
		return (false);
	i++;
	if (!my_isDigit(*i))
		return (false);
	while (my_isDigit(*i))
		i++;
	if (*i != 'f')
		return (false);
	return (true);
}

bool	ScalarConverter::isDouble(std::string str)
{
	std::string::iterator	i;
	
	if (str == "inf" || str == "+inf" || str == "-inf" || str == "nan"
		|| str == "INF" || str == "+INF" || str == "-INF" || str == "NAN")
	{
		return (true);
	}
	i = str.begin();
	while (std::isspace(*i))
		i++;
	if (*i == '+' || *i == '-')
		i++;
	if (!my_isDigit(*i))
		return (false);
	while (my_isDigit(*i))
		i++;
	if (*i != '.')
		return (false);
	i++;
	if (!my_isDigit(*i))
		return (false);
	return (true);
}

bool	ScalarConverter::isInt(std::string str)
{
	std::string::iterator	i;
	
	i  = str.begin();
	while (std::isspace(*i))
		i++;
	if (*i == '+' || *i == '-')
	{
		i++;
	}
	if (!my_isDigit(*i))
		return (false);
	return (true);
}
			
bool	ScalarConverter::isChar(std::string str)
{
	if (str.size() != 1)
	{
		return (false);
	}
	if (!my_isDigit(*str.begin()))
	{
		return (true);
	}
	return (false);
}

bool	ScalarConverter::my_isDigit(char c)
{
	return (std::isdigit(static_cast<unsigned char>(c)));
}

