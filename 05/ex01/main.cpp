/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:25:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/04 12:57:45 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	
	/*	ctor test	*/
	Form	form1;
	Form	form2("Request of a new 2B pencil", 100, 90);
	Form	form3(form2);
	Form	form4;
	
	form4 = form2;
	
	std::cout << form1;
	std::cout << form2;
	std::cout << form3;
	std::cout << form4;
	
	/*	sign form test	*/
	Bureaucrat	john("John", 50);
	Bureaucrat	akaky;
	
	form2.beSigned(john);
	form3.beSigned(john);
	
	try{
		form4.beSigned(akaky);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << form1;
	std::cout << form2;
	std::cout << form3;
	std::cout << form4;
	
	/*	exception in ctor test	*/
	try{
		Form	form5("Impossible", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		Form	form5("Impossible", 0, 150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}