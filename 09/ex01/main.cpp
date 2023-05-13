/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:50:41 by sasha             #+#    #+#             */
/*   Updated: 2023/05/13 11:32:14 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN	rpn;

	if (argc != 2)
	{
		std::cout << "Example: ./RPN \"2 3 +\"" << std::endl;
		return (0);
	}
	if (!rpn.calculator(argv[1]))
	{
		std::cout << "Error" << std::endl;
	}
}