/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:38:00 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/11 16:23:08 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _size(n), _next(0), _tab(new int[n]) {}

Span::Span(Span const &span): 
	_size(span._size), _next(span._next), _tab(new int[_size]) {}

Span::~Span(void)
{
	delete [] _tab;
}

Span	&Span::operator=(Span const &span)
{
	delete [] this->_tab;
	this->_size = span._size;
	this->_next = span._next;
	this->_tab = new int[this->_size];
	for (unsigned int i = 0; i < this->_next; i++)
		this->_tab[i] = span._tab[i];
	return (*this);
}

unsigned int	Span::getSize(void) const
{
	return (this->_size);	
}

unsigned int	Span::getNext(void) const
{
	return (this->_next);
}

/*	read only	*/
int	const	&Span::operator[](unsigned int i) const
{
	if (i >= this->_size)
	{
		throw std::runtime_error("Span: Array out of Bound");
	}
	if (i >= this->_next)
	{
		throw std::runtime_error("Span: read uninitilaized value");
	}
	return (this->_tab[i]);
}

/*	allow write	*/
int		&Span::operator[](unsigned int i)
{
	if (i >= this->_size)
	{
		throw std::runtime_error("Span: Array out of Bound");
	}
	return (this->_tab[i]);
}

void	Span::addNumber(int n)
{
	if (this->_next >= this->_size)
	{
		throw std::runtime_error("Span: addNumber: Span is Full");
	}
	this->_tab[_next] = n;
	this->_next++;
}

// int		Span::shortestSpan(void) const
// {
	
// }

// int		Span::longestSpan(void) const
// {
	
// }



		
std::ostream		&operator<<(std::ostream &out, Span const &span)
{
	for (unsigned int i = 0; i < span.getNext(); i++)
		out << span[i] << " ";
	out << std::endl;
	return (out);
}

