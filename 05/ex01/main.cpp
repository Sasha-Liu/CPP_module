/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:25:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 14:36:18 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	
	/*	ctor test	*/
	Form	form1;
	Form	form2("Request of a new 2B pencil", 100, 90);
	Form	form3(form2);
		
	std::cout << form1 << form2 << form3 << std::endl;
	
	/*	sign form test	*/
	Bureaucrat	john("John", 1);
	Bureaucrat	akaky;
	
	john.signForm(form1);
	john.signForm(form2);
	akaky.signForm(form3);
	
	std::cout << form1 << form2 << form3 << std::endl;
	
	/*	exception in ctor test	*/
	try{
		Form	form4("Impossible", 1, 151);
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