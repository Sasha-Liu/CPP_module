/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:52:53 by sasha             #+#    #+#             */
/*   Updated: 2023/05/12 11:19:19 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int	main(void)
{
	MutantStack<int>	stack1;
	MutantStack<int>	stack2;
	

	stack1.push(10);
	stack2.push(20);
	std::cout << "stack1 == stack2 returns " << (stack1 == stack2) << std::endl;
}