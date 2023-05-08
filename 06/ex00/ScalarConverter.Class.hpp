/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:36 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 10:07:14 by sasha            ###   ########.fr       */
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

		static void	printChar(std::string const &s);
		static void	printInt(std::string const &s);
		static void printFloat(std::string const &s);
		static void printDouble(std::string const &s);

		static bool	my_isDigit(char c);
		static bool	is_pseudo_f(std::string str);
		static bool	is_pseudo_d(std::string str);
		static bool	noFract(std::string str);

		ScalarConverter	&operator=(ScalarConverter const &conv);
		ScalarConverter(ScalarConverter const &conv);
};

#endif