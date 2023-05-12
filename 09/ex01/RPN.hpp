/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:46:45 by sasha             #+#    #+#             */
/*   Updated: 2023/05/12 17:39:32 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <iostream>
# include <sstream>
# include <cctype>

class RPN
{
	public:
		RPN(void);
		~RPN(void);
	
		bool	calculator(std::string const &str);
	
	private:
		std::stack<int>	_stack;

		bool		doMath(char token);
		static int	OperatorNum(char c);
		RPN	&operator=(RPN const &rpn);
		RPN(RPN const &rpn);
};

#endif