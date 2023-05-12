/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:52:32 by sasha             #+#    #+#             */
/*   Updated: 2023/05/12 17:43:48 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) : _stack() {}
RPN::~RPN(void) {}
	
bool	RPN::calculator(std::string const &str)
{
	std::stringstream	input(str);
	char				token;

	while (input >> token)
	{
		// input >> token;
		if (isdigit(token))
		{
			this->_stack.push(static_cast<int>(token - '0'));
		}
		else if (!doMath(token))
		{
			return (false);
		}
	}
	if (this->_stack.size() != 1)
		return (false);
	std::cout << "Result: " << _stack.top() << std::endl;
	this->_stack.pop();
	return (true);
}

bool	RPN::doMath(char token)
{
	int	x;
	int	y;

	if (this->_stack.size() != 2)
		return (false);
	y = this->_stack.top();
	this->_stack.pop();
	x = this->_stack.top();
	this->_stack.pop();
	switch (OperatorNum(token))
	{
		case '+':
			this->_stack.push(x + y);
			break ;
		case '-':
			this->_stack.push(x - y);
			break ;
		case '*':
			this->_stack.push(x * y);
			break ;
		case '/':
			this->_stack.push(x / y);
			break ;
		default:
			return (false);
	}
	return (true);
}

int	RPN::OperatorNum(char c)
{
	if (c == '+')
		return (static_cast<int>(c));
	if (c == '-')
		return (static_cast<int>(c));
	if (c == '*')
		return (static_cast<int>(c));
	if (c == '/')
		return (static_cast<int>(c));
	return (0);
}
