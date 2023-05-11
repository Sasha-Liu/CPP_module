/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:20:01 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/11 17:03:35 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
	}
	
}