/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:17:48 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/11 16:49:52 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP 
# define SPAN_HPP

# include <stdexcept>
# include <iostream>
# include <new>
# include <algorithm>

class Span
{
	public:	
		Span(unsigned int n);
		Span(Span const &span);
		~Span(void);
		Span	&operator=(Span const &span);
	
		unsigned int	getSize(void) const;
		unsigned int	getNext(void) const;
		int const		&operator[](unsigned int i) const;
		int				&operator[](unsigned int i);
		
		void	addNumber(int n);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		
		template<class InputIt>
		Span(InputIt first, InputIt last);
			
	private:
		unsigned int	_size;
		unsigned int	_next;
		int				*_tab;
		
		/*	private function	*/
		Span(void);
};

std::ostream		&operator<<(std::ostream &out, Span const &span);

template<class InputIt>
Span::Span(InputIt first, InputIt last): _size(std::distance(first, last)),
		_next(0), _tab(new int[_size])
{
	for (InputIt it = first; it != last; it++)
		this->addNumber(*it);
}

#endif