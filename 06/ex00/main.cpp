/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:57:56 by sasha             #+#    #+#             */
/*   Updated: 2023/05/08 11:56:50 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.Class.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	ScalarConverter	conv;
	std::string		str;
	
	if (argc != 2)
	{
		std::cout << "Usage: ./conv string" << std::endl;
		return (0);
	}
	str = argv[1];
	conv.convert(str);
}