/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:53:10 by sasha             #+#    #+#             */
/*   Updated: 2023/05/08 10:07:32 by sasha            ###   ########.fr       */
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
		std::cout << "char: '" << c << "'" << std::endl;
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
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "char: Impossible" << std::endl;		
	else if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;		
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

//to be mod
void 	ScalarConverter::printFloat(std::string const &str)
{
	char	c;
	int		i;
	float	f;
	double	d;
	
	f = static_cast<float>(strtod(str.c_str(), NULL));
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d =  static_cast<double>(f);
	if (f < CHAR_MIN || f > CHAR_MAX)
		std::cout << "char: Impossible" << std::endl;
	else if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (f < INT_MIN || f > INT_MAX || /*not a number*/)
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (is_pseudo_f(str) || !noFract(str))
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: " << f << ".0f" << std::endl;
	if (is_pseudo_f(str) || !noFract(str))
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
}

//to be mod
void 	ScalarConverter::printDouble(std::string const &str)
{
	char	c;
	int		i;
	float	f;
	double	d;

	d = strtod(str.c_str(), NULL);
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	if (f < CHAR_MIN || f > CHAR_MAX)
		std::cout << "char: Impossible" << std::endl;
	else if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (f < INT_MIN|| f > INT_MAX)
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (is_pseudo_f(str) || !noFract(str))
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: " << f << ".0f" << std::endl;
	if (is_pseudo_f(str) || !noFract(str))
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
}

bool	ScalarConverter::isFloat(std::string str)
{
	std::string::iterator	i;
	
	if (is_pseudo_f(str))
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
	
	if (is_pseudo_d(str))
		return (true);
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

bool	ScalarConverter::is_pseudo_f(std::string str)
{
	if (str == "inff" || str == "+inff" || str == "-inff" || str == "nanf"
		|| str == "INFF" || str == "+INFF" || str == "-INFF" || str == "NANF")
	{
		return (true);
	}
	return (false);
}

bool	ScalarConverter::is_pseudo_d(std::string str)
{
	if (str == "inf" || str == "+inf" || str == "-inf" || str == "nan"
		|| str == "INF" || str == "+INF" || str == "-INF" || str == "NAN")
	{
		return (true);
	}
	return (false);
}

bool	ScalarConverter::noFract(std::string str)
{
	double	d;
	int		i;
	
	d = strtod(str.c_str(), NULL);
	i = static_cast<int>(d);
	if (d == static_cast<double>(i))
		return (true);
	return (false);
}
