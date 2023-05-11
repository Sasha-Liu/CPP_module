/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:20:01 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/11 16:49:44 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	int	a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	Span	span1(a, a + 10);
	
	std::cout << "span1: " << span1;
	std::cout << "longest span: " << span1.longestSpan() << std::endl;
	std::cout << "shortest span: " << span1.shortestSpan() << std::endl;
	
	
}