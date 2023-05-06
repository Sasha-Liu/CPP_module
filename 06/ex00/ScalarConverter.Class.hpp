/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:36 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/06 13:51:58 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_HPP
# define SCALARCONVERTER_CLASS_HPP

# include <string>
# include <stdexcept>
# include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter(void);
		~ScalarConverter(void);
		
		static void	convert(std::string const &s);
		// class	convertException;
	
	private:		
		static bool	isChar(std::string const &s);
		static bool	isInt(std::string const &s);
		static bool	isFloat(std::string const &s);
		static bool	isDouble(std::string const &s);

		// static char		toChar(std::string const &s) const;
		// static int		toInt(std::string const &s) const;
		// static float	toFloat(std::string const &s) const;
		// static double	toDouble(std::string const &s) const;

		ScalarConverter	&operator=(ScalarConverter const &conv);
		ScalarConverter(ScalarConverter const &conv);
};

#endif