/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:52:32 by sasha             #+#    #+#             */
/*   Updated: 2023/05/16 13:57:37 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}
RPN::~RPN(void) {}
	
bool	RPN::calculator(std::string const &str)
{
	std::stringstream	input(str);
	std::stack<int>		stack;
	char				c;
	
	while (input >> c)
	{
		if (isdigit(c))
			stack.push(static_cast<int>(c - '0'));
		else if (stack.size() < 2 || !doMath(c, stack))
			return (false);
	}
	if (stack.size() != 1)
		return (false);
	std::cout << "Result: " << stack.top() << std::endl;
	return (true);
}

bool	RPN::doMath(char token, std::stack<int> &stack)
{
	int	x;
	int	y;

	y = stack.top();
	stack.pop();
	x = stack.top();
	stack.pop();
	switch (OperatorNum(token))
	{
		case '+':
			stack.push(x + y);
			break ;
		case '-':
			stack.push(x - y);
			break ;
		case '*':
			stack.push(x * y);
			break ;
		case '/':
			if (y == 0)
				return (false);
			stack.push(x / y);
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
