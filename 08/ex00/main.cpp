/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:16:39 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/11 13:38:58 by hsliu            ###   ########.fr       */
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
	
	std::vector<int>		tab1(tab, tab + 10);
	std::deque<int>			tab2(tab, tab + 10);
	std::list<int>			tab3(tab, tab + 10);
	
	std::cout << *(easyfind(tab1, 9)) << std::endl;
	std::cout << *(easyfind(tab2, 8)) << std::endl;
	std::cout << *(easyfind(tab3, 7)) << std::endl;
	if (easyfind(tab1, -1) == tab1.end())
		std::cout << "Not found" << std::endl;
} 