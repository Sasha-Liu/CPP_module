/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:33:16 by sasha             #+#    #+#             */
/*   Updated: 2023/05/15 14:58:30 by sasha            ###   ########.fr       */
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
	bc.read_data();
	bc.process(argv[1]);

	
}