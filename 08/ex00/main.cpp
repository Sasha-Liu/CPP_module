/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:16:39 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/11 14:38:31 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>
#include <vector>
#include <list>
#include <iostream>

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	std::vector<int>			tab1(tab, tab + 10);
	std::deque<int>				tab2(tab, tab + 10);
	std::list<int>				tab3(tab, tab + 10);

	std::vector<int>::const_iterator	it1 = easyfind(tab1, 0);
	std::deque<int>::const_iterator		it2 = easyfind(tab2, 1);
	std::list<int>::const_iterator		it3 = easyfind(tab3, 2);
	
	if (it1 != tab1.end())
		std::cout << *it1 << std::endl;
	if (it2 != tab2.end())
		std::cout << *it2 << std::endl;
	if (it3 != tab3.end())
		std::cout << *it3 << std::endl;
}