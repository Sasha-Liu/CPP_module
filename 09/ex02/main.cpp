/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:57:52 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/16 21:30:53 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>
#include <list>
#include <iostream>

int main(int argc, char **argv)
{
	PmergeMe			pm;
	std::vector<int>	input;
	
	if (argc == 1)
	{
		std::cout << "Please enter some number" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		input.push_back(atoi(argv[i]));
	}
	pm.sort_and_timed(input);
}