/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:53:10 by sasha             #+#    #+#             */
/*   Updated: 2023/05/08 11:58:23 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.Class.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}
		
void	ScalarConverter::convert(std::string const &str)
{
	if (isFloat(str))
	{
		return (printFloat(strtod(str.c_str(), NULL)));
	}
	else if (isDouble(str))
	{
		return (printDouble(strtod(str.c_str(), NULL)));
	}
	else if (isInt(str))
	{
		return (printInt(static_cast<int>(strtol(str.c_str(), NULL, 10))));
	}
	else if (isChar(str))
	{
		return (printChar(*str.begin()));
	}
	else
		std::cout << "Inconvertible" << std::endl;
}

void	ScalarConverter::printChar(char c)
{
	int		i;
	float	f;
	double	d;
	
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

void	ScalarConverter::printInt(int i)
{
	char	c;
	float	f;
	double	d;
	
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

void 	ScalarConverter::printFloat(float f)
{
	char	c;
	int		i;
	double	d;
	
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d =  static_cast<double>(f);
	if (f < CHAR_MIN || f > CHAR_MAX || isnan(f))
		std::cout << "char: Impossible" << std::endl;
	else if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (f < INT_MIN || f > INT_MAX || isnan(f))
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (isinf(f) || isnan(f) || !noFract(f))
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: " << f << ".0f" << std::endl;
	if (isinf(f) || isnan(f) || !noFract(f))
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
}

void 	ScalarConverter::printDouble(double d)
{
	char	c;
	int		i;
	float	f;
	
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f =  static_cast<float>(d);
	if (d < CHAR_MIN || d > CHAR_MAX || isnan(d))
		std::cout << "char: Impossible" << std::endl;
	else if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (d < INT_MIN || d > INT_MAX || isnan(d))
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if ((abs(d) < FLT_MIN || abs(d) > FLT_MAX) && !isinf(d) && !isnan(d) && d)
		std::cout << "float: Impossible" << std::endl;
	else if (isinf(d) || isnan(d) || !noFract(d))
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: " << f << ".0f" << std::endl;
	if (isinf(d) || isnan(d) || !noFract(d))
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
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

bool	ScalarConverter::noFract(double d)
{
	return (d == rint(d));
}
