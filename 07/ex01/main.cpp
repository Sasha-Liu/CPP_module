/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:06:30 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 15:16:20 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

int		main(void)
{
	int			tab1[] = {0, 1, 2, 3, 4};
	double		tab2[] = {0.1, 4.6, 9, -0.001};
	char		tab3[] = "hello world";
	std::string	tab4[] = {"one", "two", "three", "four"};
	
	iter(tab1, 5, print);
	std::cout << std::endl;
	iter(tab2, 4, print);
	std::cout << std::endl;
	iter(tab3, 11, print);
	std::cout << std::endl;
	iter(tab4, 4, print);
	std::cout << std::endl;
}