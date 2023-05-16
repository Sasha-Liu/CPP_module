/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:20:01 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/16 15:08:50 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int	main(void)
{
	/*	test of project & exception of addNumber	*/
	{
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try {
			sp.addNumber(10);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "sp: " << sp << std::endl;
		
	}
	/*	test with ctor, initilaized with iterator	*/
	{
		int	a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		
		Span	span1(a, a + 10);
		
		std::cout << "shortest span: " << span1.shortestSpan() << std::endl;
		std::cout << "longest span: " << span1.longestSpan() << std::endl;
		std::cout << "span1: " << span1 << std::endl;
	}
	/*	test with empty span or span of one element	*/
	{
		Span	sp(10);
		
		std::cout << "sp: " << sp;
		try {
			sp.shortestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try {
			sp.longestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		sp.addNumber(100);
		std::cout << "sp: " << sp;
		try {
			sp.shortestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try {
			sp.longestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		sp.addNumber(100);
		std::cout << "sp: " << sp;
		
		try {
			std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		} catch (std::exception &e) {}
		try {
			std::cout << "longest span: " << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {}
		std::cout << std::endl;
	}
	/*	test with 10 000 number	*/
	{
		Span	span(10000);
		
		srand(time(NULL));
		for (unsigned int i = 0; i < 10000; i++)
			span.addNumber(rand() % 10000);
		std::cout << span;
		std::cout << "shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "longest span: " << span.longestSpan() << std::endl;
	}
	/*	other test	*/
	{
		int	a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

		Span	sp1(a, a + 10);
		Span	sp2(sp1);
		Span	sp3 = sp1;
		std::cout << "sp1: " << sp1 << "sp2: " << sp2 << "sp3: " << sp3 << std::endl;
	}
	
}