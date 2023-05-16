/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:57:52 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/16 16:30:42 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>
#include <list>
#include <iostream>

void	print_vec(std::vector<int> const &vec)
{
	for (std::vector<int>::const_iterator i = vec.begin(); i != vec.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

void	print_lst(std::list<int> const &lst)
{
	for (std::list<int>::const_iterator i = lst.begin(); i != lst.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

int main(void)
{
	PmergeMe	pm;
	int			a[20];
	
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		a[i] = rand() % 100;
	}
	
	std::vector<int>	vec(a, a + 20);
	std::list<int>		lst(a, a + 20);
	
	std::cout << "vec: ";
	print_vec(vec);
	std::cout << "lst: ";
	print_lst(lst);

	pm.merge_insert(vec);
	pm.merge_insert(lst);
	
	std::cout << "vec: ";
	print_vec(vec);
	std::cout << "lst: ";
	print_lst(lst);
}