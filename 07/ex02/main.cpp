/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:00:40 by sasha             #+#    #+#             */
/*   Updated: 2023/05/09 11:42:21 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Array<int>		tab1;
	Array<char>		tab2(10);
	Array<double>	tab3(15);

	std::cout << "### Array upon creation ###" << std::endl;
	std::cout << "tab1: " << tab1 << "tab2: " << tab2
			<< "tab3: " << tab3 << std::endl;

	for (size_t i = 0; i < tab1.getSize(); i++)
		tab1[i] = i;
	for (size_t i = 0; i < tab2.getSize(); i++)
		tab2[i] = i + 'A';
	for (size_t i = 0; i < tab3.getSize(); i++)
		tab3[i] = i + 0.02;
		
	std::cout << "### Array after modfied with operator[] ###" << std::endl;
	std::cout << "tab1: " << tab1 << "tab2: " << tab2
			<< "tab3: " << tab3 << std::endl;
	
	std::cout << "### check deep copy ###" << std::endl;	
	Array<char>		tab4(tab2);
	
	std::cout << "tab2: " << tab2 << "tab4: " << tab4 << std::endl;
	for (size_t i = 0; i < tab2.getSize(); i++)
		tab2[i] = i + 'a';
	std::cout << "tab2: " << tab2 << "tab4: " << tab4 << std::endl;

}
