/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:46:45 by sasha             #+#    #+#             */
/*   Updated: 2023/05/13 20:22:29 by sasha            ###   ########.fr       */
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
	
		static bool	calculator(std::string const &str);
	
	private:
		static bool		doMath(char token, std::stack<int> &stack);
		static int		OperatorNum(char c);
		
		RPN	&operator=(RPN const &rpn);
		RPN(RPN const &rpn);
};

#endif