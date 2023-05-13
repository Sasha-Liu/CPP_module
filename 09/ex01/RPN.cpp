/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:52:32 by sasha             #+#    #+#             */
/*   Updated: 2023/05/13 20:23:18 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}
RPN::~RPN(void) {}
	
bool	RPN::calculator(std::string const &str)
{
	std::stack<int>	stack;
	std::stringstream	input(str);
	char				token;

	while (input >> token)
	{
		if (isdigit(token))
			stack.push(static_cast<int>(token - '0'));
		else if (stack.size() != 2 || !doMath(token, stack))
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
