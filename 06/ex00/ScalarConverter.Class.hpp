/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:36 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 11:56:23 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_HPP
# define SCALARCONVERTER_CLASS_HPP

# include <string>
# include <iterator>
# include <iostream>
# include <cctype>
# include <cstdlib>
# include <climits>
# include <cmath>
# include <cfloat>

class ScalarConverter
{
	public:
		ScalarConverter(void);
		~ScalarConverter(void);
		
		static void	convert(std::string const &s);
	
	private:		
		static bool	isChar(std::string s);
		static bool	isInt(std::string s);
		static bool	isFloat(std::string s);
		static bool	isDouble(std::string s);

		static void	printChar(char c);
		static void	printInt(int i);
		static void printFloat(float f);
		static void printDouble(double d);

		static bool	my_isDigit(char c);
		static bool	noFract(double d);

		ScalarConverter	&operator=(ScalarConverter const &conv);
		ScalarConverter(ScalarConverter const &conv);
};

#endif