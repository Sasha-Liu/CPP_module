/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:57:52 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/16 17:11:45 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>
#include <list>
#include <iostream>

#define NUM 5

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
	
	std::vector<int>	vec(input.begin(), input.end());
	std::list<int>		lst(input.begin(), input.end());
	
	std::cout << "Before: " << vec << std::endl;
	
	pm.sort_and_timed(lst);
	pm.sort_and_timed(vec);
	
	std::cout << "After: " << vec << std::endl;	

}