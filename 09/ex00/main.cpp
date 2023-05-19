/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:33:16 by sasha             #+#    #+#             */
/*   Updated: 2023/05/19 11:10:49 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	BitcoinExchange		bc;

	if (argc != 2)
	{
		std::cout << "need input file" << std::endl;
		return (0);
	}
	if (!bc.read_data())
	{
		return (0);
	}
	bc.process(argv[1]);
}