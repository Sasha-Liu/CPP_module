/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:46:45 by sasha             #+#    #+#             */
/*   Updated: 2023/05/12 14:54:15 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <iostream>

class RPN
{
	public:
		RPN(void);
		~RPN(void);
	
		static int	calculator(std::string const &input);
	
	private:
		std::stack<int>	_stack;
	
		RPN	&operator=(RPN const &rpn);
		RPN(RPN const &rpn);
};

#endif