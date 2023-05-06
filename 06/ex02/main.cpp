/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:47:42 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 20:18:59 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.Class.hpp"
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
	int	num;
	
	srand(time(NULL));
	num = rand();
	if (num % 3 == 0)
		return (new A());
	if (num % 3 == 1)
		return (new B());
	if (num % 3 == 2)
		return (new C());
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p))
	{
		std::cout << "B" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(p))
	{
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "?" << std::endl;
}

void identify(Base& p)
{
	try {
		dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	
	try {
		dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	
	try {
		dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	
	std::cout << "?" << std::endl;
}

int	main(void)
{
	Base	*p;

	p = generate();
	identify(p);
	identify(*p);
	delete p;
}
